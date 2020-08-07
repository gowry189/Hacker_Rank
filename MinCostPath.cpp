/*Minimum cost path of a matrix while travesing from 
(0,0) to (n-1,m-1). The minimum value will be found as 
the last element int matrix*/
#include<bits/stdc++.h>
using namespace std;
int min(int a,int b,int c){
	return (a<b && a<c )? a: b<c ? b: c ;
}
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int dp[n][m];
	dp[0][0]=arr[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0 && j!=0){
				dp[i][j]=arr[i][j]+dp[i][j-1];
			}
			else if(j==0 && i!=0){
				dp[i][j]=arr[i][j]+dp[i-1][j];
			}
			else if(i!=0 && j!=0){
				dp[i][j]=min(dp[i][j-1],dp[i-1][j-1],dp[i-1][j])+arr[i][j];
			}
		}
	}
	cout<<"\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<dp[i][j]<<" ";
		}
	cout<<"\n";
	}
	cout<<"The minimum cost "<<dp[n-1][m-1];
	return 0;
}
