
#include <bits/stdc++.h>

using namespace std;

int main(){
    system("cls");
    cout << "1.Player 1\n";
    cout << "2.Player 2\n";
    cout << "Which Player Do You Want to Be?";
    int n,x,ball = 30;
    cin >> n;
    int ct = ceil(ball/5) - 1;
    if(n == 1){
        while(ball){
            cout << "Enter Number of Ball You Want to Pick(1-4) : ";
            cin >> x;
            ball -= x;
            cout << "Now You Have " << ball << " Ball\n";
            cout << "Player 2 Picked " << ball - (5*ct) << " ball\n";
            ball = (5*ct);
            cout << "Now You Have " << ball << " Ball\n";
            ct--;
        }
        cout << "Player 2 Win!";
    }
    else{
        int tmp = (rand() % 3) + 1;
        cout << "Player 1 Picked " << tmp << " ball\n";
        ball -= tmp;
        cout << "Now You Have " << ball << " Ball\n";
        while(ball){
            cout << "Enter Number of Ball You Want to Pick(1-4) : ";
            cin >> x;
            ball -= x;
            cout << "Now You Have " << ball << " Ball\n";
            if(ball == 0){
                cout << "Player 2 Win!";
                break;
            }
            if (ball % 5 == 0){
                int tmp = (rand() % 3) + 1;
                cout << "Player 1 Picked " << tmp << " ball\n";
                ball -= tmp;
                cout << "Now You Have " << ball << " Ball\n";
                if (ball == 0){
                    cout << "Player 1 Win!";
                }
            }
            else{
                cout << "Player 1 Picked " << ball % 5 << " ball\n";
                ball -= (ball % 5);
                cout << "Now You Have " << ball << " Ball\n";
                ct--;
                if (ball == 0){
                    cout << "Player 1 Win!";
                }
            }
        }
    }

    return 0;
}