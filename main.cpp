/*AUTHOR: Alex Yoon
ASSIGNMENT TITLE: Assignment 14 Caesar Cypher
ASSIGNMENT DESCRIPTION: encrypt or decrypt cypher
DUE DATE: 10/4/19
DATE CREATED: 10/4/19
DATE LAST MODIFIED: 10/4/19

Data Abstraction: infstream input, string filename, choice, and char c
    are initialized.
Input: The use inputs the filename, their choice, and the file.
Process: The program takes in the line and reads letter at a time.
        the letters are chars to by adding or subtracting 3, the
        encrypted or decrypted line is created.
Output: The program outputs the user order and the final message
        that has been processed.
Assumptions: The user wants to input only text
*/
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
    ofstream output ("message");
    ifstream input;
    string choice;
    string filename;
    char c;
    cout << "Enter File Name: ";
    cin >> filename;
    cout << filename << endl;

    input.clear();
    input.open(filename.c_str());
    cout << "Enter encrypt or decrypt: ";
    cin >> choice;
    cout << choice << endl;
    if(input.fail())
    {
        cout << "Error: File did NOT open." << endl;
        return 0;
    }
    if(choice == "encrypt")
    {
        while(input.get(c))
        {
            if(c != '\n')
            {
                c+=3;
            }
            cout << c;
            output << c;
        }
    }
    else if(choice == "decrypt")
    {
        while(input.get(c))
        {
           if(c != '\n')
           {
                c -= 3;
           }
            cout << c;
            output << c;
        }
    }
    else
    {
        cout << "Error: Bad Command." << endl;
        return 0;
    }
    cout << endl;





}
