/*https://www.hackerrank.com/challenges/strong-password/problem*/
#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    if(n<6){
        return 6-n;
    }
    int d=0,l=0,u=0,s=0;
    for(int i=0;i<n;i++){
        if(isdigit(password[i])){
            d=1;
        }
        else if(isupper(password[i])){
            u=1;
        }
        else if(islower(password[i])){
            l=1;
        }
        else if(password[i]=='!' || password[i]== '@' || password[i]== '#' || password[i]== '$' || password[i]== '%' || password[i]=='^' ||password[i]=='&' || password[i]=='*'||password[i]=='('|| password[i]==')'|| password[i]=='-'||password[i]=='+'){
            s=1;
        }
    }
    int sum=d+l+u+s;
    if(sum<4){
        return 4-sum;
    }
    else{
        return 0;
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

