/*https://www.hackerrank.com/interview/interview-preparation-kit/warmup/challenges*/

static int jumpingOnClouds(int[] c) {
        int n = c.length;
        int i=0,count=0;
        while(i<n){
            if(i+2<n && c[i+2] == 0){
                i=i+2;
            }
            else{
                i=i+1;
            }
            count++;
        }
        return count-1;
    }
