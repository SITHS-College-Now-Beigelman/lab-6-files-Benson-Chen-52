// Programmers: Benson Chen, Aaron Lin, Zion Ogunsola
// 10/15/24
// Program for practice of streams - Lab 6

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{  
    ifstream inFile; //Declares an ifstream variable
    ofstream outFile; //Declares an ofstream variable
    //Declares the 4 variables to be used
    int num_1;
    int num_2;
    char random_letter;
    string sentence_1;

    //Opens the file 'inData.txt'
    inFile.open("inData.txt");
    //Opens the file 'outData.txt'
    outFile.open("outData.txt");

    //Cout statement
    cout << "Program to review streams.....\n";
    
    //Grabs the 2 integers from the inData file
    inFile >> num_1 >> num_2;
    //Adds the 2 integers and prints it into the outData file
    outFile << num_1 + num_2 << endl;

    //Grabs the character from the inData file
    inFile >> random_letter;
    //Adds 1 to the ASCII chart value of that character
    random_letter = random_letter + 1;
    //Prints the new ASCII character for the new value to the outData file
    outFile << random_letter << endl;

    //Grabs the string from the inData file
    inFile >> sentence_1;
    //Outputs the string to the outData file
    outFile << sentence_1;

    //Closes the two files
    inFile.close();
    outFile.close();

    return 0;
}
/*
Program to review streams.....
80
S
Howdy!*/