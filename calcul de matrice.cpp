#include<iostream>
using namespace std;
void permute(int x, int y)
{
int tmp = x;
x = y;
y = tmp;
}
int main()
{
int a = 1, b = 10;
cout << "a =" << a <<", b =" << b << endl;
permute(a,b);
cout << "a=" << a <<", b =" << b << endl;
}
