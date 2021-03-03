#include <iostream>
#include <string.h>

using namespace std;


int main(){
    int param, len;
    cin >> param;
    char input[100];
    
    for (int i = 0; i < param; i++){
        cin >> input;
        len = strlen(input);
        if(len>10){
            cout << input[0] << len-2 << input[len-1] << endl;
        }
        else{
            cout << input << endl;
        }
    }
    
    return 0;
}
