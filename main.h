using namespace std;

void writeData();
float roundUp(float n, int decimals);
float roundDown(float n, int decimals);

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
