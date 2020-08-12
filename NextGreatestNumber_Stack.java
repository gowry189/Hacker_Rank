
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++){
            a[i]=s.nextInt();
        }
        Stack<Integer> stack =new Stack<>();
        int element,next;
        stack.push(a[0]);
        for(int i=1;i<n;i++){
            next=a[i];
            if(stack.empty()==false){
                element=stack.pop();
                while(element<next){
                    System.out.print(element);
                    System.out.print(" " +next);
                    System.out.print("\n");
                    if(stack.empty()==true){
                        break;
                    }
                    element=stack.pop();
                }
                if(element>next){
                    stack.push(element);
                }
            }
            stack.push(next);
        }
        while(stack.empty()==false){
            element=stack.pop();
            next=-1;
            System.out.print(element);
                    System.out.print(" " +next);
                    System.out.print("\n");
        }
    }
}
