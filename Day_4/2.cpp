#include <iostream>
#include <vector>

using namespace std;

void powerset(vector<int> &nums){
    int n = nums.size();
    int powSize = 1 << n;
    cout << "{}";
    for (int counter = 0; counter < powSize; counter++){
        for (int j = 0; j < n; j++){
            if ((counter & (1 << j)) != 0){
                cout << "{" << nums[j] << "}";
            }
        }
        cout << endl;
    }
}

int main(){
    vector<int> v;
    cout << "Enter the size of the set : ";
    int n;
    cin >> n;
    cout << "Enter the elements of the set : ";
    while(n--){
        int x;
        cin >> x;
        v.push_back(x);
    }
    powerset(v);
}