
#include<bits/stdc++.h>
using namespace std;
int main ()
{
//array size
    int myArray []={10,20,30,40,50,60},i,position,value;
    int size=sizeof(myArray)/sizeof(myArray[0]);
    cout<<"Size this Array:"<<size<<endl;
//print Array

     cout<<"myArray[]=";
     cout<<"{";
     for(int i=0;i<size;i++)
     {
         cout<<myArray[i];
         if(i<size-1)
         {
             cout<<",";
         }

         }
         cout<<"}";

    //insert element
         cout<<"Enter the position:";
         cin>>position;

         cout<<"Enter the value:";
         cin>>value;

         for(int i=size-1;i>=position;i--)
         {
             myArray[i+1]=myArray[i];

         }
         myArray [position]=value;
         cout<<"New Array:";
         cout<<"{";
         for(int i=0;i<=size;i++)
         {
             cout<<myArray[i];
             if(i<size)
                {
             cout<<",";
             }
         }
         cout<<"}";
         return 0;
}
