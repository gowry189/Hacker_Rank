/*https://www.hackerrank.com/challenges/counting-valleys/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup*/

int countingValleys(int n, string s) {
    int a[n];
    int sum=0;
    int c=0;
    for(int i=0;i<n;i++){
            if(s[i]=='U'){
                sum=sum+1;
                a[i]=sum;
            }
            else{
                sum=sum-1;
                a[i]=sum;;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='U' && a[i]==0){
                c++;
            }
        }
        return c;  
}
