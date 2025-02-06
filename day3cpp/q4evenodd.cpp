#include<iostream>
using namespace std;
class evenodd
{
	public:
		void check(int num)
		{
			if(num%2==0)
			cout<<num<<"is even"<<endl;
			else
			cout<<num<<"is odd"<<endl;
		}
};
int main()
{
	evenodd obj;
	int num;
	cout<<"enter the number"; 
	cin>>num;
	obj.check(num);
}
	
	

