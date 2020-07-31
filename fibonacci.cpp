//Given a number ‘n’, the task is to print the Fibonacci series
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a,b,c;
a=0;
b=1;
if(n==1){
	cout<<a;
	}
else if(n==2){
	cout<<a<<" ";
	cout<<b<<" ";
	}
else{
	cout<<a<<" ";
	cout<<b<<" ";
	for(int i=0;i<n-2;i++){
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
		}
}
return 0;
} 
