#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter week day number between 1 2 3 4 5 6 7 ";
    cin>>a;
    if (a==1)
    {
        cout<<"monday";
    }
    else if (a==2)
    {
        cout<<"tuesday";
    }
    else if (a==3)
    {
        cout<<"wednesday";
    }
    else if (a==4)
    {
        cout<<"thursday";
    }
    else if (a==5)
    {
        cout<<"friday";
    }
    else if (a==6)
    {
        cout<<"saturday";
    }
    else if (a==7)
    {
        cout<<"sunday";
    }
    else{
        cout<<"abcd";
    }

    return 0;
}