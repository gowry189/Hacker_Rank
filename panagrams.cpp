/*https://www.hackerrank.com/challenges/pangrams/problem*/

#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
int arr[26];
int n = s.length();
for(int i=0;i<26;i++){
    arr[i]=0;
}
for(int i=0;i<n;i++){
    if(isupper(s[i])){
        arr[s[i]-65]=1;
    }
    else if(islower(s[i])){
        arr[s[i]-97]=1;
    }
}
for(int i=0;i<25;i++){
    if(arr[i]==0){
        return "not pangram";
    }
}
return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

