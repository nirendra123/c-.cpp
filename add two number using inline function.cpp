#include<iostream>
#include<cmath>
using namespace std;
class ADD{
	
	public:
  inline int sum( int n,int p){
		return n+p;
	}

	
};
int main(){
   ADD obj;
	int n;

	n=obj.sum(2,3);

	cout<<"the a+b is "<<n;

	return 0;
}
