#include<iostream>
using namespace std;
 void factorial(int num){//passing parameters
 	int total =1;/*debuging case faced total ka value initialised with 1 but in case of initialising i in for
 	loop i= 0 will throe error??------ total multiply with zero will return 0*/
 	for( int i=1;i<num;i++)
 	total=total*i;
 	cout<<total;
 	return;
 }
 int main(){
 	int num1;
 	cout<<"enter the no abt how u want to print?: ";
 	cin>>num1;
 	factorial(num1);
 	return 0;
 }
