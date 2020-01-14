#include <bits/stdc++.h>
#include <stack>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    stack<char> stk;
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] == '{') || (s[i] == '(') || (s[i] == '[')) {
            stk.push(s[i]);
            continue;
        } 
        else if (s[i] == '}') {
            if ((stk.empty() || stk.top() != '{')) return "NO";
            else {
                stk.pop();
                continue;
            }
        } 
        else if (s[i] == ')') {
            if ((stk.empty() || stk.top() != '(')) return "NO";
            else {
                stk.pop();
                continue;
            }
        } 
        else if (s[i] == ']') {
            if ((stk.empty() || stk.top() != '[')) return "NO";
            else {
                stk.pop();
                continue;
            }
        }
    }
    if (stk.empty()) return "YES";
    else return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
