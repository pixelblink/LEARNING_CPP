#include<iostream>
using namespace std;
// ====================INHERITANCE====================
// it inherits/acquires the property of parent class 

// types are single, multilevel, multiple, hybrid, hierarchical

// =====SINGLE=====
// it is having only two classes that is parent class and child class
// always create an object of child class
// -------------------------------------
// syntax:-
// class parent{
//     declare  data member;
//     declare member function;
// };
// class child:public parent{
//     declare data member;
//     declare member function;
// };
// -------------------------------------
// WORKING CODE
// class father{
//     int a,b;
//     public:void sum(){
//         a=10;
//         b=20;
//         cout<<"sum of parent class="<<a+b<<"\n";
//     }
// };
// class child:public father{
//         int a,b;
//     public:void mul(){
//         a=10;
//         b=20;
//         cout<<"multiplication of child class<<"<<a*b<<"\n";
//     }
// };
// int main(){
// child c;
// c.sum();
// c.mul();
//     return 0;
// }





// =====MULTILEVEL=====
// it inherits/acquires the property of 2 or more than 2 parent class 
// 




// =====MULTIPLE=====

// here one class inherits from more than one class 
// always create an object of child class
// When the signature of  previous classes are same then "diamond problem" arises, it is only in multiple inheritance
// -------------------------------------
// syntax:-
// class A{
//     declare  data member;
//     declare member function;
// };
// class B{
//     declare data member;
//     declare member function;
// };
// class C:public A,public B{
//     declare data member;
//     declare member function;
// };
// -------------------------------------
// WORKING CODE
// class A{
// public:
// void fun1(){
//     cout<<"class A \n";
// }
// };
// class B{
// public:
// void fun2(){
//     cout<<"class B \n";
// }};
// class C:public A,public B{
// public:
// void fun3(){
//     cout<<"class C \n";
// }
// }object;
// int main(){
// object.fun1();
// object.fun2();
// object.fun3();
//     return 0;
// }

// =====HYBRID=====
// it is the combination of multiple inheritance 
// 
// -------------------------------------
// WORKING CODE

// single ones 
class A{
    public:
    void fun1(){
        cout<<"class A\n";
    }
};
class B: public A{
        public:
    void fun2(){
        cout<<"class B\n";
    }
};

// multilevel

class C{
        public:
    void fun3(){
        cout<<"class C\n";
    }
};
class D:public C{
    public:
    void fun4(){
        cout<<"class D\n";
    }
};
class E:public D{
    public:
    void fun5(){
        cout<<"class E\n";
    }
};

// hybrid inhereter

class F:public B,public E{
    public:
    void fun6(){
        cout<<"class F\n";
    }

};




int main(){
    F ObjectHaiYeeeeeee;
    ObjectHaiYeeeeeee.fun1();
    ObjectHaiYeeeeeee.fun2();
    ObjectHaiYeeeeeee.fun3();
    ObjectHaiYeeeeeee.fun4();
    ObjectHaiYeeeeeee.fun5();
    ObjectHaiYeeeeeee.fun6();

    return 0;
}















// =====HIERARCHICAL=====

// here every child class inherits from the root class
// here each child class have their own object

// -------------------------------------
// syntax:-
// class A{
//     declare  data member;
//     declare member function;
// };
// class B:public A{
//     declare data member;
//     declare member function;
// };
// class C:public A{
//     declare data member;
//     declare member function;
// };
// -------------------------------------
// WORKING CODE
// class A{
// public:
//     void fun1(){
//         cout<<"class A\n";
//     }
// }obj1;
// class B:public A{
// public:
//     void fun2(){
//         cout<<"class B\n";
//     }
// }obj2;
// class C:public A{
// public:
//     void fun3(){
//         cout<<"class C\n";
//     }
// }obj3;
// class D:public A{
// public:
//     void fun4(){
//         cout<<"class D\n";
//     }
// }obj4;

// int main(){
// obj1.fun1();
// obj2.fun1();
// obj2.fun2();
// obj3.fun1();
// obj3.fun3();
// obj4.fun1();
// obj4.fun4();

//     return 0;
// }
