#include<iostream>
using namespace std;
 template<typename T>
 	
 	void swapvalues (T &a, T &b)
 	{
 		T temp;
 		temp = a;
 		a=b;
 		b=temp;
	 }
int main(){
	int x= 40, y= 30;
	swapvalues(x,y);
	cout<<"-----after swaping the values:-----"<<endl;
	cout<<"x ="<<x<<endl;
	cout<<"y ="<<y<<endl;
	return 0;
}
