// PokerHub main header file
// Written by Roman Rodriguez

// Include statements
#include <vector>
#include <string>
using namespace std;

// Function declarations
vector<vector<string>> getNightInfo(string, vector<vector<string>>);
vector<vector<string>> readData(string);
void writeData();
vector<string> split(const string&, char);
float roundUp(float, int);
float roundDown(float, int);

// Game information struct
typedef struct {
    string date;
    int noOfPlayers;
    float dealerTipPerc;
    float dealerTotal;
} gameInfo;

// Player information struct
typedef struct {
    string name;
    float buyIn;
    float grossWin;
    char diffTip;
} playerInfo;
