#include <iostream>


using namespace std;


int main(){
    int input;

    cin >> input;
    int v1, v2, v3;
    int res = 0;
    for (int i = 0; i < input; i++)
    {
        cin >> v1 >> v2 >> v3;
        if((v1 == 1 && v2 == 1) || (v1 == 1 && v3 == 1) || (v2 == 1 && v3 == 1)){
            res += 1;
        }

    }
    cout << res;
    return 0;
}