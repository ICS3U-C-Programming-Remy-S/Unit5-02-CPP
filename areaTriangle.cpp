// Copyright (c) 2023 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Nov, 28, 2023
// This program will ask user for the base and
// height of a triangle and display the area
// using a multiple functions

#include <iostream>
#include <string>

void calc_area_triangle(float base, float height) {
    // Calculate the area
    float area = (base * height) / 2;

        // display area back to user
        std::cout << "\n" << base << "cm x "
        << height << "cm = " << area << "cm^2";
}


int main() {
    // declare variables strs and floats
    std::string userBaseStr;
    std::string userHeightStr;
    float userBaseFloat;
    float userHeightFloat;

    // Get base and height from the user and display message
    std::cout << "This program will ask user for the base and\n";
    std::cout << "height of a triangle and display the area.\n";
    std::cout << "Please enter base in cm: ";
    std::cin >> userBaseStr;
    std::cout << "Please enter height in cm: ";
    std::cin >> userHeightStr;

    // Catch if the user entered a str
    try {
        // Convert base as a string to float
        userBaseFloat = std::stof(userBaseStr);

        // Convert base as a string to float
        userHeightFloat = std::stof(userHeightStr);
    } catch (std::invalid_argument) {
        // Message for invalid user number
        std::cout << "\n" << userBaseStr << " and "
        << userHeightStr << " are not a valid base and height.\n";
    }

    // Call the calc_area_triangle function
    calc_area_triangle(userBaseFloat, userHeightFloat);
}
