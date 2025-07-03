// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    std::string userName;

    cout << "Enter your Name: " << std::flush;
    cin >> userName;
    cout << "Hi there " << userName << ", it is a pleasure to meet you." << endl;

    cout << endl << endl;
    return 0;
}