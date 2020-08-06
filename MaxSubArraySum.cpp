/*Find the maximum sub arrasum by using Kadane's ALgorithm*/
#include<bits/stdc++.h>
using namespace std;

int main(){
int n; //size of the array;
cin>>n;
int arr[n];
for(int i = 0;i < n;i++){
	cin>>arr[i];
	}
int max = INT_MIN;
int sum = 0;
for(int i = 0;i < n;i++){
	sum += arr[i];
	if(sum > max){
		max = sum;
		}
	if(sum < 0){
		sum = 0;
		}
	}
cout<<"Maximum sub array sum= "<< max;
return 0;
}
