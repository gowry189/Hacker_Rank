//Given a number x, determine whether the given number is Armstrong number or not.
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter the number";
cin>>n;
int a=n;
int b,sum=0;
while(a!=0){
b=a%10;
sum=sum+pow(b,3);
a=a/10;
}
if(sum==n){
cout<<"YES";
}
else{
cout<<"NO";
}
return 0;
}
