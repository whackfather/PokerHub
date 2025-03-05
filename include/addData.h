using namespace std;

float roundUp(float n, int decimals);
float roundDown(float n, int decimals);

typedef struct {
    char date[6];
    int noOfPlayers;
    float dealerTipPerc;
    float dealerTotal;
} game;

typedef struct {
    char name[20];
    float buyIn;
    float grossWin;
    char diffTip[1];
} player;
