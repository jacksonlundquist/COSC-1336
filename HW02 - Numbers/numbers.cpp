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
    if (intNumberOne > intNumberTwo){
        intDifference = intNumberOne - intNumberTwo;
        floatRatio = (float) intNumberOne / intNumberTwo; // used this line https://stackoverflow.com/a/30343884
    } else {
        intDifference = intNumberTwo - intNumberOne;
        floatRatio = (float) intNumberTwo / intNumberOne; // used this line https://stackoverflow.com/a/30343884
    }

    // and the output!
    cout << "Howdy, " << strName << "!" << endl;
    cout << "Your numbers were " << intNumberOne << " and " << intNumberTwo <<  "." << endl;
    if (intNumberOne > intNumberTwo){
        cout << "Your first number, " << intNumberOne << ", is larger than your second number, " << intNumberTwo << "." << endl;
    } else {
        cout << "Your second number, " << intNumberTwo << ", is larger than your first number, " << intNumberOne << "." << endl;
    };
    cout << "The sum of your numbers is " << intSum << "." << endl;
    cout << "The difference of your numbers is " << intDifference << "." << endl;
    cout << "The product of your numbers is " << intProduct << "." << endl;
    cout << "The ratio of your numbers is " << floatRatio << "." << endl; 
    cout << "Have a nice day! :)" << endl;

    return 0;
}