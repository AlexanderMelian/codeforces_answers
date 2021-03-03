#include <iostream>

using namespace std;


int main(){
    int n, k,results[50], resp = 0;
    cin >> n >> k;
    for(int i = 0; i<n; i++){
        cin >> results[i];
    }
    for(int i = 0; i < n; i++){
        if(results[i] >= results[k-1] && results[i]>0){
            resp += 1;
        }
    }
    cout << resp;
}
