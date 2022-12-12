// Copyright (c) 2022 Kyanh Pham
//
// Created by: Kyanh Pham
// Created on: Dec 2022
// This program finds the average of 10 random numbers

#include <iostream>
#include <random>

main() {

    int randomNumbers[10];
    int singleRandomNumber;
    int average;

    // input
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(0, 10);
        singleRandomNumber = idist(rgen);
        randomNumbers[loop_counter] = singleRandomNumber;
    }

    for (int loop_counter; loop_counter < 10; loop_counter++) {
        std::cout << "The random number is:" << randomNumbers[loop_counter] << "" std::endl;
    }
    average = std::accumulate(randomNumbers)
    std::cout << "" << std::endl;
}