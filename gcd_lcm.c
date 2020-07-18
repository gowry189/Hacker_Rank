#include <iostream>
using namespace std;

int main() {
	//code
	long long a,b,x,y,temp,t,gcd, lcm;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x>y){
	        a=x;
	        b=y;
	    }
	    else{
	        a=y;
	        b=x;
	    }
	    while(b!=0){
	        temp=b;
	        b=a%b;
	        a=temp;
	    }
	 gcd=a;
	 lcm=(x*y)/gcd;
	 cout<<lcm<<" "<<gcd<<endl;
	}
	
	return 0;
}
