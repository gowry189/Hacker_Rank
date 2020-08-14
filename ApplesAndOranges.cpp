/*https://www.hackerrank.com/challenges/apple-and-orange/problem*/
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
long long m=apples.size();
long long n=oranges.size();
long long c=0;
for(long long i=0;i<m;i++){
    apples[i]=apples[i]+a;
    if(apples[i]>=s && apples[i]<=t){
        c++;
    }
}
long long co=0;
for(long long i=0;i<n;i++){
    oranges[i]=oranges[i]+b;
    if(oranges[i]>=s && oranges[i]<=t){
        co++;
    }
}
cout<<c<<endl;
cout<<co<<endl;
}
