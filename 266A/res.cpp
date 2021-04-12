#include <bits/stdc++.h>


using namespace std;


int main(){
    int stones,i,cRed = 0, cBlue=0, cGreen=0, total = 0;
    char entry[50];
    cin >> stones;
    for(i = 0;i < stones; i++){
        cin >> entry[i];
        if(entry[i] == entry[i-1]){
            total += 1;
        }
    }
    cout << total;
}
