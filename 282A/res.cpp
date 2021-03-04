#include <bits/stdc++.h>

using namespace std;


int main(){
  int leng, res = 0;
  char x[3];
  cin >> leng;
  for(int i = 0; i < leng; i++){
      for(int j =0; j<3; j++){
          cin >> x[j];
      }
      if(x[1] == '+'){
          res+=1;
      }else{
          res -=1;
      }
  }
  cout << res;
}
