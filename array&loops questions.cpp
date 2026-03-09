#include <iostream>
using namespace std;

int main(){



    // int input;
    // cout<<"limit it";
    // cin>>input;
    // int array[input]={};
   
    // for (int i = 0; i < input; i++)
    // {
    //     cout<<"<enter ank";
    //     cin>>array[i];
    // }
    // for (int a = 0; a < input; a++)
    // {
    //     cout<<array[a]<<" ";
    // }
    

    // int array[]={1,2,3,4,5,6,7,8,9,99,88};

    // int size=sizeof(array)/sizeof(array[0]);

    // for (int i = 0; i < size; i++)
    // {
    //     if (array[i]%2==0)
    //     {
    //         cout<<array[i]<<" ";
    //     }
        
    // }
    


    // int array[]={1,2,3,4,5,6,7,8,9,99,88};
    // int added;
    // int size=sizeof(array)/sizeof(array[0]);

    // for (int i = 0; i < size; i++)
    // {
    //     added=added+array[i];
    // }
    //     cout<<added;



    int array[]={1,2,3,4,6,7,5};
    int size=sizeof(array)/sizeof(array[0]);
    int i=0;
    int j=size-1;

    while (i<j)
    {
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
        i++;
        j--;
    }

    for (int a = 0; a < size; a++)
    {
        cout<<array[a]<<" ";
    }
    

    return 0;
}