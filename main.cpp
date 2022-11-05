#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  cin>>str;
  int a = 0;
  for(int i = 0; i<str.length(); i++){
    if(str[i-1]=='b' and str[i]=='a'){
      cout<<"false";
      a = 1;
      break;
    }
    continue;
  }
  if(a==0){
    cout<<"true";
  }
}