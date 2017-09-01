#include<iostream>
using namespace std;
int main () 
{
float a,b,c;
cout << " enter length in cm ";
cin >> a;
b = a/100 , c = b/1000;
cout << " length in m: " << b;
cout << " length in km: " << c;
return 0;
}
