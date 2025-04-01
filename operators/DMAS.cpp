
#include <iostream>

using namespace std;

int main ()
{
    string phrase = "Haris Academy";
    phrase[6] = 'S';
    cout << phrase. substr(6,5);
    cout << phrase . length();
    cout << phrase . find ("ris",0);

    cout << (5 + 7) * 2 ;
    cout << 2 + (5 - 7) ;
    cout << (5 / 7) - 3 ;
    cout << (5 * 7) / 3;
    cout << 5 % 7 ;

    int wnum = 5;
    double dnum = 5.5;

    cout << 5.5 + 9;
    cout << 10.0 + 5.0;

    wnum+= 50;
    cout << wnum;


}
