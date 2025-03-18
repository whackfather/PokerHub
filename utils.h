// PokerHub utility functions header file
// Written by Roman Rodriguez

#ifndef UTILS_H
#define UTILS_H

// Include statements
#include <vector>
#include <string>
using namespace std;

// Columns type definition
typedef enum columns {
    NAME,
    BUYIN,
    GROSSWIN,
    TIP,
    POSTTIP,
    NET
} columns;

// Function declarations
vector<string> getNightsList();
vector<string> getPlayerNameList();
float getTotal(columns, string);
vector<vector<string>> getPlayerInfo(string, vector<vector<string>>);
vector<vector<string>> getNightInfo(string, vector<vector<string>>);
vector<vector<string>> readData(string);
void writeData();
float roundUp(float, int);
float roundDown(float, int);

#endif // UTILS_H
