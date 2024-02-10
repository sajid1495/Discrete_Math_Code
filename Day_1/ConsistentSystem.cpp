#include <bits/stdc++.h>

using namespace std;

void print(bool x){
    if(x == 0){
        cout << 'F' << "\t";
    }
    else if(x == 1){
        cout << 'T' << "\t";
    }
}

bool conjunction(bool x,bool y){
    if(x and y){
        return 1;
    }
    else{
        return 0;
    }
}

bool implication(bool x,bool y){
    if(x == 0){
        return 1;
    }
    else{
        if(y == 0){
            return 0;
        }
        else{
            return 1;
        }
    }
}

int main(){
    
    bool a[] = {1,0},ck = 1;
    cout << "p\tq\tr\tq^r\tp->q\tp->(q^r)\t(p->q)^r" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                print(a[i]);
                print(a[j]);
                print(a[k]);
                cout << " ";
                print(conjunction(a[j],a[k]));
                cout << " ";
                print(implication(a[i],a[j]));
                cout << "   ";
                bool tmp1 = implication(a[i],conjunction(a[j],a[k]));
                bool tmp2 = conjunction(implication(a[i],a[j]),a[k]);
                if(tmp1 != tmp2){
                    ck = 0;
                }
                print(tmp1);
                cout << "\t   ";
                print(tmp2);
                cout << endl;
            }
        }
    }
    if(ck == 1){
        cout << "Logically Equivalance.\n";
    }
    else{
        cout << "Not Logically Equivalance.\n";
    }
    return 0;
}