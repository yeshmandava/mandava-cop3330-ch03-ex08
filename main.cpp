#include <iostream>
#include "std_lib_facilities.h"

/**
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Yeshwanth Mandava
 */

int main() {
    cout << "Enter any integer: ";
    int input{0};
    cin >> input;

    if(input % 2 != 0)
    {
        cout << "The integer " << input << " is odd.\n";
    }
    else
    {
        cout << "The integer " << input << " is even.\n";
    }
    return 0;
}
