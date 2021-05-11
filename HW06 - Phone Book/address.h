// Jackson Lundquist
// COSC-1336-016, Flex II Semester
// Homework: Phone Book

#include <string>

class Address{
    public:
        Address();
        ~Address();
        void print();
        std::string toString();
        
        // initialize the variables
        void init();
        void setFirst(std::string strpFirst);
        void setLast(std::string strpLast);
        void setPhoneNumber(std::string strpPhoneNumber);

        // read the variables off
        std::string getFirst();
        std::string getLast();
        std::string getPhoneNumber();
        
        void input();
    private:
        std::string strFirst;
        std::string strLast;
        std::string strPhoneNumber;
};