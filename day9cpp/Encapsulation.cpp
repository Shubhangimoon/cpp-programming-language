#include<iostream>
using namespace std;
class one
{
	private:
		int a,b;
		public:
			void set(int x,int y)
			{
				a=x;
				b=y;
			}
			void disp()
			{
				cout<<a<<b<<endl;
			}
};
int main()
{
	one ob1;
	ob1.set(2,3);
	ob1.disp();
}
