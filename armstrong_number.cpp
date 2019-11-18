// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: November 2019
// This program determines if user input is an Armstrong Number

#include <iostream>
#include <string>

int main() {
    // This function determines if user input is an Armstrong Number

    // Variables
    int numberAsInt = 0;
    int lengthOfNumber = 0;
    int potentialArmstrongNumber = 0;
    int singleDigitAsInt;
    int addingNum;
    std::string numberAsString = "";

    // Input
    std::cout << "Lets find out all the Armstrong numbers." << std::endl;
    std::cout << "Enter a number you would like to check: " << std::endl;
    std::cin >> numberAsString;
    std::cout << "" << std::endl;

    // need to know length of digit
    lengthOfNumber = numberAsString.length();

    // Process & Output
    try {
        numberAsInt = std::stoi(numberAsString);
        
        // need to know length of digit
        lengthOfNumber = numberAsString.size();
        potentialArmstrongNumber = 0;

        for(auto & singleDigitAsString : numberAsString) {
            singleDigitAsInt = singleDigitAsString - '0';;
            std::cout << singleDigitAsInt << std::endl;
            addingNum = singleDigitAsString*lengthOfNumber;
            potentialArmstrongNumber = potentialArmstrongNumber + addingNum;

            // display the result
        if (numberAsInt == potentialArmstrongNumber) {
            std::cout << numberAsInt << " is an Armstrong number."
                      << std::endl;
        } else {
            std::cout << numberAsInt << " is an Armstrong number."
                          << std::endl;
        }
        }
    } catch (std::invalid_argument) {
            std::cout << "That is not an integer." << std::endl;
    }
}
