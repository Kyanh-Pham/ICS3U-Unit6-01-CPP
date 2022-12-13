// Copyright (c) 2022 Kyanh Pham
//
// Created by: Kyanh Pham
// Created on: Dec 2022
// This program finds the average of 10 random numbers

#include <iostream>
#include <random>
#include <numeric>

int main() {

    int randomNumbers[10];
    int singleRandomNumber;
    float average = 0;
    int sumOfRandomNumbers;

    // input
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(0, 100);
        singleRandomNumber = idist(rgen);
        randomNumbers[loop_counter] = singleRandomNumber;
        average = average + singleRandomNumber;
        std::cout << "The random number is: " << randomNumbers[loop_counter] << "" << std::endl;
    }
    // adds all the numbers in the array
    sumOfRandomNumbers = std::accumulate(randomNumbers, randomNumbers + 10, sumOfRandomNumbers);
    average = average /(sizeof(randomNumbers) / sizeof(randomNumbers[0]));
    std::cout << "" << std::endl;
    std::cout << "The average is " << average << "" << std::endl;

    std::cout << "\n.Done" << std::endl;
}
