#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        int hp, P, H;
        cin >> hp >> P >> H;

        while ((P > 0 || H > 0) && hp > 0) {
            if (P > 0) {
                hp = hp / 2 + 10;
                P--;
            } else if (H > 0) {
                hp -= 10;
                H--;
            }
        }

        if (hp > 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
