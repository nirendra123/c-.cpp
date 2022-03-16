#include<iostream>
using namespace std;
class Area{
	private:
	float length;
	float breadth;
	public:
	void input(float l=1,float b=1){
		length=l;
		breadth=b;
	}
	float rectangle(){
		return(length*breadth);
	}
	
};
int main(){
	Area obj;
	float c;
	obj.input(5,6);
	c=obj.rectangle();
	cout<<"the area of rectangle is"<<c;
	return 0;
}
