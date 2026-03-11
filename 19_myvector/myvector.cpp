#include "myvector.hpp"
#include<iostream>

MyVector::MyVector(int capacity) : size(0) {
    this -> capacity = capacity;
    elements = new int[capacity];
}

MyVector::~MyVector(){
    delete [] elements;
}

MyVector::MyVector(const MyVector&  other){
    capacity = other.capacity;
    size = other.size;
    elements = new int [capacity]; 

    for(int i = 0; i < size; i++){
        elements[i] = other.elements[i];
    }

};

void MyVector::print() const {
    std::cout << "[ ";
    for(int i= 0; i <size; i++){
        std::cout << elements[i] << ' ';

    }
    std::cout << "]\n";
}

void MyVector::push_back(int val){
    if(size == capacity){ //if array is full
        capacity *= 2; //double its size

        int* newArr = new int[capacity]; //create a new array in the heap with the larger capacity

        for(int i = 0; i < size; i++){//iterate through the old array
            newArr[i] = elements[i];//copy each element into new array
        }

        delete[] elements;   //allocate old array to free up space no longer used
        elements = newArr; // point to new array with larger size
    }

    elements[size] = val;
    size++; //increase size because it may contain one more element
}