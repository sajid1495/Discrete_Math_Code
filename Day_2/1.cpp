#include <bits/stdc++.h>

using namespace std;

int m,n;

bool i(vector <int> a, vector <int> b){
    int n1 = m;
    int n2 = n;
    int tmp = 1;
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(a[i] + b[j] < 2){
                tmp = 0;
                break;
            }
        }
    }
    if(tmp == 0){
        return false;
    }
    else{
        return true;
    }
}


bool ii(vector <int> a, vector <int> b){
    int n1 = m;
    int n2 = n;
    int tmp = 1;
    int c[n1] = {0};
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(a[i] + b[j] > 1){
                c[i] = 1;
                break;
            }
        }
    }
    for(int i = 0; i < n1; i++){
        if(c[i] == 0){
            tmp = 0;
            break;
        }
    }
    if(tmp == 0){
        return false;
    }
    else{
        return true;
    }
}

bool iii(vector <int> a, vector <int> b){
    int n1 = m;
    int n2 = n;
    int tmp = 0;
    int c[n1] = {1};
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(a[i] + b[j] < 2){
                c[i] = 0;
                break;
            }
        }
    }
    for(int i = 0; i < n1; i++){
        if(c[i] == 1){
            tmp = 1;
            break;
        }
    }
    if(tmp == 0){
        return false;
    }
    else{
        return true;
    }
}


bool iv(vector <int> a, vector <int> b){
    int n1 = m;
    int n2 = n;
    int tmp = 0;
    int c[n1] = {0};
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(a[i] + b[j] > 1){
                c[i] = 1;
                break;
            }
        }
    }
    for(int i = 0; i < n1; i++){
        if(c[i] == 1){
            tmp = 1;
            break;
        }
    }
    if(tmp == 0){
        return false;
    }
    else{
        return true;
    }
}


int main(){
    
    cout << "Enter the number of values of x : " ;
    cin >> m;
    vector <int> a(m);
    cout << "Enter the elements of x : " << endl;
    for (int i = 0; i < m; i++){
        cin >> a[i];
    }
    cout << "Enter the number of values of y : " ;
    cin >> n;
    vector <int> b(n);
    cout << "Enter the elements of y : " << endl;
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    cout << i(a,b) << endl;
    cout << ii(a,b) << endl;
    cout << iii(a,b) << endl;
    cout << iv(a,b) << endl;


    return 0;
}