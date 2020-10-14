// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on October 2020
// This program is a positive number only sum calculator with
//     a Continue statement

#include <iostream>

int main() {
    // This function finds the sum of all positive numbers
    std::string num_addends_str;
    std::string addend_str;
    int counter;
    int sum;
    int num_addends_int;
    int addend_int;

    // Input
    counter = 0;
    sum = 0;

    while (true) {
        std::cout << "Enter the number of addends: ";
        std::cin >> num_addends_str;

        try {
            num_addends_int = std::stoi(num_addends_str);
            if (num_addends_int < 2) {
                std::cout << "You have not a valid number of addends, please"
                         " input 2 or more!" << std::endl;
                std::cout << "" << std::endl;
            } else {
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "That is not an integer, please input the number of"
                  " addends!" << std::endl;
            std::cout << "" << std::endl;
        }
    }

    // Process
    while (counter < num_addends_int) {
        counter += 1;

        std::cout << "Enter a number: ";
        std::cin >> addend_str;

        try {
            addend_int = std::stoi(addend_str);
            if (addend_int <= 0) {
                continue;
            } else {
                sum += addend_int;
            }
        } catch (std::invalid_argument) {
            std::cout << "That is not an integer, please input a number"
            << std::endl;
            std::cout << "" << std::endl;
            counter -= 1;
        }
    }

    // Output
    std::cout << "The sum of all positive numbers is " << sum << std::endl;
}
