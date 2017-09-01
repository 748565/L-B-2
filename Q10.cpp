#include<iostream>
using namespace std;
int main ()
{
float a,b,c,d,e,f,g,h;
cout << " english marks ";
cin >> a;
cout << " hindi ";
cin >> b;
cout << " maths ";
cin >> c;
cout << " phy ";
cin >> d;
cout << " che ";
cin >> e;
f = a+b+c+d+e;
g = f/5;
h = (f/400)*100;
cout << " total marks " << f;
cout << " avg. marks " << g;
cout << " percentage " << h;
return 0; 
}
