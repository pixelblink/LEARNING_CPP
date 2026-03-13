/*
class classname{
    datamember declare;
    member function declare and define
};
syntax
class classname{
    datatype variable;
    datatype function name(){
        code/statement;
}};
*/

#include <iostream>
using namespace std;


// single obj class

// class student{
// };
// int main(){

// student obj;
// cout<<sizeof(obj);

//     return 0;
// }

// more than one obj class

// class student{

// };
// int main(){

// student obj;
// cout<<sizeof(obj);

//     return 0;
// }



// class student{
// public:
//     int a;
// };
// int main(){

// student obj;
// obj.a=100;
// cout<<obj.a;

//     return 0;
// }




// class with function

class abc{
    int a=90;
    public:void hello(){
        cout<<a;
    }
};
int main(){
    abc obj;
    obj.hello();
}


