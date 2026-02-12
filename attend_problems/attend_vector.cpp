#include <iostream>
#include <cmath>
#include <vector>

void rotateLeft(std::vector<char>& v, int k);

int main(void) {
    std::vector<char> attend = {
        '1','u','3','4','g','6','r','j','y','j',
        'd','d','f','h','s','d','f','5','a','d',
        'h','6','j','s','d','f','j','1','u','b',
        'c','z','c','6','q','o','9','s','j','d',
        'f'
    };

    int n_rotations = pow((50 * 2 - 75 / 3 + 20 % 7 + 20 + 12 / 4), 3);

    rotateLeft(attend, n_rotations);

    for (int i = 0; i < 5; i++) {
        std::cout << attend.at(i);
    }
    std::cout << '\n';

    return 0;
}

void rotateLeft(std::vector<char>& v, int k) {
    int n = v.size();
    if (n == 0) return;

    k = k % n;  // reduce rotations

    std::vector<char> temp;

    // copy from index k to end
    for (int i = k; i < n; i++) {
        temp.push_back(v[i]);
    }

    // copy from start to index k
    for (int i = 0; i < k; i++) {
        temp.push_back(v[i]);
    }

    v = temp;
}