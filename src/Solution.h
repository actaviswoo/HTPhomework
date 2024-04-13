#include <iostream>
#include <cstdint>
#include <bitset>
#include <limits>

class Solution {
    public:
    template <typename T, std::size_t N>
    static T* InitSequential() {
        static T arr[N];
        if constexpr (N > 0) {
            for (std::size_t i = 0; i < N; ++i) {
                arr[i] = static_cast<T>(i);
            }
        }
        return arr;
    }
    template <typename T, std::size_t N>
    static void PrintBits(T* arr) {
        constexpr std::size_t num_bits_per_byte = 8;
        constexpr std::size_t num_bits_per_element = sizeof(T) * num_bits_per_byte;
        for (std::size_t i = 0; i < N; ++i) {
            std::cout << std::bitset<num_bits_per_element>(arr[i]) << std::endl;
        }
    }
    template <typename T, std::size_t N>
    static void InvertAllBitsNOT(T* arr) {
        for (std::size_t i = 0; i < N; ++i) {
            arr[i] = ~arr[i];
        }
    }
    template <typename T, std::size_t N>
    static void InvertAllBitsXOR(T* arr) {
        constexpr T mask = std::numeric_limits<T>::max();
        for (std::size_t i = 0; i < N; ++i) {
            arr[i] ^= mask;
        }
    }
    template <typename T, std::size_t N>
    static void InvertBitsInitializerList(T* arr, std::initializer_list<std::size_t> il) {
        for (auto pos : il) {
            if (pos >= N * 8) {
                throw std::invalid_argument("outofrange");
            }
            constexpr std::uint8_t num_bits = sizeof(T) * 8;
            std::size_t index = pos / num_bits;
            unsigned mask = 1u << (pos - index * num_bits);
            *(arr + index) ^= mask;
        }
    }
};
