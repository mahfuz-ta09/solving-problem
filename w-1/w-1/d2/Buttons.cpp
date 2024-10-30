#include<bits/stdc++.h>

using namespace std;


int main(){
  int a,b,c,result;

  cin>>a>>b;


  if(a>=b){
    result = a + 0;
    a--;
    if(a<b){
        result = result+b;
    }else{
        result = result+a;
    }
  }else{
    result = b + 0;
    b--;
    if(b<a){
        result = result+a;
    }else{
        result = result+b;
    }
  }
  cout<<result;
  return 0;
}
