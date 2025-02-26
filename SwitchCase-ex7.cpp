// add your code here
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Please enter an integer value: ";
    cin >> n;
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "The value you entered is " << n << " and its factorial is " << factorial << endl;
    return 0;
}