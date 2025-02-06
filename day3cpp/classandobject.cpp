 #include<iostream>
using namespace std;
class one
{
	public:
		int a,b,c;
		public:
			void collect();
			void calculate();
			void display();
};
void one::collect()
{
	cout<<"enter a and b";
	cin>>a>>b;
}
void one::calculate()
{
	 c=a+b;
}
void one::display()
{
	cout<<c;
}
int main()
{
	one object;
	object.collect();
	object.calculate();
	object.display();
}
			

