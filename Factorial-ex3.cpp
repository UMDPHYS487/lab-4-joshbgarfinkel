// Add your code here
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        cout << "Factorial of " << i << " is " << factorial << endl;
    }
    return 0;
}