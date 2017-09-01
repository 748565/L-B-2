#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
float a,b,c,d,e,f,g,x;
cout << " enter principle ";
cin >> a;
cout << " enter time ";
cin >> b;
cout << " enter rate of interest ";
cin >> c;
cout << " enter no. of time interest is compounded per year ";
cin >> d;
e = (1+c/d);
x = b*d;
f = pow(e,x);
g = a*f;
cout << " compound interest " << g;
return 0;
}

