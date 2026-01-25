#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int scores[51];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int kthScore = scores[k - 1];  // score at k-th position
    int result = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] >= kthScore && scores[i] > 0) {
            result++;
        }
    }

    cout << result << endl;
    return 0;
}
