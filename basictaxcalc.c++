#include <iostream>
using namespace std;
// Q1. basic tax calculator using conditional statements
int main() {
    int a;
    cout<<"enter amount:";
    cin>>a;
    if (a>=0 && a<=10000)
    {
        cout<<"no tax";
    }
    else if (a>=10000 && a<50000)
    {
        cout<<a-(a*5/100);
    }
    else if (a>=50000 && a<100000)
    {
        cout<<a-(a*10/100);
    }
    else if (a>=100000)
    {
        cout<<a-(a*15/100);
    }
    else{
        cout<<"invalid";
    }

return 0;
}
