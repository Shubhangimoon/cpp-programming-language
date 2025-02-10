#include<iostream>
using namespace std;
class one
{
	public:
 virtual void dis()
		{
			cout<<"one";
		}
};
class two:public one
{
	public:
		void dis()
		{
			cout<<"two";
		}
};
int main()
{
	one*bptr;
	two t;
	bptr=&t;
	bptr-> dis();
}
