#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int height_last = 0, height = 0, num_valley = 0;
    bool begin_valley = false;
    for(int i = 0; i < strlen(s.c_str()); i++) {
        if (s.at(i) == 'U') height++;
        else if (s.at(i) == 'D') height--;
        if ((height == -1) & (height_last == 0)) begin_valley = true;
        if ((height_last == -1) & (height == 0) && begin_valley) num_valley++;
        height_last = height;
    }
    return num_valley;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";
    cout << result << endl;

    fout.close();

    return 0;
}
