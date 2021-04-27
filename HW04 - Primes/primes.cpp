// Jackson Lundquist
// COSC-1336-016, Flex II Semester

#include <iostream>

// starting with the function to determine if a number is prime
bool isPrime(int intCurrentNumber) {
    bool boolIsPrime = true; // assume it's prime unless you're told otherwise by the function
    if(intCurrentNumber == 0 || intCurrentNumber == 1){
        boolIsPrime = false; // auto-culls the numbers 0 and 1, also means you don't have to test against them with every number
    } else {
        for(int intCounter = 2; intCounter <= intCurrentNumber / 2; intCounter++) { // count the amount of times it's run
            if(intCurrentNumber % intCounter == 0) { // modulo counter
                boolIsPrime = false;
                break;
            }
        }
    }
    return boolIsPrime; // sends the result back to main loop
}

// aaaand the main loop
int main() {
    std::cout << "Prime numbers between 1 and 10,000." << std::endl;
    for(int intCurrentNumber = 1; intCurrentNumber < 10000; intCurrentNumber++){ // makes a variable exist, sets a condition for for loop, increments every time
        if(isPrime(intCurrentNumber) == true){ // checks if the prime function returned a true result to only print the primes; used from https://stackoverflow.com/questions/6706360/using-functions-return-value-in-if-statement
            std::cout << intCurrentNumber << " is a prime number." << std::endl;
        } // no else needed, only printing prime numbers
    }
    return 0;
}