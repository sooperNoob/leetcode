#ifndef TWOSUM_HXX
#define TWOSUM_HXX
#include <cstddef> //size_t definition
#include <tuple>
#include <iostream>

template <size_t array_size>
constexpr std::pair<int, int> twosum(const int(&nums)[array_size], int target) noexcept {
    for(int i=0;i<array_size;i++){
        for(int j=i+1;j<array_size;j++){
            if(nums[i] + nums[j] == target){
                return {nums[i], nums[j]};
            }
        }
    }
    return {-1, -1};
}

void execute_twosum() {
    constexpr int nums[]={2, 7, 11, 15};
    constexpr int target = 17;
    auto [val1, val2] = twosum(nums, target);
    std::cout << "Val1 = " << val1 << ", val2 = " << val2 << ", target = " << target << std::endl;
}
#endif