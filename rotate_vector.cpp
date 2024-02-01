//
// Created by Lenovo on 31/01/2024.
//

#include <iostream>
#include <vector>

void rotate(std::vector<int>& vec) {
    vec.push_back(0);
    int length = static_cast<int>(vec.size());
    for (int i = 1; i < vec.size(); i++)
        std::swap(vec[length - i], vec[length - 1 - i]);
    vec[0] = vec[length-1];
    vec.erase(vec.end() - 1);

    for (auto& u : vec)
        std::cout << ' ' << u;
    std::cout << '\n';
}

int main(){
    std::vector<int> input{4,12,78,43,6,7,9,8,3};
    rotate(input);
}