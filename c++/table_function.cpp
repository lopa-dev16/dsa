#include<iostream>
using namespace std;
 
void table(int num){
 	int value;
 	for (int i=1;i<=10;i++)
 	cout<<num*i<<endl;
 	return;
}
 	
 
 int main(){
 	int num1;
 	cout <<"enter the no. for which table needs to be print: ";
 	cin>>num1;
table(num1);
 }
