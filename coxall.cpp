// Copyright (c) 2019 St. Mother Teresa HS All rights reserved
//
// Created by: Mr. Coxall
// Created on: Nov 2019
// This program checks numbers to see if they are Armstrong Numbers

#include <iostream>
#include <string>


int main() {
    // This Function lets user to know the square of numbers until input
    int number_as_int = 0;
    int potential_armstrong_number = 0;
    int length_of_number = 0;
    int single_digit_as_int = 0;
    std::string number_as_string = "";
   
    // find Armstrong Numbers
    std::cout << "Lets find out all the Armstrong numbers. " << std::endl;
    std::cout << "Enter a number you would like to check: ";
    std::cin >> number_as_string;
    std::cout << "" << std::endl;

   // process & output
   try {
        number_as_int = std::stoi(number_as_string);

        // need to know length of digit
        length_of_number = number_as_string.size();
        std::cout << "This number has " <<  length_of_number << " digits" << std::endl;
        potential_armstrong_number = 0;
       
        for(auto &single_digit_as_string : number_as_string) {
            single_digit_as_int = single_digit_as_string - '0';;
            std::cout << single_digit_as_int << std::endl;
        }
   } catch (std::invalid_argument) {
       std::cout << "Sorry, that was not an integer.";
   }
}
