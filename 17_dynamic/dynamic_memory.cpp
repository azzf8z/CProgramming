#include <iostream>


void printArr(int* arr, int size) {
    
};

int main(void) {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};
    printArr(arr, SIZE);
    return 0;
}

void printArr(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
}
    std::cout << std::endl;
}