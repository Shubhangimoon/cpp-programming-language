 #include<iostream>
using namespace std;
class animal
{
	public:
	void speak()
	{
		cout<<"speaking"<<endl;
	}
};
class cat:public animal
{
	public:
		void speak()
		{
			cout<<"meowing"<<endl;
		}
};
class cow:public animal
{
	
};
int main()
{
	cat c;
	c.speak();
	cow c2;
	c2.speak();
}
