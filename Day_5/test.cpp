#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string n;
    cin >> n;
    int s = n.size(),batti = 0;
    for(int i = 0; i < s; i++){
        if (n[i] == '7' or n[i] == '4'){
            batti++;
        }
    }
    if(batti == 4 or batti == 7){
        cout  << "YES\n";
    }
    else{
        cout  << "NO\n";
    }
    return 0;
}
