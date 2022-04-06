// // Copyright (c) 2022 Dahrio Francois All rights reserved

// Created by: Dahrio Francois
// Created on: April 2022
// This program lets you know if you can date
// a grandma's grandchild, if you are rich or handsome

#include <iostream>
#include <string>


int main() {
    // this function creates the dating program
    std::string financialStatus;
    std::string attractivenessStatus;

    std::cout << "What is your financial status? Are you rich? : ";
    std::cin >> financialStatus;
    std::cout << "\nWhat about your attractiveness? Are you handsome? : ";
    std::cin >> attractivenessStatus;

    if (financialStatus == "yes", attractivenessStatus == "yes") {
        std::cout << "\nYou may date my grandchild." << std::endl;
    } else if (financialStatus, attractivenessStatus == "no") {
        std::cout <<
        "\nI don't wanna see you around my grandchild again." << std::endl;
    } else {
        std::cout << "\nPlease answer with yes or no." << std::endl;
}
}

