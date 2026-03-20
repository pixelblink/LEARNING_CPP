#include <iostream>
using namespace std;
// =========EXCEPTION HANDELING=========
// it is used to avoid the abnormal processes or condition
//  exception handlers are:- TRY, THROW and CATCH

int main(){

int n=100;
int v;
cout<<"enter any number to divide 100\n";
cin>>v;
try{
    if (v==0)
    {
        throw 6.7;
    }
    cout<<n/v;
}
catch(int i){
    cout<<"denominator should not be zero";
}
catch(double i){
    cout<<"float not allowed";
}
catch(const char *e){
    cout<<"string not allowed";
}
catch(...){ // ... is used when you dont want to make individual catches as ... detects the datatype itself
    cout<<"server down";
}
cout<<"\nSuccessfully completed";







    return 0;
}
