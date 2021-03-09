#include <bits/stdc++.h>

using namespace std;

int main(){
    int table[5][5], res = 0;
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cin >> table[i][j];
            if(table[i][j] == 1){
                res += abs(i-2);
                res += abs(j-2);
                break;
            }
        }
    }
    cout << res;
}
