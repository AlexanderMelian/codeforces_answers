#include <bits/stdc++.h>


using namespace std;


int main(){
    char inp1[100], inp2[100];
    cin >> inp1 >> inp2;
    int res = 0, len1 = strlen(inp1);
    //cout << tolower(inp1[0]) << tolower(inp1[0]) <<endl;
    for(int i = 0; i < len1 ;i++){
        if(tolower(inp1[i]) < tolower(inp2[i])){
            res = -1;
            break;
        }else if(tolower(inp1[i]) > tolower(inp2[i])){
            res = 1;
            break;
        }
    }

    cout << res;
}
