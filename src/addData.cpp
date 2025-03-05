#include <iostream>
#include <cmath>
#include <stdio.h>
#include "addData.h"
using namespace std;

int main() {
    game game;
    FILE *data;
    data = fopen("data.csv", "a");
    cout << "Date of play (MMDDYY): "; cin >> game.date;
    cout << "Number of players: "; cin >> game.noOfPlayers;
    cout << "Dealer tip (%): "; cin >> game.dealerTipPerc;
    game.dealerTipPerc /= 100.0f;
    game.dealerTotal = 0.0f;
    fprintf(data, "%s\n", game.date);

    for (int i = 0; i < game.noOfPlayers; i++) {
        player player[game.noOfPlayers];
        printf("Player %d\n", i + 1);
        cout << "Name: "; cin >> player[i].name;
        cout << "Buy in: "; cin >> player[i].buyIn;
        cout << "Gross winnings: "; cin >> player[i].grossWin;
        cout << "Custom tip? (y/n): "; cin >> player[i].diffTip;
        if (*player[i].diffTip == 'y') {
            float customTip;
            cout << "Custom tip: "; cin >> customTip;
            game.dealerTotal += customTip;
            float actualWin = player[i].grossWin - customTip;
            float netWin = actualWin - player[i].buyIn;
            fprintf(data, "%s,%.2f,%.2f,%.2f,%.2f,%.2f\n", player[i].name, player[i].buyIn, player[i].grossWin, customTip, actualWin, netWin);
        } else {
            float dealerTip = roundDown(game.dealerTipPerc * player[i].grossWin, 2);
            game.dealerTotal += dealerTip;
            float actualWin = player[i].grossWin - dealerTip;
            float netWin = actualWin - player[i].buyIn;
            fprintf(data, "%s,%.2f,%.2f,%.2f,%.2f,%.2f\n", player[i].name, player[i].buyIn, player[i].grossWin, dealerTip, actualWin, netWin);
        }
    }

    fclose(data);
    return 0;
}

float roundUp(float n, int decimals) {
    int multiplier = pow(10, decimals);
    return static_cast<float>(ceil(n * multiplier)) / static_cast<float>(multiplier);
}

float roundDown(float n, int decimals) {
    int multiplier = pow(10, decimals);
    return static_cast<float>(floor(n * multiplier)) / static_cast<float>(multiplier);
}
