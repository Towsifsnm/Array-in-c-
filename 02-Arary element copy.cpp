
#include<bits/stdc++.h>
using namespace std;
int main ()
{
//array size
    int myArray []={10,20,30,40,50,60};
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
// copy elements
cout<<endl;
         int arrayNew [size];
         for(int i=0;i<size ;i++)
         {
             arrayNew[i]=myArray [i];

         }
          cout<<"New array[]=";
     cout<<"{";
     for(int i=0;i<size;i++)
     {
         cout<<arrayNew[i];
         if(i<size-1)
         {
             cout<<",";
         }

         }
         cout<<"}";
return 0;
}
