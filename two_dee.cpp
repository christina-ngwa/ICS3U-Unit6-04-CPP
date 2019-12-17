// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: December 2019
// This program uses a 2D array

#include <time.h>
#include <iostream>


template <int rows, int cols>
float average(float (&passedIn2DList)[rows][cols]) {
    // this function adds up all the elements in  a 2D array

    float total = 0;
    float avg = 0;
    float divider = 0;

    for (size_t rowElement = 0; rowElement < rows; ++rowElement) {
        for (size_t columnElement = 0; columnElement < cols; ++columnElement) {
            total += passedIn2DList[rowElement][columnElement];
            divider += 1; }
    }

    avg = total / divider;
    return avg;
}


int main() {
    // this function uses a 2D array

    float aSingleRandomNumber = 0;
    const int rows = 2;
    const int columns = 2;
    float a2DArray[rows][columns];
    float avg;

    unsigned int seed = time(NULL);

    for (int rowElement = 0; rowElement < rows; rowElement++) {
        for (int columnElement = 0; columnElement < columns; columnElement++) {
            aSingleRandomNumber = rand_r(&seed) % 50;
            a2DArray[rowElement][columnElement] = aSingleRandomNumber;
            std::cout << aSingleRandomNumber << ", ";
        }
        std::cout << std::endl;
    }

    avg = average(a2DArray);
    std::cout << "The average of all the numbers is: " << avg << std::endl;
}
