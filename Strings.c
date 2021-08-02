/*https://www.hackerrank.com/challenges/c-tutorial-strings/problem*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a,b;
  cin>>a;
  cin>>b;
  cout<<a.length()<<" "<<b.length()<<endl;
  cout<<a+b<<endl;
  char x=a[0];
  a[0]=b[0];
  b[0]=x;
  cout<<a<<" "<<b;
    return 0;
}
