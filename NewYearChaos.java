/*https://www.hackerrank.com/challenges/new-year-chaos/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays*/

public class Solution {

    // Complete the minimumBribes function below.
    static void minimumBribes(int[] q) {
        int n=q.length;
        int b=0;
        for(int i=0;i<n;i++){
            if(q[i]-(i+1)>2){
                System.out.println("Too chaotic");
                return ;
            }
            for(int j=0;j<i;j++){
                if(q[j]>q[i]){
                    b++;
                }
            }
        }
        System.out.println(b);
    }
