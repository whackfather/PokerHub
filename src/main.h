#include <vector>
#include <string>
using namespace std;

vector<vector<string>> readData(string);
void writeData();
vector<string> split(const string&, char);
float roundUp(float, int);
float roundDown(float, int);

typedef struct {
    string date;
    int noOfPlayers;
    float dealerTipPerc;
    float dealerTotal;
} gameInfo;

typedef struct {
    string name;
    float buyIn;
    float grossWin;
    char diffTip;
} playerInfo;
