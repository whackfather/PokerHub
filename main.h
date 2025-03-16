// PokerHub main header file
// Written by Roman Rodriguez

// Defines
#ifndef MAIN_H
#define MAIN_H

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
float getTotal(columns, string, vector<vector<string>>);
vector<vector<string>> getPlayerInfo(string, vector<vector<string>>);
vector<vector<string>> getNightInfo(string, vector<vector<string>>);
vector<vector<string>> readData(string);
void writeData();
float roundUp(float, int);
float roundDown(float, int);

#endif // MAIN_H
