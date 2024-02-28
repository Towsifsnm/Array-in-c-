
//Rotate left k cells
#include <bits/stdc++.h>
using namespace std;
int main() {
int k = 3;
int myArray[] = {10, 20, 30, 40, 50, 60};
for (int j = 1; j <= k; j++)
{
int l = myArray[0];
for (int i = 0; i < 5; i++) {
myArray[i] = myArray[i + 1];
}
myArray[5] = l;
cout << "[";
for (int n = 0; n < 6; n++)
{
cout << myArray[n];
if (n < 5) {
cout << ",";
}
}
cout << "]" << endl;
}
return 0;
}
