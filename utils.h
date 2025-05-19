// PokerHub utility functions header file
// Written by Roman Rodriguez

#ifndef UTILS_H
#define UTILS_H

// Include statements
#include <vector>
#include <string>

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
std::vector<std::string> getNightsList(std::vector<std::vector<std::string>>&);
std::vector<std::string> getPlayerNameList(std::vector<std::vector<std::string>>&);
float getTotal(columns, std::string, std::vector<std::vector<std::string>>&);
std::vector<std::vector<std::string>> getPlayerInfo(std::string, std::vector<std::vector<std::string>>&);
std::vector<std::vector<std::string>> getNightInfo(std::string, std::vector<std::vector<std::string>>&);
std::vector<std::vector<std::string>> readData(std::string);
void writeData();
float roundUp(float, int);
float roundDown(float, int);

#endif // UTILS_H
