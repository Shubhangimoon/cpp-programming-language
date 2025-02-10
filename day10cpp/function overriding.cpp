#include<iostream>
using namespace std;
class one //base class
{
	public:
		void dis()
		{
			cout<<"one"<<endl;
		}
};
class two:public one //derive class
{
	public:
		void dis()
		{
			cout<<"two"<<endl;
		}
};
int main()
{
	two t;
	t.dis(); //two
	t.one::dis(); //one
}
