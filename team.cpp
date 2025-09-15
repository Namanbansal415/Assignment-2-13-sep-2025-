#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int bestTeam = 0;      // index of best team
    long long bestSum = -1e18; // very small initial value

    for (int i = 0; i < N; i++) {
        long long rowSum = 0;
        for (int j = 0; j < M; j++) {
            int x;
            cin >> x;
            rowSum += x;
        }
        if (rowSum > bestSum) {
            bestSum = rowSum;
            bestTeam = i;
        }
    }

    cout << bestTeam << endl;
    return 0;
}


