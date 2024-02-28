
#include<bits/stdc++.h>
using namespace std;
int main ()
{
//array size
    int myArray []={10,20,30,40,50,60},position,i,n;
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
//Delete element in array
      cout<<"Enter the location:";
      cin>>position;
      if(position>size+1)
      {
          cout<<"NoDelete";

      }
  else
  {
      for(i=position;i<size-1;i++)
      {
          myArray[i]=myArray[i+1];

      }

      cout<<"New Array[]=";
      cout<<"{";
      for(int i=0;i<size-1;i++)
      {
          cout<<myArray[i];
          if (i<size-1)
          {
              cout<<",";
          }


      }
      cout<<"}";
  }
  return 0;
}
