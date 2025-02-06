#include<iostream>
using namespace std;
class emp
{
	public:
		int id;
		char name[20];
		char phone[20];
		void collect()
		{
			cout<<"enter id\n";
			cin>>id;
			cout<<"enter name\n";
			cin>>name;
			cout<<"enter phone\n";
			cin>>phone;
		}
		void dis()
		{
			cout<<id<<"  "<<name<<"  "<<phone<<endl;
		}};
		int main()
		{
			emp ob[3];
			int i;
			for(i=0;i<3;i++)
			{
				ob[i].collect();
			}
			for(i=0;i<3;i++)
			{
				 ob[i].dis();
			}
		} 
