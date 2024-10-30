#include<bits/stdc++.h>

using namespace std;


int main(){
  int a,b,c,result;

  cin>>a>>b>>c;


  if(a%c == 0){
    result = a;
  }else{
    result = a+ (c - (a%c));
  }


  if(result <= b){
    cout<<result<<"\n";
  }else{
    cout<<"-1";
  }

  return 0;
}
