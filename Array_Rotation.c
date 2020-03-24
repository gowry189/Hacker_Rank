/*Given an array of N size. The task is to rotate array by d elements where d is less than or equal to N.*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int d;
        cin>>d;
        for(int i=0;i<d;i++){
            int j;
            int temp=a[0];
            for(j=0;j<n-1;j++){
                a[j]=a[j+1];
            }
            a[j]=temp;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
 
