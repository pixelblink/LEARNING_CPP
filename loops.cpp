#include <iostream>
using namespace std;
#include <cmath>
int main(){

    // int num=998;
    // int sum=0;
    // while (num>0)
    // {
    //     int digit=num%10;
    //     sum=sum+digit;
    //     num=num/10;
    // }
    
    // cout<<sum;

    // int num, count=0;
    // cout<<"enter number";
    // cin>>num;

    // while(num!=0)
    // {
    //     count++;
    //     num=num/10;
    // }
    // cout<<count;

    // int num;
    // cout<<"enter number";
    // cin>>num;

    // while (num>0)
    // {
    //     int digit=num%10;
    //     num=num/10;
    //     if(digit%2==0)
    //     {
    //         cout<<digit;
    //     }
    // }
    
    // int num;
    // cout<<"enter number";
    // cin>>num;

    // while (num>0)
    // {
    //     int digit=num%10;
    //     num=num/10;
    //     if (digit%2==1)
    //     {
    //         cout<<digit;
    //     }
        
    // }
    
//     int num;   //add odd in numbers
//     cout<<"enter number";
//     cin>>num;
//     int sum=0;

//     while (num>0)
//     {
//         int digit=num%10;
//         num=num/10;
//         if(digit%2==0)
//         {
//             sum=sum+digit;
//         }   
//     }
//     cout<<sum;

// int num;   //add even in numbers
//     cout<<"enter number";
//     cin>>num;
// int sum=0;

//     while (num>0)
//     {
//         int digit=num%10;
//         num=num/10;
//         if(digit%2==1)
//         {
//             sum=sum+digit;
//         }   
//     }
//     cout<<sum;

// int num, max=0;
// cout<<"enter number";
// cin>>num;

// while (num>0)
// {
//     int digit=num%10;
//     num=num/10;
//     if(max<digit)
//     {
//      max=digit;
//     }
// }
// cout<<max;

// int num;
// cout<<"enter number";
// cin>>num;
// int sum=0;
// while (num>0)
// {
//     int digit=num%10;
//     sum=sum+digit;
//     num=num/10;

// }
// cout<<sum;



// int num, max=0;
// cout<<"enter number";
// cin>>num;
// while (num>0)
// {
//     int digit=num%10;
//     num=num/10;
//     if(max<digit){
//         max=digit;
//     }
// }
// cout<<max;


// int num, min=num%10;
// cout<<"enter number";
// cin>>num;
// while (num>0)
// {
//     int digit=num%10;
//     num=num/10;
//     if(min>digit){
//         min=digit;
//     }
// }
// cout<<min;



// int num, rev=0;
// cout<<"enter number";
// cin>>num;
// while(num>0)
// {
//     int digit = num%10;
//     rev=rev*10+digit;
//     num=num/10;
// }
// cout<<rev;


// int num, rev=0;
// cout<<"enter number";
// cin>>num;
// int op=num;
// while(num>0)
// {
//     int digit = num%10;
//     rev=rev*10+digit;
//     num=num/10;.
    
// }
// // if (op==rev)
// //     {
// //         cout<<"num is a pallindram";
// //     }
// //     else{
// //         cout<<"num is not a pallindram";
// //     }
// cout<<rev;


// int num;
// cout<<"enter number";
// cin>>num;

// while (num>=10)
// {
//     int sum=0;
    
//     while (num>0)
//     {
//     int digit=num%10;
//     sum=sum+digit;
//     num=num/10; 
//     }
//     num=sum;
// }
// cout<<num;

int num;
cout<<"enter number";
cin>>num;

for (int i=2; i<num; i++)
{
    if (num%i==0)
    {
        cout<<"not a prime";
        return 0;
    }
    
}
cout<<"prime";











        





return 0;
}