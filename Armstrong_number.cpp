// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: November 2019
// This program determines if user input is an Armstrong Number

#include <iostream>

int main() {
    // This function determines if user input is an Armstrong Number

    // Variables
    std::string numberAsString;
    int numberAsInt;
    int lengthOfNumber;
    int len;
    int potentialArmstrongNumber;
    std::string singleDigitAsString;
    int addingNum;

    // Input
    std::cout << "Lets find out all the Armstrong numbers." << std::endl;
    std::cout << "Enter a number you would like to check: " << std::endl;
    std::cin >> numberAsString;
    std::cout << "" << std::endl;

    // Process & Output
    try {
        numberAsInt = std::stoi(numberAsString);

        // need to know length of digit
        lengthOfNumber = len(numberAsString);
        potentialArmstrongNumber = 0;

        for (singleDigitAsString in numberAsString) {
            singleDigitAsString = std::stoi(singleDigitAsString);
            addingNum = singleDigitAsString**lengthOfNumberr;
            potentialArmstrongNumber = potentialArmstrongNumberrmstrong_number
            + addingNum;

            // display the result
            if (numberAsInts_int == potentialArmstrongNumber) {
            std::cout << numberAsInt << "is an Armstrong number." << std::endl;
            } else: {
            std::cout << numberAsInt << "is not an Armstrong number."
            << std::endl;
            }
    } )catch (std::invalid_argument) {
            std::cout << "That is not an integer." << std::endl;
        }
    }
}
