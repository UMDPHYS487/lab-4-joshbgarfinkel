// Add your code here
#include <iostream>
using namespace std;

int func(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << n << " is " << factorial << endl;
    return 0;
}

int main() {
    func(4);
    return 0;
}