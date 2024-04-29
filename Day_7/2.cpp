#include <bits/stdc++.h>

using namespace std;

string toBinary(int n){
    string r;
    while (n != 0){
        r = (n % 2 == 0 ? "0" : "1") + r;
        n /= 2;
    }
    return r;
}

int main(){
    int b,n,m;
    cin >> b >> n >> m;
    string a = toBinary(n);
    int l = a.size();
   
    int x = 1;
    int power = b % m;
    for(int i = l-1; i >= 0; i--){
        if(a[i] == '1'){
            x = (x * power) % m;
        }
        power = (power * power) % m;
    }
    cout << x << endl;

    return 0;
}