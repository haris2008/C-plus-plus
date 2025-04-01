#include <iostream>

using namespace std;

int main()
{
    bool ismale = false;
    bool istall = false;
    if(ismale && istall){

     cout << "You are a tall male";
    }else if(ismale && !istall)
    {
        cout << "You are a short male";
    }else if(!ismale && istall){
        cout << "You are tall but not male";
    }
    else{

    cout << "You are not male and not tall";
    }


    return 0;
}
