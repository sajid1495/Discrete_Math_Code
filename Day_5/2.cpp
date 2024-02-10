#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int l1,l2,u1,u2,sum = 0;
    cin >> l1 >> l2 >> u1 >> u2;
    for(int i = l1; i <= u1; i++){
        for(int j = l2; j <= u2; j++){
            sum += (i+j);
        }
    }
    cout << sum << endl;

    return 0;
}


