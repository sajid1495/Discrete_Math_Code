#include <bits/stdc++.h>

using namespace std;

vector<int> GCD(int a, int b){
    int s1 = 1,s = 0;
    int t1 = 0,t = 1;

    while (b != 0){
        int div = a/b;

        int tmp = b;
        b = a - div*b;
        a = tmp;

        tmp = s;
        s = s1 - div*s;
        s1 = tmp;

        tmp = t;
        t = t1 - div*t;
        t1 = tmp;
    }
    vector <int> v;
    v.push_back(a);
    v.push_back(s1);
    v.push_back(t1);

    return v;
}


int main(){
    
    int a,b;
    cin >> a >> b;
    vector<int> res = GCD(a,b);
    cout << "GCD = " << res[0] << endl;
    cout << "Bezout's Coefficients = " << res[1] << " " << res[2] << endl;

    return 0;
}