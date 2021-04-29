// Jackson Lundquist
// COSC-1336-016, Flex II Semester

#include <iostream>
#include <string>

int main() {
    int intTreeStars = 1;
    int intTreeHeight = 0;
    char charBlankSpace = ' ';
    std::cout << "Enter your tree's height.";
    std::cin >> intTreeHeight;
    
    // prints the tree
    for (int intTreeHeightFor = intTreeHeight - 1; intTreeHeightFor > 0; intTreeHeightFor--) {
        // prints the empty space before the leaves
        int intSpaces = intTreeHeightFor-1;
        for (; intSpaces > 0 ; intSpaces--) {
            std::cout << charBlankSpace;
        }
        
        //prints the leaves
        for (int intStarRepeat = intTreeStars; intStarRepeat > 0; intStarRepeat--) {
            std::cout << "*";
        }
        std::cout << std::endl;
        intTreeStars = intTreeStars + 2;
    }
    
    // prints the tree stump
    for (int intSpacesStump = intTreeHeight - 2; intSpacesStump > 0 ; intSpacesStump--) {
        std::cout << charBlankSpace;
    }
    std::cout << "*" << std::endl;
    
    return 0;
}