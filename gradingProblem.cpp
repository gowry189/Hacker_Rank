/*https://www.hackerrank.com/challenges/grading/problem*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int gradingStudents[n];
    int grades[n];
    for(int i=0;i<n;i++){
    cin>>grades[i];
    }
    for(int i=0;i<n;i++){
    if(grades[i]<=37){
        gradingStudents[i]=grades[i];
    }
    else{
        int j=5-(grades[i]%5);
        if(j>=3){
            gradingStudents[i]=grades[i];
        }
        else{
            gradingStudents[i]=grades[i]+j;
        }
    }
    }
    for(int i=0;i<n;i++){
    cout<<gradingStudents[i]<<endl;
}
return 0;
}




