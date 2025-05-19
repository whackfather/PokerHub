// PokerHub utility functions
// Written by Roman Rodriguez

// Include statements
#include <cmath>
#include <cstdio>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include "utils.h"

// Get list of all nights played ever
std::vector<std::string> getNightsList(std::vector<std::vector<std::string>>& csvData) {
    std::vector<std::string> nightList;

    for (int i = 0; i < int(csvData.size()); i++) {
        if (csvData[i][0].find('/') != std::string::npos) {
            if (find(nightList.begin(), nightList.end(), csvData[i][0]) == nightList.end()) {
                nightList.push_back(csvData[i][0]);
            }
        }
    }

    return nightList;
}

// Get list of all players ever
std::vector<std::string> getPlayerNameList(std::vector<std::vector<std::string>>& csvData) {
    std::vector<std::string> playerList;

    for (int i = 0; i < int(csvData.size()); i++) {
        if (csvData[i][0].find('/') == std::string::npos && csvData[i][0] != "TOTAL" && csvData[i][0] != "END") {
            if (find(playerList.begin(), playerList.end(), csvData[i][0]) == playerList.end()) {
                playerList.push_back(csvData[i][0]);
            }
        }
    }

    return playerList;
}

// Get totals for one person (or TOTAL)
float getTotal(columns column, std::string name, std::vector<std::vector<std::string>>& csvData) {
    std::vector<std::vector<std::string>> target = getPlayerInfo(name, csvData);
    float total = 0.0;

    for (int i = 0; i < int(target.size()); i++) {
        total += stof(target[i][column]);
    }

    return total;
}

// Get info for specific player (or TOTAL) in a 2D vector
std::vector<std::vector<std::string>> getPlayerInfo(std::string playerName, std::vector<std::vector<std::string>>& csvData) {
    std::vector<std::vector<std::string>> player;

    for (int row = 0; row < int(csvData.size()); row++) {
        if (csvData[row][0] == playerName) {
            player.push_back(csvData[row]);
        }
    }

    return player;
}

// Get info for a game of poker given a specific date of play
std::vector<std::vector<std::string>> getNightInfo(std::string desiredDate, std::vector<std::vector<std::string>>& csvData) {
    int startKey = 0, playerNum = 0;
    for (int i = 0; i <= int(csvData.size()); i++) {
        if (csvData[i][0] == desiredDate) {
            startKey = i;
            std::string playerNumStr = csvData[i][1];
            playerNum = stoi(playerNumStr);
            break;
        }
    }

    std::vector<std::vector<std::string>> desiredInfo = std::vector<std::vector<std::string>>(csvData.begin() + startKey, csvData.begin() + (startKey + playerNum + 2));
    return desiredInfo;
}

// Read data from csv file into a 2D vector
std::vector<std::vector<std::string>> readData(std::string filePath) {
    std::vector<std::vector<std::string>> data;
    std::ifstream file(filePath);
    std::string line;

    while (getline(file, line)) {
        std::vector<std::string> row;
        std::stringstream lineStream(line);
        std::string cell;

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
