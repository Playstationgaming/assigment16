#include <iostream>

using namespace std;

void swap(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    swap(&num1, &num2);

    cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}

