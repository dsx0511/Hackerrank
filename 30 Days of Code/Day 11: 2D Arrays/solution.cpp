#include <bits/stdc++.h>

using namespace std;

void hourglassSum(vector<vector<int>> arr) {
    vector<vector<int>> hourglass(4);
    for (int i = 1; i < 5; i++) {
        hourglass[i-1].resize(4);
        for (int j = 1; j < 5; j++) {
            hourglass[i-1][j-1] = arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1] + arr[i][j] + arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];
        }
    }
    int max = hourglass[0][0];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (hourglass[i][j] > max) { max = hourglass[i][j]; } 
        }
    }
    cout << max << endl;
}

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    hourglassSum(arr);

    return 0;
}
