// =====================ARRAY=====================

#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    //syntax of single dimention array
    // datatype arrayname[size of array] = [data]
    // subscript[size]

//==========static==========

    // int a[3];
    // a[0]=10;
    // a[1]=20;
    // a[2]=30;
    // cout<<a<<"\n"; //this willshow the memory address of index[0]
    // cout<<&a[2]<<"\n"; //using ampercent "&" will show the memry address of a varaiable
    
    // // to add something
    // a[1]=a[1]+5; //right way(update)
    // cout<<a[2]+5<<"\n"; //wrong way as it just prints the value(edit)

    // cout<<a[1]+a[2];

// =========dynamic=========
    // int sub[4];
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<"enter num"<<i<<"position";
    //     cin>>sub[i];
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<sub[i]<<"\n";
    // }
    
// Q1.wap to find the length of an array

    // int arr[]={2,8,2,6,7,4,5};
    // int len=sizeof(arr)/sizeof(arr[0]);
    // for (int i = 0; i < len; i++)
    // {
    //     cout<<"enter value for"<<i<<"position";
    //     cin>>arr[i];
    // }
    // for (int i = 0; i < len; i++)
    // {
    //     cout<<arr[i]<<"\n";
    // }

// Q2.wap to print even numbers while finding the length of the array

    // int arr[]={2,8,2,6,7,4,5};
    // int s=sizeof(arr)/sizeof(arr[0]);
    // cout<<"size of array="<<s<<"\n";
    // for (int i = 0; i<s; i++)
    // {
    //     if(arr[i]%2==0){
    //     cout<<"even number in array "<<arr[i]<<"\n";
    //     }
    // }

// Q3.wap to print odd numbers while finding the length of the array

    // int arr[]={2,8,2,6,7,4,5};
    // int s=sizeof(arr)/sizeof(arr[0]);
    // cout<<"size of array="<<s<<"\n";
    // for (int i = 0; i<s; i++)
    // {
    //     if(arr[i]%2==1){
    //     cout<<"odd number in array "<<arr[i]<<"\n";
    //     }
    // }


// Q4.wap to print square of every number of an array
    
    // int arr[]={2,8,2,6,7,4,5};
    // int s=sizeof(arr)/sizeof(arr[0]);
    
    // for(int i=0; i<s; i++){
    //     cout<<"square of "<<arr[i]<<" digit is "<<arr[i]*arr[i]<<endl;
    // }

// Q5.wap to print square of every number of an array

    // int arr[]={2,8,2,6,7,4,5};
    // int s=sizeof(arr)/sizeof(arr[0]);
    
    // for(int i=0; i<s; i++){
    //     cout<<"cube of "<<arr[i]<<" digit is "<<arr[i]*arr[i]*arr[i]<<endl;
    // }

// Q6.wap to print the sum of all values of an array

    // int arr[]={2,8,2,6,7,4,5};
    // int s=sizeof(arr)/sizeof(arr[0]);
    // int sum=0;
    // for (int i = 0; i < s; i++)
    // {
    //     sum=sum+arr[i];
    // }
    // cout<<"sum of all values of an array="<<sum;

// Q7.wap to print the maximum value of an array

    // int arr[]={2,8,2,6,7,4,5};
    // int s=sizeof(arr)/sizeof(arr[0]);
    // int max=arr[0];
    // for(int i=0; i<s; i++)
    // {
    //    if(max<arr[i]) {
    //     max=arr[i];
    //    }
    // }
    // cout<<max;
    


// Q8.wap to print the minimum value of an array

    // int arr[]={2,8,2,6,7,4,5};
    // int s=sizeof(arr)/sizeof(arr[0]);
    // int min=arr[0]; 
    // for(int i=0; i<s; i++)
    // {
    //    if(min>arr[i]) {
    //     min=arr[i];
    //    }
    // }
    // cout<<min;




// Q9. wap to sum the value of odd number in an array

    // int arr[]={1,2,3,4};
    // int s=sizeof(arr)/sizeof(arr[0]);
    // int sum=0;

    // for (int i = 0; i < s; i++)
    // {
    //     if (arr[i]%2==1)
    //     {
    //         sum=sum+arr[i];
    //     }
    
    // }
    // cout<<"sum of even num= "<<sum;





// Q10. wap to sum the value of even number in an array

    // int arr[]={1,2,3,4};
    // int s=sizeof(arr)/sizeof(arr[0]);
    // int sum=0;

    // for (int i = 0; i < s; i++)
    // {
    //     if (arr[i]%2==0)
    //     {
    //         sum=sum+arr[i];
    //     }
    
    // }
    // cout<<"sum of even num = "<<sum;


// Q11. wap to print sum of odd and even individually in an array

    // int arr[]={1,2,3,4};
    // int s=sizeof(arr)/sizeof(arr[0]);
    // int oddsum=0;
    // int evensum=0;

    // for (int i = 0; i < s; i++)
    // {
    //     if (arr[i]%2==0)
    //     {
    //         oddsum=oddsum+arr[i];
    //     }
    //     else{
    //         evensum=evensum+arr[i];
    //     }
    
    // }

    // cout<<"sum of odd num = "<<oddsum<<endl;
    // cout<<"sum of even num = "<<evensum<<endl;
    

// Q12. wap to print array in ascending order

    int arr[]={85,36,4,24,2,3};
    int s=sizeof(arr)/sizeof(arr[0]);

    // for (int i = 0; i < s-1; i++)
    // {
    //     for (int p = 1; p < s; p++)
    //     {
    //         if (arr[i]>arr[p])
    //         {
    //             int temp=arr[i];
    //             arr[i]=arr[p];
    //             arr[p]=arr[temp];

    //         }
            
    //     }
        
    // }
    // for (int r = 0; r < s; r++)
    // {
    //     cout<<arr[r]<<" ";
    // }
    


// using sort function for ascending

sort(arr, arr+s);
for (int i = 0; i < s; i++)
{
    cout<<arr[i]<<endl;
}

// using sort function for descending

sort(arr, arr+s,greater<int>());
for (int i = 0; i < s; i++)
{
    cout<<arr[i]<<endl;
}










// Q13. wap to print array in descending order










    return 0;
}