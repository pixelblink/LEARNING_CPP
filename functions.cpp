#inckude <iostream>
using namespace std;

// non return type without argument
void hello(){
    cout<<"hello"<<endl;
}

// non return type with argument
void sum(int a, int b){
    cout<<a+b;
}


// return type without argument
string helloo(){
    return "helloooo";
}

// return type with argument
int summ(int a, int b){
    return a+b;
}




int main(){

    int num1, num2;
    cout<<"enter first number";
    cin>>num1;
    cout<<"enter second number";
    cin>>num2;
    sum(num1,num2);

    return 0;
}
