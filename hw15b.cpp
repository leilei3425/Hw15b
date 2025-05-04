// hw15b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lei Zhang
//CIS 1202 803
//May 03 2025


#include <iostream>
#include <cmath>
using namespace std;

// Template function for float and double
template <typename T>
T half(T value) {
    return value / 2;
}

// Explicitly specified function for int
int half(int value) {
    // Convert to double, divide by 2, round up
    return static_cast<int>(round(static_cast<double>(value) / 2));
}


int main(){
    //Test values
    double a = 7.0;
    float b = 5.0f;
    int c = 3;
    
    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
    
    return 0;

    
}
