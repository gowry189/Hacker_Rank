#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int tripletSum(int arr[],int n, int k){
    int flag=0;
    if(n<3){
    return flag;
    }
    
    for(int i=0;i<n-2;i++){
        int l=i+1;
        int r=n-1;
        int sum=0;
        while(l<r){
            sum=arr[i]+arr[l]+arr[r];
            if(sum==k){
                flag=1;
                break;
            }
            else if(sum<k){
                l++;
            }
            else{
                r--;
            }
        }
    }
    return flag;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int res=tripletSum(arr,n,k);
        cout<<res<<endl;
    }
    return 0;
}

