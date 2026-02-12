#include<iostream>
#include<random>

using namespace std;

int f1(std::mt19937& eng) {
    std::uniform_int_distribution<int>dist(-10, 10);
    return dist(eng);
}

int main(void) {

    int seed;
    cout << "Enter the seed ";
    cin >> seed;

    std::mt19937 eng(seed);

    std::cout << f1(eng);

    return 0;
}