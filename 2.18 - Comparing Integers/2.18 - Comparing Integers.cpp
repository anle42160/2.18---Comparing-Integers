//2.18.) Write a program that asks the user to enter two integers, obtains the numbers from the user, then prints the larger number followed by the words "is larger." If the numbers are equal, print the message "These numbers are equal."
//Programmer: Anna Le

#include <iostream>
using namespace std;

int main()
{
    //Declaring variables
    int num1;
    int num2;

    //Assigning user values
    cout << "Integer 1: ";
    cin >> num1;
    cout << "Integer 2: ";
    cin >> num2;

    //Comparing values
    if (num1 == num2) {
        cout << "These numbers are equal" << endl;
    }
    else if (num1 > num2) {
        cout << num1 << " is larger than " << num2 << endl;
    }
    else {
        cout << num2 << " is larger than " << num1 << endl;
    }

    //Checking the program runs correctly
    return 0;
}
