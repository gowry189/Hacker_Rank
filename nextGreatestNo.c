#include <cmath>
#include <cstdio>
/*https://www.hackerrank.com/contests/second/challenges/next-greater-element*/
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    stack <int> s;
    int arr[n],ans[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans[i]=-1;
    }
    for(int i=0;i<n;i++){
        while(!s.empty() && arr[i]>arr[s.top()]){
            int x=s.top();
            s.pop();
            ans[x]=arr[i];
        }
        s.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<ans[i]<<endl;
    }
    return 0;
}

