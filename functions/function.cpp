#include <iostream>

using namespace std;


void sayhi(string name, int age){

    cout << " Hello " << name << "You are " << age <<" Years old." << endl ;

}

int main()
{

    sayhi("Haris ", 16);
    sayhi("Ahmed ", 17);
    sayhi("Butt ", 45);
    sayhi("Umair ", 90);
    sayhi("Umar ", 89);



    return 0;
}
