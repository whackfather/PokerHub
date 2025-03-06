#include <iostream>
#include <cmath>
#include <stdio.h>
#include <vector>
#include <fstream>
#include <sstream>
#include "main.h"
using namespace std;

int main() {
    vector<vector<string>> csvData = readData("data.csv");
    cout << csvData[14][3] << endl;
    return 0;
}

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

void writeData() {
    gameInfo game;
    FILE *data;
    data = fopen("data.csv", "a");
    cout << "Date of play (MMDDYY): "; cin >> game.date;
    cout << "Number of players: "; cin >> game.noOfPlayers;
    cout << "Dealer tip (%): "; cin >> game.dealerTipPerc;
    game.dealerTipPerc /= 100.0f;
    game.dealerTotal = 0.00f;
    fprintf(data, "%s,0,0,0,0,0\n", game.date);

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
            fprintf(data, "%s,%.2f,%.2f,%.2f,%.2f,%.2f\n", players[i].name, players[i].buyIn, players[i].grossWin, customTip, actualWin, netWin);
        } else {
            float dealerTip = roundDown(game.dealerTipPerc * players[i].grossWin, 2);
            game.dealerTotal += dealerTip;
            float actualWin = players[i].grossWin - dealerTip;
            float netWin = actualWin - players[i].buyIn;
            fprintf(data, "%s,%.2f,%.2f,%.2f,%.2f,%.2f\n", players[i].name, players[i].buyIn, players[i].grossWin, dealerTip, actualWin, netWin);
        }
    }

    fclose(data);
}

vector<string> split(const string& str, char delimiter) {
    vector<string> cells;
    stringstream ss(str);
    string cell;
    while (getline(ss, cell, delimiter)) {
        cells.push_back(cell);
    }
    return cells;
}

float roundUp(float n, int decimals) {
    int multiplier = pow(10, decimals);
    return static_cast<float>(ceil(n * multiplier)) / static_cast<float>(multiplier);
}

float roundDown(float n, int decimals) {
    int multiplier = pow(10, decimals);
    return static_cast<float>(floor(n * multiplier)) / static_cast<float>(multiplier);
}
