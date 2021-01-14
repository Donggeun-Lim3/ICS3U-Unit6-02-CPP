// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by: Donggeun Lim
// Created on: Jan 2021
// This program finds largest number


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>


template<size_t N>
int FindLargestNumber(std::array<int, N> randomNumbers) {
    // this function find the largest number in list

    int largestNumber = randomNumbers[0];

    for (int counter = 1; counter < randomNumbers.size(); counter++) {
        if (largestNumber < randomNumbers[counter]) {
            largestNumber = randomNumbers[counter];
        }
    }

    return largestNumber;
}

main() {
    // this function shows the largest number in 10 random numbers

    std::array<int, 11> randomNumbers;
    int aNumber = 0;
    int largestNumber = 0;

    srand((unsigned int)time(NULL));

    // input
    for (int loop_counter = 1; loop_counter < 11; loop_counter++) {
        aNumber = (rand() % 100) + 1;
        randomNumbers[loop_counter] = aNumber;
        std::cout << "The random number " << loop_counter
                  << " is: " << aNumber << std::endl;
    }
    std::cout << " " << std::endl;

    largestNumber = FindLargestNumber(randomNumbers);

    std::cout << "The largest number is: " << largestNumber << std::endl;
}
