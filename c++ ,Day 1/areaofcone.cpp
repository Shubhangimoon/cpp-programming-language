#include<iostream>
using namespace std;
int main()
{
	int area,r,h;
	std::cout<<"enter the length of cone";
	std::cin>>r;
	std::cout<<"enter the slent hight of cone";
	std::cin>>h;
	area=3.14*r*(r+h);
	cout<<"the area of cone"<<area<<endl;
}
