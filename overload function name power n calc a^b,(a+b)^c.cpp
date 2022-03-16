#include<iostream>
#include<cmath>
using namespace std;
class nPower{
	
	public:
	int power( int n,float p){
		int ans;
		ans=pow(n,p);
		return ans;
	}
	int power(int num1,int num2, int p){
		int num3=num1+num2;
		num3=pow(num3,p);
		return num3;
	}
	
};
int main(){
	nPower obj;
	int n;
	int num;
	n=obj.power(2,3);
	num=obj.power(2,2,2);
	cout<<"the a^b is "<<n;
	cout<<"(a+b)^c "<<num;
	return 0;
}
