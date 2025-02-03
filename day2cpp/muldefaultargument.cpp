#include<iostream>
using namespace std;
void mul(int x=6,int y=3)
{
	int c = x*y;
	cout<<c<<endl;
}
int main()
{
	mul(8,2);
	mul();
	mul(6);
}
