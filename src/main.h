#include <vector>
using namespace std;

vector<vector<string>> readData(string);
void writeData();
vector<string> split(const string&, char);
float roundUp(float, int);
float roundDown(float, int);

typedef struct {
    char date[6];
    int noOfPlayers;
    float dealerTipPerc;
    float dealerTotal;
} gameInfo;

typedef struct {
    char name[25];
    float buyIn;
    float grossWin;
    char diffTip;
} playerInfo;
