#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int num = 0;
    vector<int> freq(26);
    for (int i = 0; i < a.length(); i++) freq[a[i] - 'a']++;
    for (int i = 0; i < b.length(); i++) freq[b[i] - 'a']--;
    for (int i = 0; i < freq.size(); i++) num += abs(freq[i]);
    return num;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
