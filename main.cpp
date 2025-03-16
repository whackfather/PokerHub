// PokerHub
// Written by Roman Rodriguez

// Include statements
#include <cmath>
#include <cstdio>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <QApplication>
#include "main.h"
#include "mainwindow.h"
using namespace std;

// Main function
int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

// Get totals for one person (or TOTAL)
float getTotal(columns column, string name, vector<vector<string>> csvData) {
    float total = 0.0;
    vector<vector<string>> target = getPlayerInfo(name, csvData);

    for (int i = 0; i < int(target.size()); i++) {
        total += stof(target[i][column]);
    }

    return total;
}

// Get info for specific player (or TOTAL) in a 2D vector
vector<vector<string>> getPlayerInfo(string playerName, vector<vector<string>> csvData) {
    vector<vector<string>> player;

    for (int row = 0; row < int(csvData.size()); row++) {
        if (csvData[row][0] == playerName) {
            player.push_back(csvData[row]);
        }
    }

    return player;
}

// Get info for a game of poker given a specific date of play
vector<vector<string>> getNightInfo(string desiredDate, vector<vector<string>> csvData) {
    int startKey = 0, playerNum = 0;
    for (int i = 0; i <= int(csvData.size()); i++) {
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
vector<vector<string>> readData(string filePath) {
    vector<vector<string>> data;
    ifstream file(filePath);
    string line;

    while (getline(file, line)) {
        vector<string> row;
        stringstream lineStream(line);
        string cell;

        while (getline(lineStream, cell, ',')) {
            row.push_back(cell);
        }

        data.push_back(row);
    }

    file.close();
    return data;
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
