#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int actual[3], expect[3];
    int fine;
    cin >> actual[0] >> actual[1] >> actual[2];
    cin >> expect[0] >> expect[1] >> expect[2];
    if (actual[2] < expect[2]) fine = 0;
    else if (actual[2] == expect[2]) {
        if (actual[1] < expect[1]) fine = 0;
        else if (actual[1] == expect[1]) {
            if (actual[0] <= expect[0]) fine = 0;
            else fine = 15 * (actual[0] - expect[0]);
        }
        else fine = 500 * (actual[1] - expect[1]);
    }
    else fine = 10000;

    cout << fine << endl;
    return 0;
}
