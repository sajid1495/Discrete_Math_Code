#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int m,n,x;
    
    cout << "Enter the number of element of set A and B : ";
    cin >> m >> n;
    int a[m],b[n];
    cout << "Enter the elemt of set A : ";
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    sort(a,a+m);
    for(int i = 0; i < m-1; i++){
        int tmp = a[i];
        if(a[i] == a[i+1]){
            for(int j = i+1; j < m; j++){
                if(tmp == a[j]){
                    a[j] = 0;
                }
                else{
                    break;
                }
            }
        }
    }
    sort(a,a+m);
    cout << "Enter the elemt of set B : ";
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    sort(b,b+n);
    for(int i = 0; i < n-1; i++){
        int tmp = b[i];
        if(b[i] == b[i+1]){
            for(int j = i+1; j < n; j++){
                if(tmp == b[j]){
                    b[j] = 0;
                }
                else{
                    break;
                }
            }
        }
    }
    sort(b,b+n);

    int pos1,pos2,flag = 1;
    for(int i = 0; i < m; i++){
        if(a[i] != 0){
            pos1 = i;
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(b[i] != 0){
            pos2 = i;
            break;
        }
    }
    cout << "(";
    for(int i = pos1; i < m; i++){
        for(int j = pos2; j < n; j++){
            cout << "(" << a[i] << "," << b[j];
            if(j == n-1){
                cout << ")";
            }
            else{
                cout << "),";
            }
        }
    }
    cout << ")\n";


    return 0;
}