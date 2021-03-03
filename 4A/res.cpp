#include <iostream>

using namespace std;

int main(){
    int input;
    cin >> input;
    if( input < 0 || input == 0|| input == 1 || input == 2){
        cout << "NO" << endl;
    }
    else if (input % 2 == 0){
        cout <<"YES" << endl;
    }
    else{
        cout << "NO";
    }
    return 0;
}