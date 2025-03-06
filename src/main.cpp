// PokerHub
// Written by Roman Rodriguez

// Include statements
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <vector>
#include <fstream>
#include <sstream>
#include <typeinfo>
#include "main.h"
using namespace std;

// Main function
int main() {
    vector<vector<string>> csvData = readData("data.csv");
    string desiredDate = "020225";
    vector<vector<string>> desiredInfo = getNightInfo(desiredDate, csvData);
    cout << desiredInfo[4][4] << endl;
    return 0;
}

// Get info for a game of poker given a specific date of play and the location of the data
vector<vector<string>> getNightInfo(string desiredDate, vector<vector<string>> csvData) {
    int startKey, playerNum;
    for (int i = 0; i <= csvData.size(); i++) {
        if (csvData[i][0] == desiredDate) {
            startKey = i;
            string playerNumStr = csvData[i][1];
            playerNum = stoi(playerNumStr);
            break;
        }
    }

    vector<vector<string>> desiredInfo = vector<vector<string>>(csvData.begin() + startKey, csvData.begin() + (startKey + playerNum + 2));
    return desiredInfo;
}

// Read data from csv file into a 2D vector
vector<vector<string>> readData(string filename) {
    ifstream file(filename);
    vector<string> lines;
    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }
    file.close();

    vector<vector<string>> csvData;
    for (const string& currentLine : lines) {
        vector<string> splitLine = split(currentLine, ',');
        csvData.push_back(splitLine);
    }

    return csvData;
}

// Write new data to csv file
void writeData() {
    gameInfo game;
    FILE *data;
    data = fopen("data.csv", "a");

    cout << "Date of play (MMDDYY): "; cin >> game.date;
    cout << "Number of players: "; cin >> game.noOfPlayers;
    cout << "Dealer tip (%): "; cin >> game.dealerTipPerc;
    game.dealerTipPerc /= 100.0f;
    game.dealerTotal = 0.00f;

    fprintf(data, "%s,%d,0,0,0,0\n", game.date.c_str(), game.noOfPlayers);

    for (int i = 0; i < game.noOfPlayers; i++) {
        vector<playerInfo> players(game.noOfPlayers);

        printf("Player %d\n", i + 1);
        cout << "Name: "; cin >> players[i].name;
        cout << "Buy in: "; cin >> players[i].buyIn;
        cout << "Gross winnings: "; cin >> players[i].grossWin;
        cout << "Custom tip? (y/n): "; cin >> players[i].diffTip;

        if (players[i].diffTip == 'y') {
            float customTip;
            cout << "Custom tip: "; cin >> customTip;
            game.dealerTotal += customTip;
            float actualWin = players[i].grossWin - customTip;
            float netWin = actualWin - players[i].buyIn;
            fprintf(data, "%s,%.2f,%.2f,%.2f,%.2f,%.2f\n", players[i].name.c_str(), players[i].buyIn, players[i].grossWin, customTip, actualWin, netWin);
        } else {
            float dealerTip = roundDown(game.dealerTipPerc * players[i].grossWin, 2);
            game.dealerTotal += dealerTip;
            float actualWin = players[i].grossWin - dealerTip;
            float netWin = actualWin - players[i].buyIn;
            fprintf(data, "%s,%.2f,%.2f,%.2f,%.2f,%.2f\n", players[i].name.c_str(), players[i].buyIn, players[i].grossWin, dealerTip, actualWin, netWin);
        }
    }

    fprintf(data, "TOTAL,0,0,0,0,0");
    fprintf(data, "END,0,0,0,0,0");

    fclose(data);
}

// Split a string into a vector of strings given a delimiter
vector<string> split(const string& str, char delimiter) {
    vector<string> cells;
    stringstream ss(str);
    string cell;
    while (getline(ss, cell, delimiter)) {
        cells.push_back(cell);
    }
    return cells;
}

// Round up a number to a given number of decimals
float roundUp(float n, int decimals) {
    int multiplier = pow(10, decimals);
    return static_cast<float>(ceil(n * multiplier)) / static_cast<float>(multiplier);
}

// Round down a number to a given number of decimals
float roundDown(float n, int decimals) {
    int multiplier = pow(10, decimals);
    return static_cast<float>(floor(n * multiplier)) / static_cast<float>(multiplier);
}
