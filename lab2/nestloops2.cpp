#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of lines (from 1 to 15): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        for (int j = 0; j < n - i; j++)
            cout << "    ";
        

        int total = 2 * i - 1;

        for (int k = 0; k < total; k++) {
            int val = (k < i) ? (i - k) : (k - i + 2);

            cout << left << setw(2) << val;

            if (k != total - 1) cout << "  ";
        }

        cout << '\n';
    }

    return 0;
}