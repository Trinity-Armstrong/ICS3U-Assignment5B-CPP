// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: November 2019
// This program determines if user input is an Armstrong Number

#include <iostream>
using  namespace std;

int main() {
    // This function determines if user input is an Armstrong Number

    // Variables
    std::string numberAsString;
    int numberAsInt;
    int lengthOfNumber;
    int len;
    int potentialArmstrongNumber = 0;
    std::string singleDigitAsString;
    int addingNum;

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
        for (string singleDigitAsString : numberAsString) {
            singleDigitAsString = std::stoi(singleDigitAsString);
            addingNum = singleDigitAsString ** lengthOfNumber;
            potentialArmstrongNumber = potentialArmstrongNumber + addingNum;

            // display the result
            if (numberAsInt == potentialArmstrongNumber) {
                std::cout << numberAsInt << "is an Armstrong number." 
                          << std::endl;
            } else {
                std::cout << numberAsInt << "is not an Armstrong number."
                          << std::endl;
            }
        }
    } catch (std::invalid_argument) {
            std::cout << "That is not an integer." << std::endl; }
}
