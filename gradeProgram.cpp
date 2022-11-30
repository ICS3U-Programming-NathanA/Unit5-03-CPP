// Copyright (c) 2022 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: November 26, 2022
// This program asks the user for their level, it then turns that level
// into a percentage, it then displays it back to the

#include <iostream>

// This functions determines the user percentage from the level they entered
int calcMark(std::string level) {
    // Declared Variable
    int grade;

    // Finds the percentage value of the inputted level
    if (level == "4+") {
        grade = 96;
    } else if (level == "4") {
        grade = 90;
    } else if (level == "4-") {
        grade = 84;
    } else if (level == "3+") {
        grade = 78;
    } else if (level == "3") {
        grade = 74;
    } else if (level == "3-") {
        grade = 71;
    } else if (level == "2+") {
        grade = 68;
    } else if (level == "2") {
        grade = 64;
    } else if (level == "2-") {
        grade = 61;
    } else if (level == "1+") {
        grade = 58;
    } else if (level == "1") {
        grade = 58;
    } else if (level == "1-") {
        grade = 51;
    } else {
        grade = -1;
    }

    // Returns percentage value to main()
    return grade;
}

int main() {
    // declare userLevel as a string
    std::string userLevel;

    // Asks user for their level
    std::cout << "Enter your level: ";
    std::cin >> userLevel;

    // Calls calc_level
    int mark = calcMark(userLevel);

    // If the percentage is equal to -1 then display invalid input
    if (mark == -1) {
        std::cout << "Enter a valid input next time\n";
        // IF the level input is valid
    } else {
        // Displays the percentage of the level to the user
        std::cout << "Your level is equal to "<< mark << "%." << std::endl;
    }
}
