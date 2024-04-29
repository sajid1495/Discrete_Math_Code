#include <bits/stdc++.h>

using namespace std;

long long inverse(long long a, long long b, long long &x, long long &y) {
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }
    long long x1, y1;
    long long gcd = inverse(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return gcd;
}

long long chineRem(vector<long long> num, vector<long long> rem) {
    long long prod = 1;
    for (int i = 0; i < num.size(); i++)
        prod *= num[i];

    long long result = 0;

    for (int i = 0; i < num.size(); i++) {
        long long pp = prod / num[i];
        long long inv, y;
        inverse(pp, num[i], inv, y);
        result += rem[i] * inv * pp;
    }

    return result % prod;
}

int main() {
    
    int n;
    cout << "Enter the number of relations : ";
    cin >> n;
    vector<long long> mod;
    vector<long long> rem;
    for(int i = 0; i < n; i++){
        cout <<  "Modulo and remainder values for relation "<< i+1 <<" : ";
        long long m, r;
        cin >> m >> r;
        mod.push_back(m);   
        rem.push_back(r);
    }

    cout << "x = " << chineRem(mod, rem) << endl;

    return 0;
}
