#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

   cout << "The memory address of the integer variable is: " << &num << std::endl;
    
    return 0;
}