#include <bits/stdc++.h>

using namespace std;

class Time{
    public:
        int h,m;
    Time(int x, int y){
        h = x;  m=y;
    }
};

bool compareTimes(const pair<Time, Time>& a, const pair<Time, Time>& b) {
    return a.second.h * 60 + a.second.m < b.second.h * 60 + b.second.m;
}
bool compare(Time a, Time b){
    if(a.h < b.h){
        return true;
    }
    else if(a.h > b.h){
        return false;
    }
    else if(a.h == b.h){
        if(a.m < b.m){
            return true;
        }
        else{
            return false;
        }
    }
}
int timeGap(pair<Time,Time> t){
    int min = 0;
    if(t.second.m >= t.first.m){
        min += t.second.m - t.first.m;
    }
    else{
        min += (60-t.first.m) +  t.second.m;
        t.first.h++;

    }
    min += 60 * (t.second.h - t.first.h);
}

int main(){
    int n;
    cout << "Enter the number of talk : ";
    cin >> n;
    vector <pair<Time,Time>> t,t2;
    for (int i = 0; i < n; i++){
        cout << "Enter start time " << i + 1 << "(hh mm) : ";
        int h1, m1,h2,m2;
        cin >> h1 >> m1;
        cout << "Enter end time " << i + 1 << "(hh mm) : ";
        cin >> h2 >> m2;
        t.push_back(make_pair(Time(h1,m1),Time(h2,m2)));
    }
    sort(t.begin(),t.end(),compareTimes);  
    for(auto val : t){
        cout << val.first.h << " " << val.first.m << "\t";
        cout << val.second.h << " " << val.second.m << "\n"; 
    }
    
    int ans = 1, j = 0;
    t2.push_back(t[0]);
    for (int i = 1; i < n; i++){
        if(compare(t[j].second,t[i].first)){
            j = i;
            ans++;
            t2.push_back(t[i]);

        }
    }
    cout << "Number of Talk : " << ans << endl;
    for(auto val : t2){
        cout << val.first.h << " " << val.first.m << "\t";
        cout << val.second.h << " " << val.second.m << "\n"; 
    }

    return 0;
}