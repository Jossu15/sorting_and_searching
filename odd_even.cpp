//
// Created by Lenovo on 1/02/2024.
//
#include <iostream>
#include <vector>

bool balanced(const std::vector<int>& v){
    int odd_sum = 0;
    int even_sum = 0;
    for (auto& u : v){
        if (u % 2 == 0)
            even_sum++;
        else
            odd_sum++;
    }
    if (odd_sum == even_sum || v.empty())
        return true;
    return false;
}

int main(){
    std::vector<int> input{5,1,0,2};
    std::cout << balanced(input) << '\n';
}