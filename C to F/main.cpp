#include <iostream>

using namespace std;

int main()
{
    int celsius,Fahrenheit;
    cout << "Enter degree of celcius: ";
    cin >> celsius;
    Fahrenheit = ((celsius * 9) / 5) + 32;
    cout << "Fahrenheit: " << Fahrenheit << endl;
    return 0;
}
