#include <iostream>
using  namespace std;
void findLargestAndSmallest(int num1, int num2, int num3, int& largest, int& smallest) {
    largest = num1;
    smallest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }
}

int main() {
    int num1, num2, num3, largest, smallest;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    findLargestAndSmallest(num1, num2, num3, largest, smallest);
    cout << "The largest number is: " << largest << std::endl;
    cout << "The smallest number is: " << smallest << std::endl;

    return 0;
}
