#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int* ptr1 = &num1; 
    int* ptr2 = &num2; 

    int product = (*ptr1) * (*ptr2); 
    cout << "Product of " << *ptr1 << " and " << *ptr2 << " is " << product << std::endl;

    return 0;
}
