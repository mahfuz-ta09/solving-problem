
#include<bits/stdc++.h>

using namespace std;

int main(){
  int i , j , k , s , t , count =  0;

  cin>>s>>t;

  for(i=0 ; i<=s ; i++){
    for(j=0 ; j<=s-i ; j++){
      for(k=0 ; k<=s-i-j ; k++){
        if(i*j*k<=t){
          count++;
        }
      }
    }
  }

  cout<<count;

  return 0;
}
