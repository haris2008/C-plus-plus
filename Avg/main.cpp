#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    double sum = 0.0;
    double number;

    for (int i = 0; i < n; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> number;
        sum += number;
    }

    double average = sum / n;
    cout << "Average = " << average << endl;

    return 0;
}
