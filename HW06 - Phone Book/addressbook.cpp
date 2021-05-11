// Jackson Lundquist
// COSC-1336-016, Flex II Semester
// Homework: Phone Book

#include <iostream>
#include <vector>
#include <string>
#include "address.h"

int main() {
    
    std::vector<Address> vtrAddresses(2);
    Address objAddress = Address();
    Address objAddress2 = Address();

    vtrAddresses.clear();

    objAddress.setFirst("");
    objAddress.setLast("");
    objAddress.setPhoneNumber("(210) 555-5555");

    vtrAddresses.push_back(objAddress);

    objAddress2.setFirst("Lauren");
    objAddress2.setLast("Ipsum");
    objAddress2.setPhoneNumber("1 (888) 592-7753");

    vtrAddresses.push_back(objAddress2);

    objAddress = Address();

    objAddress.input();

    vtrAddresses.push_back(objAddress);

    for(int intIndex = 0; intIndex < vtrAddresses.size(); intIndex++) {
        vtrAddresses.at(intIndex).print();
        std::cout << std::endl;
    };

    return 0;
}