#include<iostream>
#include<cmath>
using namespace std;
class Account 
{ 
	protected:
	string name;
	int acc_No;
	public:
		void get()
		{
		
			cout<<"Enter the name"<<endl;
			getline(cin,name);
			cout<<"Enter the account no:";
			cin>>acc_No;
			fflush(stdin);
		}
		
		
};
class Saving_acc: protected Account
{
	int 
const  int annual_Rate=10;
P*pow((1+annual_rate/100),t)


	
	
	
};
class current_acc: protected Account
{
	const int annual_rate=5;
	
};
int main()
{

	int i;
	cout<<"1.Saving account"<<endl;
	cout<<"2.Current account";
	switch(i)
	{
		case 1:
			
			break;
		case 2:
			break;
			default:
				cout<<"wrong option!!!";
				
		
	}
}
