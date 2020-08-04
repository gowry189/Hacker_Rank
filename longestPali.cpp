#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    int n = s.length();
    int a[n][n];
    int i,k,j;
    for(i=0;i<n;i++){
        a[i][i]=1;
    }
    for(k=2;k<=n;k++){
        for(i=0;i<=n-k;i++){
            j=i+k-1;
           if(s[i]==s[j]){
                a[i][j]=a[i+1][j-1]+2;
            }
            else{
                a[i][j]=max(a[i][j-1],a[i+1][j]);
            }
        }
    }
    cout<<a[0][n-1];
    return 0;
}
