/*
    Problem: 2126A - Only One Digit (Codeforces)
    Tags: implementation, brute-force, math.

    What the problem asks:
    Find the smallest digit y (0-9) that appears in the input number x.

    How I solved it:
    I mark all digits present in x using a boolean array.
    Then I check digits from 0 to 9 in ascending order and output the first digit found.
    Since y must be a single digit, this approach guarantees the smallest valid y.

        Author: Victor Ribeiro
        GitHub: github.com/vtribeiro
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll testCases;
    cin >> testCases;
    
    while(testCases--){
        ll inputNumber;
        cin >> inputNumber;

        bool digitPresence[10] = {false};

        ll currentValue = inputNumber;
        while(currentValue > 0){
            ll digit = currentValue % 10;
            digitPresence[digit] = true;
            currentValue /= 10;
        }
        for(ll candidate = 0; candidate <=9; candidate++){
            if(digitPresence[candidate]){
                cout << candidate << endl;
                break;
            }
        }
    }
    return 0;
}