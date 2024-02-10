#include <bits/stdc++.h>

using namespace std;

set <int> aub(set <int> a, set <int> b){
    set <int> c;
    for(auto val : a){
        c.insert(val);
    }
    for(auto val : b){
        c.insert(val);
    }
    return c;
}

set <int> aib(set <int> a, set <int> b){
    set <int> c;
    for(auto val : a){
        for(auto val2 : b){
            if(val == val2){
                c.insert(val);
                break;
            }
        }
    }
    
    return c;
}

set <int> amib(set <int> a, set <int> b){
    for(auto val : b){
        for(auto val2 : a){
            //cout << val << " " << val2 << endl;
            if(val == val2){
                a.erase(val);
                break;
            }
        }
    }
    
    return a;
}

set <int> bmia(set <int> a, set <int> b){
    for(auto val : a){
        for(auto val2 : b){
            //cout << val << " " << val2 << endl;
            if(val == val2){
                b.erase(val);
                break;
            }
        }
    }
    
    return b;
}

set <int> asdb(set <int> a, set <int> b){
    set <int> c = a;
    set <int> d = b;
    
    set <int> p = aub(amib(a,b),amib(d,c));
    return p;
}


int main(){
    int m,n,x; 
    cout << "Enter the number of element of set A and B : ";
    cin >> m >> n; 
    set <int> s1,s2;
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
    cout << "A U B : " << endl;
    set <int> c = aub(s1,s2);
    for (auto i: c){
        cout << i << " ";
    }
    cout << endl;

    cout << "A I B : " << endl;
    set <int> d = aib(s1,s2);
    for (auto i: d){
        cout << i << " ";
    }
    cout << endl;

    cout << "A - B : " << endl;
    set <int> e = amib(s1,s2);
    for (auto i: e){
        if(i != 0){
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "B - A : " << endl;
    set <int> f = bmia(s1,s2);
    for (auto i: f){
        if(i != 0){
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "A SD B : " << endl;
    set <int> g = asdb(s1,s2);
    for (auto i: g){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
