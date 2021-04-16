// Jackson Lundquist
// COSC-1336-016, FLEX II Semester

#include <iostream>
using namespace std;

int main() {
    int intLowerBound = 1;
    int intUpperBound = 100;
    bool boolContinue = true;
    char charInput;

    cout << "Please think of a whole, non-negative, real number between 1 and 100." << endl;
    cout << "When responding, please input Y)es, N)o or E)qual." << endl;

    while (boolContinue == true) {
        cout << "Is your number less than " << (intLowerBound + intUpperBound)/2 << "?" << endl;
        cin >> charInput;

        switch (charInput){
            case 'Y': case 'y':{
                intUpperBound = (intLowerBound + intUpperBound)/2;
                break;
            }
            case 'N': case 'n':{
                intLowerBound = (intLowerBound + intUpperBound)/2;
                break;
            }
            case 'E': case 'e':{
                cout << "Thanks for playing!" << endl;
                boolContinue = false;
                break;
            }
        }
    }

    return 0;
}