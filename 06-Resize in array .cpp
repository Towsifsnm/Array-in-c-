
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int array[]={10,20,30,40,50,60};
    int j=80,k=90;
    const int newSize=sizeof(array)/sizeof(array[0])+2;
    int array1[newSize];
    for(int i=0;i<newSize-2;i++)
    {
        array1[i]=array[i];

    }
    array1[newSize-2]=j;
    array1[newSize-1]=k;
    cout<<"New array element:";
    cout<<"{";
    for(int i=0;i<newSize;i++)
    {
        cout<<array1[i];
        if( i< newSize-1)
        {
            cout<<",";
        }

    }
    cout<<"}";
    return 0;
}
