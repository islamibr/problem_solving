#include <bits/stdc++.h>

using namespace std;

void printcreatures_Heights(int creatures_Heights[], int N) {
    for (int i = 0; i < N; i++)
        cout << creatures_Heights[i] << (i == N - 1 ? '\n' : ' ');
}
int main() {
    int q;
    cin >> q;
    for (q; q > 0; q--) {
        int N;
        cin >> N;
        int creatures_Heights[N];
        int answer[N];
        for (int i = 0; i < N; i++)
            cin >> creatures_Heights[i];

        for (int i = 0; i < N - 1; i++) {
            int count = 1, currMax = creatures_Heights[i + 1];
            for (int j = i + 1; j < N; j++) {
                if (currMax < creatures_Heights[j]) {
                    count++;
                    currMax = creatures_Heights[j];
                }
                if (creatures_Heights[j] > creatures_Heights[i])
                    break;
            }
            answer[i] = count;
        }
        answer[N - 1] = 0;
        printcreatures_Heights(answer, N);
    }
    return 0;
}
