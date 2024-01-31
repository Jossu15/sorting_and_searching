//
// Created by Lenovo on 30/01/2024.
//
#include <iostream>
#include <vector>

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

void reverse(std::vector<int>& v){
    int length = static_cast<int>(v.size());
    int a = 0;
    while (a < length/2){
        std::swap(v[a],v[length-1-a]);
        a++;
    }
}

int main(){
    std::vector<int> vec{2,6,2,5,0,1,2,3};
    print(vec);
    std::cout << '\n';
    reverse(vec);
    print(vec);
}