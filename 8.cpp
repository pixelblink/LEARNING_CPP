#include <iostream>
using namespace std;
// ========================OPERATOR OVERLOADING========================
// If a class having more than one operator functions of diffrent types is called operator overloading
// Operating overloading function is defined by "operator" keyword along with mathematical operator symbol
// Its types are 
// Unary Operator(++ --) and 
// Binary Operator(+ - / * %)


// Unary Operator
// class opp{
//     int a=9;
//     public:
//     void operator ++(){
//         a=a+1;
//         cout<<a<<"\n";
//     }
//     void operator --(){
//         a=a-1;
//         cout<<a<<"\n";
//     }
// }obj;

// int main(){
//     ++obj;
//     --obj;
//     return 0;
// }


// Binary Operator
class opp{
    int kg,gm;
    public: 
    opp(int k, int g){
        kg=k;
        gm=g;
    }
    public:
    void operator+(opp &obj){
        kg=kg+obj.kg;
        gm=gm+obj.gm;
        cout<<"kg="<<kg<<"\n";
        cout<<"gm="<<gm<<"\n";
    }
};
int main(){

    opp obj1(2,300);
    opp obj2(3,400);
    obj1+(obj2);
    return 0;
}