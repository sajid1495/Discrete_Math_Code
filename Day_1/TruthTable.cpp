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

void negation(bool x){
    if(x == 0){
        cout << 'T' << "\t ";
    }
    else if(x == 1){
        cout << 'F' << "\t ";
    }
}

void conjunction(bool x,bool y){
    if(x and y){
        cout << 'T' << "\t ";
    }
    else{
        cout << 'F' << "\t ";
    }
}

void disjunction(bool x,bool y){
    if(x or y){
        cout << 'T' << "\t ";
    }
    else{
        cout << 'F' << "\t ";
    }
}

void implication(bool x,bool y){
    if(x == 0){
        cout << 'T' << "\t  ";
    }
    else{
        if(y == 0){
            cout << 'F' << "\t  ";
        }
        else{
            cout << 'T' << "\t  ";
        }
    }
}

bool Cimplication(bool x,bool y){
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

void biconditional(bool x,bool y){
    if(Cimplication(x,y) == Cimplication(y,x)){
        cout << 'T' << "\t";
    }
    else{
        cout << 'F' << "\t";
    }
}

int main(){
    
    bool a[] = {1,0};
    cout << "p\tq\t-p\tp^q\tp|d\tp->q\tp<->q" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){ 
            print(a[i]);
            print(a[j]);
            negation(a[i]);
            conjunction(a[i],a[j]);
            disjunction(a[i],a[j]);
            implication(a[i],a[j]);
            biconditional(a[i],a[j]);
            cout << endl;
        }
    }

    return 0;
}