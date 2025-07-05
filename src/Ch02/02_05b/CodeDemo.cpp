// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

//creates two varaibles a and b then sets b to equal 5 as global varaibles.
int a, b = 5;

int main(){
    using std::cout;
    using std::endl;
    
    bool my_flag;
    unsigned int positive;
    
    a = 7;
    my_flag = false;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "flag = " << my_flag << endl;

    my_flag = true;

    cout << "flag = " << my_flag << endl;
    cout << "a + b = " << a + b << endl;
    cout << "b - a = " << b - a << endl;

    positive = b - a;
    cout << "b - a (unsigned)  = " << positive << endl;

    cout << endl << endl;
    return 0;
}
