// { Driver Code Starts
 #include <bits/stdc++.h>
using namespace std;

int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}// } Driver Code Ends


/*You are required to complete this method */
int atoi(string str)
{
    //Your code here
    int n= str.length();
    int a=0;
    int flag=0;
    for(int i=0;i<n;i++){
        
        if(str[i]=='-'){
            flag =1;
        
        }
        else if(!(str[i]>=48 && str[i]<=57)){
            return -1;
        }
        else{
            a=a*10+(str[i]-48);
        }
    }
    if(flag==0){
    return a;
    }
    else{
        return -1*(a);
    }
}
