//
// Created by Lenovo on 30/01/2024.
//
#include <iostream>
#include <vector>
#include <algorithm>

bool greater_than(int a, int b) {
    return a > b;
}

bool myfunction (int i,int j) {
    return (i<j);
}

void print(std::vector<int>& v){
    int n = static_cast<int>(v.size());
    std::cout << "{";
    if (n > 0){
        std::cout << v[0];
        for (int i = 1; i < n; i++)
            std::cout << ',' << v[i];
    }
    std::cout << "}";
}

void special_sort(std::vector<int>& vec, bool (*compare)(int, int)) {
    int n = static_cast<int>(vec.size());
    int x = 0;
    for (int i = x; i < n; i++) {
        if (vec[i] % 2 == 0) {
            std::swap(vec[x], vec[i]);
            x++;
        }
    }

    for (int k = 0; k < n; k++) {
        if (vec[k] % 2 == 0) {
            if (compare(vec[k], vec[k+1]) && vec[k+1] % 2 == 0)
                std::swap(vec[k], vec[k + 1]);
        }
        else
            std::sort(vec.begin()+k, vec.end(), myfunction);
    }
}


int main(){
    std::vector<int> input{7,9,3,4,13,8,5,10};
    special_sort(input,greater_than);
    print(input);
}