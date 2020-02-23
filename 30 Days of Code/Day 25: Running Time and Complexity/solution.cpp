#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    int data[n];
    bool prime[n];
    for (int i = 0; i < n; i++) {
        cin >> data[i];
        prime[i] = true;
    }
    for (int i = 0; i < n ; i++) {
        if (data[i] == 1) prime[i] = false;
        else if (data[i] == 2) prime[i] = true;
        else {
            for (int j = 2; j <= sqrt(data[i]); j++) {
                if (data[i] % j == 0) {
                    prime[i] = false;
                    break;
                }
            }
        }
        if (prime[i]) cout << "Prime" << endl;
        else cout << "Not prime" << endl;
    }
    return 0;
}
