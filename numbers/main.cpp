#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1;

    cout << "Enter a number: ";


    cin >> num;

    cout << "You write the number: "<< num << endl;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
   cout << " The factorial " << num << " is: " << factorial;

    return 0;
}
