/*https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem*/

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the breakingRecords function below.
    static int[] breakingRecords(int[] scores) {
    int n=scores.length;
    int [] HighestScore=new int [n];
    int [] LowestScore = new int [n];
    int h=0,l=0;
    int [] res= new int [2];
    HighestScore[0]=scores[0];
    LowestScore[0]=scores[0];
    for(int i=1;i<n;i++){
        if(scores[i]>HighestScore[i-1]){
            h++;
            HighestScore[i]=scores[i];
            LowestScore[i]=LowestScore[i-1];
        }
        else if(scores[i]<LowestScore[i-1]){
            l++;
            LowestScore[i]=scores[i];
            HighestScore[i]=HighestScore[i-1];
        }
        else{
            HighestScore[i]=HighestScore[i-1];
            LowestScore[i]=LowestScore[i-1];
        }
    }
    res[0]=h;
    res[1]=l;
    return res;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        int[] scores = new int[n];

        String[] scoresItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int scoresItem = Integer.parseInt(scoresItems[i]);
            scores[i] = scoresItem;
        }

        int[] result = breakingRecords(scores);

        for (int i = 0; i < result.length; i++) {
            bufferedWriter.write(String.valueOf(result[i]));

            if (i != result.length - 1) {
                bufferedWriter.write(" ");
            }
        }

        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}

