#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int a[4] = {25,10,5,1};
    for(int i = 0; i < 4; i++){
        int tmp = n / a[i];
        n %= a[i];
        if(tmp != 0){
            cout << tmp << "x" << a[i];
            if (i == 3){
                cout << endl;
            }
            else{
                cout << ", ";
            }
        }
    }

    return 0;
}