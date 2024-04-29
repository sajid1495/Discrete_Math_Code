#include <bits/stdc++.h>


using namespace std;

int main(){
    int n = 100000;
    int a[n],b[n];
    srand(5);

    for(int i = 0; i < n; i++){
        a[i] = rand();
        b[i] = rand();
    }

    clock_t sb = clock();

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(a[j] >= a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    
    clock_t eb = clock();

    double secb = (double)(eb - sb) / CLOCKS_PER_SEC;
    cout << secb << endl;

    clock_t sq = clock();
    sort(b,b+n);
    clock_t eq = clock();
    double secq = (double)(eq - sq) / CLOCKS_PER_SEC;
    cout << secq << endl;


    return 0;
}