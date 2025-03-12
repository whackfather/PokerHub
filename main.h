// PokerHub main header file
// Written by Roman Rodriguez

// Defines
#ifndef MAIN_H
#define MAIN_H

// Include statements
#include <vector>
#include <string>
using namespace std;

// Game information struct
typedef struct gameInfo {
    string date;
    int noOfPlayers;
    float dealerTipPerc;
    float totalBuyIn = 0;
    float totalGrossWin = 0;
    float totalTip = 0;
    float totalPostTip = 0;
    float totalNetWin = 0;
} gameInfo;

// Player information struct
typedef struct playerInfo {
    string name;
    float buyIn;
    float grossWin;
    char diffTip;
    float tip;
    float postTip;
    float netWin;
} playerInfo;

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
vector<string> split(const string&, char);
float roundUp(float, int);
float roundDown(float, int);


#endif // MAIN_H
