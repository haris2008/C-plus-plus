#include <iostream>
using namespace std;

int main()
 {

    int n, num1 = 0, num2 = 1, result;

    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "The  Fibonacci series of this number " << n <<" is: ";
    for (int i = 1; i <= n; ++i) {
        cout << num1<< " ";
        result = num1 + num2;
        num1 = num2;
        num2 = result;
    }
    return 0;
}

