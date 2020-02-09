#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    string s[t];
    for (int i = 0; i < t; i++) {
        cin >> s[i];
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < t; i++) {
        string even, odd;
        for (int j = 0; j < s[i].length(); j++) {
            if (j % 2 == 0) even.append(1, s[i][j]);
            else odd.append(1, s[i][j]);
        }
        cout << even << " " << odd << endl;
    }

    return 0;
}
