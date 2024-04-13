#include <iostream>
#include <cstdint>
#include <bitset>
#include <limits>

class Solution {
    public:
    template <typename T, std::size_t N, typename std::enable_if<std::is_integral<T>::value>::type* = nullptr>
    static T* InitSequential() {
        static T arr[N];
        if constexpr (N > 0) {
            for (std::size_t i = 0; i < N; ++i) {
                arr[i] = static_cast<T>(i);
            }
        }
        return arr;
    }
    template <typename T, std::size_t N, typename std::enable_if<std::is_integral<T>::value>::type* = nullptr>
    static void PrintBits(T* arr) {
        constexpr std::size_t num_bits_per_byte = 8;
        constexpr std::size_t num_bits_per_element = sizeof(T) * num_bits_per_byte;
        for (std::size_t i = 0; i < N; ++i) {
            std::cout << std::bitset<num_bits_per_element>(arr[i]) << std::endl;
        }
    }
    template <typename T, std::size_t N, typename std::enable_if<std::is_integral<T>::value>::type* = nullptr>
    static void InvertAllBitsNOT(T* arr) {
        for (std::size_t i = 0; i < N; ++i) {
            arr[i] = ~arr[i];
        }
    }
    template <typename T, std::size_t N, typename std::enable_if<std::is_integral<T>::value>::type* = nullptr>
    static void InvertAllBitsXOR(T* arr) {
        constexpr T mask = std::numeric_limits<T>::max();
        for (std::size_t i = 0; i < N; ++i) {
            arr[i] ^= mask;
        }
    }
    template <typename T, typename std::enable_if<std::is_integral<T>::value>::type* = nullptr>
    static void InvertBit(T& arr, std::size_t pos) {
        T mask = static_cast<T>(1) << pos;
        arr ^= mask;
    }
    template <typename T, std::size_t N, typename std::enable_if<std::is_integral<T>::value>::type* = nullptr>
    static void InvertBitsInitializerList(T* arr, std::initializer_list<std::size_t> il) {
        for (auto pos : il) {
            InvertBit(arr[pos / (sizeof(T) * 8)], pos % (sizeof(T) * 8));
        }
    }
};