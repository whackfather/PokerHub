# PokerHub

PokerHub is a poker game logging application meant to be used by individuals who host, deal, and bookkeep for a consistent group of players. 

PokerHub has three main functions:
1. It can calculate and record data for a new game given a number of players, the name of each player, the buy-in of each player, and the gross winnings of each player.
2. It displays lifetime statistics for every player that exists in the database.
3. It can retrieve data for specific games given the date a game was played.

Unfortunately, PokerHub still has some key limitations which may eventually be fixed (there is no guarantee they will be fixed):
1. It cannot store data for more than one game on one day.

Since PokerHub was targeted at myself, it fits my specific needs and not the needs of the general user. If you use PokerHub for yourself and find bugs or would like to request features, let me know and I will do my best to make those things happen.

## Install Instructions
Go to build -> Desktop_Qt_6_8_2_MinGW_64_bit-Release -> release -> PokerHub.exe and use the ellipses in the top right to download PokerHub.exe. In file explorer, create a new folder and place PokerHub.exe in that folder. This is necessary because PokerHub will automatically generate a csv file in the directory it is in called data.csv where it will store all game data.
