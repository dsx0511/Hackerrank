#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    stack<int> bin;
    do {
        bin.push(n % 2);
        n = n / 2;
    } while (n != 0);

    int max = 0, current = 0;
    while(!bin.empty()) {
        if (bin.top() == 1) {
            current ++;
        } else {
            if (current > max) max = current;
            current = 0;
        }
        bin.pop();
    }
    if (current > max) max = current;

    cout << max << endl;

    return 0;
}
