/*

Tite Chapter 5 Exercise 18 - Population Bar Chart
File name:Chapter5Ex18_YaroslavShevchenko.cpp
Programmer: Yaroslav Shevchenko
Date: 11/12/2024
Requirements:


Write a program that produces a bar chart showing the population growth of Prairieville, 
a small town in the Midwest, at 20-year intervals during the past 100 years. 
The program should read in the population figures 
(rounded to the nearest 1,000 people) for 1900, 1920, 1940, 1960, 1980, and 2000 from a file.
For each year, it should display the date and a bar consisting of one asterisk for each 1,000 people. 
The data can be found in the People.txt file.


EX: 

 PRAIRIEVILLE POPULATION GROWTH
     (each * represents 1,000 people)
     1900 **
     1920 ****
     1940 *****

*/
#include <iostream>
#include <fstream>
using namespace std;

void display(int a, int year);
int stars(int a);

int main()
{

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1,000 people)" << endl;

    ifstream myFile;
    myFile.open("People.txt");
    int a;
    int year = 1900;
    while (myFile >> a) {
        display(stars(a), year);
        year += 20;
    }
    

}

int stars(int a) {
    int starCount;

    starCount = a / 1000;
    return starCount;
}

void display(int a, int year) {
    cout << year << ": ";
    for (int i = 1; i <= a; i++) {
        cout << "*";
    }
    cout << endl;
}