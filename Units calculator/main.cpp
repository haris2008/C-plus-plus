#include <iostream>

using namespace std;

int main()
{
    double Num1,units;
    cout << "Enter units: ";
    cin >> Num1;
    cout << "The units is: "<< Num1 << endl ;
    if(Num1 <= 100){
    cout << "The total Bill is: " << Num1 * 24;
    }
    else if(Num1 <= 200){
        cout << "The total Bill is: "<< 100 * 24 + ((Num1 - 100) * 32);
    }else if(Num1 <= 300){
        cout << "The total Bill is: "<< 100 * 24 + 100 * 32 + (Num1 - 200) *40;
    }else {
    cout <<" We can not calculate this. Sorry!";
    }
    return 0;
}
