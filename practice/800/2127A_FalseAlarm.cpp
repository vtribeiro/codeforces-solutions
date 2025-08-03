/*
    Problem: 2126A - Only One Digit (Codeforces)
    Tags: implementation, brute-force, math.

    Determine if it is possible to pass through all doors using a special button.

    Description:
    Given a hallway with n doors (open = 0, closed = 1), Yousef must go through all doors in order.
     Each door takes 1 second to pass through.
    Yousef has a button that can be pressed once and will open all closed doors for x seconds.

    Strategy:
    - Locate the first and last closed doors (value 1) in the sequence.
    - Calculate how many seconds it would take to pass through from the first to the last closed door.
    - If this time is less than or equal to x (the time the button keeps doors open), then it's possible to cross.
    - Otherwise, it's not.

    The decision is based on the condition: (lastClosed - firstClosed + 1) <= x

        Author: Victor Ribeiro
        GitHub: github.com/vtribeiro
        Codeforces: VictorRibeiro
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll testCase;
    cin >> testCase;
    while(testCase--){
        ll numberDoors, seconds, begin = -1, end = -1;
        cin >> numberDoors >> seconds;
        vector<ll> doorsOrder;
        for(int i = 0; i < numberDoors; i++){
            ll input;
            cin >> input;
            doorsOrder.push_back(input);
            if(begin == -1 && input == 1){
                begin = i;
            }
        }
        for(int i = numberDoors - 1; i >= 0; i--){
            if(doorsOrder[i] == 1){
                end = i;
                break;
            }
        }
        if((end - begin) + 1 <= seconds){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}