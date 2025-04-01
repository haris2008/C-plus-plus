#include <iostream>


using namespace std;

int main() {
    int num1,num2,num3,num4,num5;
    float result,avg;
    cout << "Enter science subject number: ";
    cin >> num1;
    cout << "Enter English number: ";
    cin >> num2;
    cout << "Enter Biology subject number: ";
    cin >> num3;
    cout << "Enter computer subject number: ";
    cin >> num4;
    cout << "Enter Urdu subject number: ";
    cin >> num5;
    result = num1 + num2 + num3 + num4 + num5;
    cout <<result<<endl;
    avg = (result / 500) * 100;
    cout<<avg <<endl;
    cout << "The average is "<< avg <<endl;

    if(avg = 90){
        cout << "pass";
    }
    else if (avg = 80){
    cout << "pass";
    }else if (avg = 70){
    cout << "pass";
    }else if (avg = 60){
    cout << "pass";
    }else if (avg = 50){
    cout << "pass";
    }
    else if (avg = 50){
         cout << "fail";
    }

}
