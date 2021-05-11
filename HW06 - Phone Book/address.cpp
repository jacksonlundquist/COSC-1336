// Jackson Lundquist
// COSC-1336-016, Flex II Semester
// Homework: Phone Book

#include <iostream>
#include <string>
#include "address.h"

Address::Address() {
    init();
}

Address::~Address() {
    setFirst(" ");
    setLast(" ");
    setPhoneNumber(" ");
}

std::string Address::toString() {
    std::string strAddress = getFirst() + " " + getLast() + " " + getPhoneNumber();
    return strAddress;
}

void Address::print() {
    std::cout << toString();
}

void Address::init() {
    setFirst(" ");
    setLast(" ");
    setPhoneNumber(" ");
}

void Address::setFirst(std::string strpFirst) {
    if(strpFirst.size() < 1) { 
        strpFirst = "Default"; 
    }
    strFirst = strpFirst;
}
void Address::setLast(std::string strpLast) {
    strLast = strpLast;
}
void Address::setPhoneNumber(std::string strpPhoneNumber) {
    strPhoneNumber = strpPhoneNumber;
}
std::string Address::getFirst() {
    return strFirst;
}
std::string Address::getLast() {
    return strLast;
}
std::string Address::getPhoneNumber() {
    return strPhoneNumber;
}

void Address::input() {
    std::string strTempValue = "";
    std::cout << "Input a first name: ";
    std::cin >> strTempValue;
    setFirst(strTempValue);
    std::cout << "Input a last name: ";
    std::cin >> strTempValue;
    setLast(strTempValue);
    std::cout << "Input a phone number: ";
    std::cin >> strTempValue;
    setPhoneNumber(strTempValue);
}