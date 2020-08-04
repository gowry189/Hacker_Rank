/*https://www.hackerrank.com/challenges/minimum-swaps-2/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays*/


static int minimumSwaps(int[] arr) {
        int n=arr.length;
        int temp,index,c=0;;
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1){
                for(int j=i+1;j<n;j++){
                    if(arr[j]==i+1){
                        index=j;
                        temp=arr[index];
                        arr[index]=arr[i];
                        arr[i]=temp;
                        c++;
                    }
                }
            }
        }
    return c;
    }

