#include "Solution.h"
#include "Timer.h"

int main() {
    const size_t size = 10;
    auto array1 = Solution::InitSequential<int8_t, size>();
    std::cout << "\n-----------default memory-----------" << std::endl;
    Solution::PrintBits<int8_t, size>(array1);
    std::cout << "\n-----------inverted memory-----------" << std::endl;
    {
        Timer timer("invert by XOR");
        Solution::InvertAllBitsXOR<int8_t, size>(array1);
        Solution::PrintBits<int8_t, size>(array1);
    }
    std::cout << "\n-----------double inverted memory-----------" << std::endl;
    {
        Timer timer("invert by NOT");
        Solution::InvertAllBitsXOR<int8_t, size>(array1);
        Solution::PrintBits<int8_t, size>(array1);
    }
    std::cout << "\n-----------change in range-----------" << std::endl;
    Solution::InvertBitsInitializerList<int8_t, size>(array1, {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 11, 12, 13, 14, 15});
    Solution::PrintBits<int8_t, size>(array1);
    return 0;
}