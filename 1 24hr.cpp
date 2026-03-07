#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter time";
    cin>>a;
    if (a>0 && a<=12)
    {
        cout<<"guddo morning";
    }
    else if (a>12 && a<=17)
    {
        cout<<"guddo afternoon";
    }
    else if (a>18 && a<=20)
    {
        cout<<"guddo evenning";
    }
    else{
        cout<<"ZZZ....!";
    }
    



    return 0;
}