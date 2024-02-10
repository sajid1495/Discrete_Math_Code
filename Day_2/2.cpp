#include <bits/stdc++.h>

using namespace std;

void menu(){
    cout << "1. Instructor" << endl;
    cout << "2. Enrollment" << endl;
    cout << "3. Query" << endl;
    cout << "4. Exit" << endl;
}

int main(){

    map<string, vector<string>> teacher;
    map<string, vector<string>> student;
    start:
    menu();
    int op;
    cout << "Enter Your Option : ";
    cin >> op;
    string x, y;
    int t;

    if(op == 1){
        cout << "Enter Instructor's Name : ";
        cin.ignore();
        getline(cin, x);
        cout << "Number of Course : ";
        int t;
        cin >> t;
        cout << "Enter Course Name : ";
        cin.ignore();
        for (int i = 0; i < t; i++)
        {
            getline(cin, y);
            teacher[x].push_back(y);
        }
        cout << endl << endl;
        goto start;
    }
    else if(op == 2){
        cout << "Enter Student's Name : ";
        cin.ignore();
        getline(cin, x);
        cout << "Number of Course : ";
        cin >> t;
        cout << "Enter Course Name : ";
        cin.ignore();
        for (int i = 0; i < t; i++)
        {
            getline(cin, y);
            student[x].push_back(y);
        }
        cout << endl << endl;
        goto start;
    }
    else if(op == 3){
        cout << "Enter Teacher's Name : ";
        cin >> x;
        cout << "Enter Student's Name : ";
        cin >> y;
        int tmp = 0;
        for(auto val : student[y]){
            for(auto val2 : teacher[x]){
                if(val == val2){
                    tmp = 1;
                    break;
                }
            }
        }
        if(tmp == 1){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
        cout << endl << endl;
        goto start;
    }
    else if(op == 4){
        return 0;
    }
    
    return 0;
}