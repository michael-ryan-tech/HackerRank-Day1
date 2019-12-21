// HackerRank Day1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    // Declare second integer, double, and String variables.
    int a = 0;
    double b = 0.0;
    string inputString = "";

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> a;
    cin >> b;
    cin.ignore();

    getline(cin,inputString);

    // Print the sum of both integer variables on a new line.
    cout << i + a << endl;


    // Print the sum of the double variables on a new line.
    printf("%.1f\n", d + b);

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << " " << inputString;

    return 0;