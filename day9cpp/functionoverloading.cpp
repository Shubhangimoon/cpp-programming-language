#include<iostream>
using namespace std;
class add
{
	public:
		void sum(int a,int b)
		
		{
			cout<<a+b<<endl;
		}
		void sum(int a,int b,int c)
		{
			cout<<a+b+c<<endl ;
		}
		void sum(int a,double b)
		{
			cout<<a+b;
		}
};
int main()
{
	add ob1;
	ob1.sum(2,4);
	ob1.sum(2,3,4);
	ob1.sum(2,2.4);
}
