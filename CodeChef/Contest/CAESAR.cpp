#include <iostream>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;

        char s[n], t[n], u[n];
        cin >> s >> t >> u;

        char t1 = s[0];
        char t2 = t[0];
        char t3;

        if (t2 >= t1 && t2 <= 'z') {
            t3 = t2 - t1;
            for (int i = 0; i < n; i++) {
                char k = u[i] + t3;
                if (k > 'z') {
                    k = 'a' + (k - 'z' - 1);
                }
                cout << k;
            }
        } else {
            t3 = t1 - t2;
            for (int i = 0; i < n; i++) {
                char j = 'a' + (t3 + u[i] - 'a');
                cout << j;
            }
        }

        cout << endl;
    }

    return 0;
}
