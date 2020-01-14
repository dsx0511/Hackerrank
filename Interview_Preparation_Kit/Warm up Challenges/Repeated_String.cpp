#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long len = strlen(s.c_str()), num = 0, num_in_remainder = 0;
    long remainder = n % len, repeat = (long) n / len;
    for(long i = 0; i < strlen(s.c_str()); i++) {
        if(s[i] == 'a') {
            num++;
            if(i < remainder) num_in_remainder++;
        }
    }
    num *= repeat;
    num += num_in_remainder;
    return num;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
