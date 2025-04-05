#include <iostream>

using namespace std;

int main()
{
    int num1;
    cout << " enter a number: ";
    cin >> num1;
    if(num1 % 2 == 0){
        cout << "This number is Even";
    }else {
    cout << "This number is Odd";
    }
    return 0;
}
