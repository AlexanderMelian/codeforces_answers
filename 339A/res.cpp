#include <bits/stdc++.h>


using namespace std;

int main(){
    char inp[100];
    cin >> inp;
    int inpLen = strlen(inp), count1 = 0, count2 = 0, count3 = 0, i;
    if(inpLen == 1){
        cout << inp[0];
        return 0;
    }
    for(i = 0; i <= inpLen; i = i + 2){
        if(inp[i] == '1'){
            count1 +=1;
        }else if(inp[i] == '2'){
            count2 +=1;
        }else{
            count3 +=1;
        }
    }
    i = 0;
    while(count1 > 0){
        inp[i] = '1';
        i += 2;
        count1 -=1;
    }
    while(count2 > 0){
        inp[i] = '2';
        i += 2;
        count2 -=1;
    }
    while(count3 > 0){
        inp[i] = '3';
        i += 2;
        count3 -=1;
    }
    cout << inp;
}
