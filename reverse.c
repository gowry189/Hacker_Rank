Reverse the digits of an integer.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int res=0;
        while(n>0){
            res=(res*10) +(n%10);
            n=n/10;
        }
        cout<<res<<endl;
    }
    return 0;
}
 
