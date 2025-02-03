#include<iostream>
using namespace std;
void sub(int x=6,int y=3)
{
	int c = x-y;
	cout<<c<<endl;
}
int main()
{
	sub(8,2);
	sub();
	sub(6);
}
