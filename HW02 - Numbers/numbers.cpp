// Jackson Lundquist
// COSC-1336-016, FLEX II Semester

// started from March 30th lecture notes
// https://github.com/cmacdougald/2021SPRING-COSC1336/blob/main/chapter3ex1/chapter3ex1.cpp

#include <iostream>
#include <string>
using namespace std; 

int main() {
    int intNumberOne = 0;
    int intNumberTwo = 0;
    int intSum = 0;
    int intDifference = 0;
    int intProduct = 0;
    float floatRatio = 0;
    char charCaseSelection = 'x'; // used for switch statements
    string strName = "Jackson";

    // taking input
    cout << "Please enter your name: ";
    cin >> strName;
    cout << "Please enter an integer number. ";
    cin >> intNumberOne;
    // makes sure that the number entered is actually an integer
    // from http://www.cplusplus.com/forum/beginner/58833/#msg317499
    while(!cin)
    {
        cout << "Please enter an integer! ";
        cin.clear();
        cin.ignore();
        cin >> intNumberOne;
    }
    cout << "And another, please. ";
    cin >> intNumberTwo;
    // makes sure that the number entered is actually an integer
    // from http://www.cplusplus.com/forum/beginner/58833/#msg317499
    while(!cin)
    {
        cout << "Please enter an integer! ";
        cin.clear();
        cin.ignore();
        cin >> intNumberTwo;
    }

    // processing the input
    intSum = intNumberOne + intNumberTwo;
    intProduct = intNumberOne * intNumberTwo;

    // evaluates which number is bigger, or if the two numbers are equal
    if (intNumberOne > intNumberTwo){
        charCaseSelection = 'a';
        intDifference = intNumberOne - intNumberTwo;
        floatRatio = (float) intNumberOne / intNumberTwo; // used this line https://stackoverflow.com/a/30343884
    } else if(intNumberOne < intNumberTwo){
        charCaseSelection = 'b';
        intDifference = intNumberTwo - intNumberOne;
        floatRatio = (float) intNumberTwo / intNumberOne; // used this line https://stackoverflow.com/a/30343884
    } else if(intNumberOne = intNumberTwo){
        charCaseSelection = 'c';
        intDifference = 0;
        floatRatio = 1;
    }

    // and the output!
    cout << "Howdy, " << strName << "!" << endl;
    cout << "Your numbers were " << intNumberOne << " and " << intNumberTwo <<  "." << endl;
    switch (charCaseSelection){
        case 'a':
            cout << "Your first number, " << intNumberOne << ", is larger than your second number, " << intNumberTwo << "." << endl;
            break;
        case 'b':
            cout << "Your second number, " << intNumberTwo << ", is larger than your first number, " << intNumberOne << "." << endl;
            break;
        case 'c':
            cout << "Your two numbers are identical, so one is not bigger than the other." << endl;
            break;
        case 'x':
            cout << "Something has gone very wrong. You should not see this." << endl;
            break;
    }
    cout << "The sum of your numbers is " << intSum << "." << endl;
    cout << "The difference of your numbers is " << intDifference << "." << endl;
    cout << "The product of your numbers is " << intProduct << "." << endl;
    cout << "The ratio of your numbers is " << floatRatio << "." << endl; 
    cout << "Have a nice day! :)" << endl;

    return 0;
}
