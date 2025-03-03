# Console UI testing for Poker App
# v0.1
# Written by Roman Rodriguez

# Imports
import math

# Functions
def roundUp(n, decimals):
    multiplier = 10 ** decimals
    return math.ceil(n * multiplier) / multiplier

def roundDown(n, decimals):
    multiplier = 10 ** decimals
    return math.floor(n * multiplier) / multiplier

def statsOut(grossWin, buyIn, tip):
    actualWin = grossWin - tip
    print(f"Post tip: {round(actualWin, 2)}")
    print(f"Net winnings: {round((actualWin) - buyIn, 2)}")

# Main Code
date = input("Date of Play (MMDDYY): ")
noOfPlayers = int(input("Number of players: "))
dealerTipPerc = int(input("Dealer tip (%): ")) / 100
totalDealer = 0

for i in range(noOfPlayers):
    print(f"Player {i + 1}")
    name = input("Name: ")
    buyIn = float(input("Buy in: "))
    grossWin = float(input("Gross winnings: "))
    customTipInq = str(input("Custom tip? (y/n): "))
    if customTipInq == "y":
        customTip = float(input("Custom tip: "))
        totalDealer += customTip
        statsOut(grossWin, buyIn, customTip)
    else:
        dealerTip = roundDown(dealerTipPerc * grossWin, 2)
        totalDealer += dealerTip
        statsOut(grossWin, buyIn, dealerTip)
    
print(f"Dealer total: {totalDealer}")
