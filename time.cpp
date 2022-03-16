#include<iostream>
using namespace std;
class Time{
	private:
	int hour;
	int minute;
	int second;
	public:
    void input(int h,int min=0,int sec=0){
    	hour=h;
    	minute=min;
    	second=sec;
	}
	Time calculation(Time test1,Time test2){
		 Time test3;
		 test3.second=test1.second+test2.second;
		 test3.second=test3.second%60;
		 test3.minute=test1.minute+test2.minute+(test3.second/60);
		 test3.minute=test3.minute%60;
		 test3.hour=test1.hour+test2.hour+(test3.hour/60);
		
		return test3;
	}

	
	void output(){
		cout<<" THE EXACT TIME IS "<<hour<<":"<<minute<<":"<<second;
	}
	
};
int main(){
Time obj,obj1,obj2;
obj1.input(1,20,30);
obj2.input(2,5,20);
obj=obj.calculation(obj1,obj2);
obj.output();


	return 0;
	
	
	
	
}
