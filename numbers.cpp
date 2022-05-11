// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on May 2022
// The loop multiplier

#include <iostream>

int main() {
    // this program shows the sum of all numbers from 0 to number
    std::string intNumber;
    int number;
    int sum = 1;
    int counter = 1;


    // input
    std::cout << "Enter number (integer): ";
    std::cin >> intNumber;
    std::cout << std::endl;

    // process & output
    try {
        number = std::stoi(intNumber);
        if (number > 0) {
            do {
                sum = sum * counter;
                counter = counter + 1;
                } while (counter <= number);
            std::cout << "" << number << "! = " "" << sum << std::endl;
        } else {
            std::cout << "Not a positive number" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Not a number";
    }
    std::cout << "\nDone." << std::endl;
}
