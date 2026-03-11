#include <iostream>
using namespace std;
int balance(){
    return 1000;
}
int petrol(int ltr){ //with parameter abd return
    return ltr*80;
}
int main(){

int a,p;
a=balance(); //without parameter
p=petrol(1000); //with parameter
cout<<"total bill="<<p;

return 0;
}