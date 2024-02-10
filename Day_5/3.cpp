#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int m,n,x; 
    cout << "Enter the number of element of set A and B : ";
    cin >> m >> n; 
    set <int> s1,s2,s3;
    cout << "Enter the elemt of set A : ";
    for(int i = 0; i < m; i++){
        cin >> x;
        s1.insert(x);
    }
    
    cout << "Enter the elemt of set B : ";
    for(int i = 0; i < n; i++){
        cin >> x;
        s2.insert(x);
    }
    for(auto i : s1){
        int tmp = pow(i,3) - pow(i,2) + i -1;
        s3.insert(tmp);
    }

    if(s1.size() == s3.size()){
        cout << "One to One."<< endl;
    }
    else{
        cout << "Not One to One."<< endl;
    }

    if(s3 == s2){
        cout << "Onto.\n";
    }
    else{
        cout << "Not Onto.\n";
    }

    return 0;
}