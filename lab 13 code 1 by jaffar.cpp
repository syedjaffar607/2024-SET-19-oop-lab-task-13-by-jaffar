#include<iostream>
using namespace std;
 
 template<typename T>
 T findmax (T a,T b)
 {
 	if(a>b)
 	return a;
 	else 
 	return b;
 }
 int main(){
 	cout<<findmax(20,40)<<endl;
 	cout<<findmax(2.32,4.21)<<endl;
 	cout<<findmax('a','b')<<endl;
 	return 0;
 }
