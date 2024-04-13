#include "gtest/gtest.h"
#include "../src/Solution.h"
#include "../src/Timer.h"

TEST(SolutionTest, InitSequential_uint8) {
    const size_t size = 4;
    auto array = Solution::InitSequential<uint8_t, size>();
    uint8_t expected_result[size] = {0, 1, 2, 3};
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InitSequential_uint16) {
    const size_t size = 4;
    auto array = Solution::InitSequential<uint16_t, size>();
    uint16_t expected_result[size] = {0, 1, 2, 3};
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InitSequential_uint32) {
    const size_t size = 4;
    auto array = Solution::InitSequential<uint32_t, size>();
    uint32_t expected_result[size] = {0, 1, 2, 3};
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InitSequential_uint64) {
    const size_t size = 4;
    auto array = Solution::InitSequential<uint64_t, size>();
    uint64_t expected_result[size] = {0, 1, 2, 3};
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InvertAllBitsNOTTest_uint8) {
    const size_t size = 4;
    uint8_t array[size] = {15, 7, 3, 0};
    uint8_t expected_result[size] = {240, 248, 252, 255};
    Solution::InvertAllBitsNOT<uint8_t, size>(array);
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InvertAllBitsNOTTest_uint16) {
    const size_t size = 4;
    uint16_t array[size] = {500, 1000, 2000, 3000};
    uint16_t expected_result[size] = {65035, 64535, 63535, 62535};
    Solution::InvertAllBitsNOT<uint16_t, size>(array);
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InvertAllBitsNOTTest_uint32) {
    const size_t size = 4;
    uint32_t array[size] = {70000, 80000, 90000, 100000};
    uint32_t expected_result[size] = {4294897295, 4294887295, 4294877295, 4294867295};
    Solution::InvertAllBitsNOT<uint32_t, size>(array);
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InvertAllBitsNOTTest_uint64) {
    const size_t size = 4;
    uint64_t array[size] = {5000000000, 6000000000, 7000000000, 8000000000};
    uint64_t expected_result[size] = {18446744068709551615ull, 18446744067709551615ull, 18446744066709551615ull, 18446744065709551615ull};
    Solution::InvertAllBitsNOT<uint64_t, size>(array);
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}


TEST(SolutionTest, InvertAllBitsXORTest_uint8) {
    const size_t size = 4;
    uint8_t array[size] = {15, 7, 3, 0};
    uint8_t expected_result[size] = {240, 248, 252, 255};
    Solution::InvertAllBitsXOR<uint8_t, size>(array);
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InvertAllBitsXORTest_uint16) {
    const size_t size = 4;
    uint16_t array[size] = {500, 1000, 2000, 3000};
    uint16_t expected_result[size] = {65035, 64535, 63535, 62535};
    Solution::InvertAllBitsXOR<uint16_t, size>(array);
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InvertAllBitsXORTest_uint32) {
    const size_t size = 4;
    uint32_t array[size] = {70000, 80000, 90000, 100000};
    uint32_t expected_result[size] = {4294897295, 4294887295, 4294877295, 4294867295};
    Solution::InvertAllBitsXOR<uint32_t, size>(array);
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InvertAllBitsXORTest_uint64) {
    const size_t size = 4;
    uint64_t array[size] = {5000000000, 6000000000, 7000000000, 8000000000};
    uint64_t expected_result[size] = {18446744068709551615ull, 18446744067709551615ull, 18446744066709551615ull, 18446744065709551615ull};
    Solution::InvertAllBitsXOR<uint64_t, size>(array);
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InvertBit_uint8) {
    const size_t size = 4;
    uint8_t array[size] = {15, 7, 3, 0};
    uint8_t expected_result[size] = {15, 7, 2, 0};
    Solution::InvertBit<uint8_t>(array[2], 0);
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InvertBit_uint16) {
    const size_t size = 4;
    uint16_t array[size] = {500, 1000, 2000, 3000};
    uint16_t expected_result[size] = {500, 1000, 2001, 3000};
    Solution::InvertBit<uint16_t>(array[2], 0);
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InvertBit_uint32) {
    const size_t size = 4;
    uint32_t array[size] = {70000, 80000, 90000, 100000};
    uint32_t expected_result[size] = {70000, 80000, 90001, 100000};
    Solution::InvertBit<uint32_t>(array[2], 0);
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InvertBit_uint64) {
    const size_t size = 4;
    uint64_t array[size] = {5000000000, 6000000000, 7000000000, 8000000000};
    uint64_t expected_result[size] = {5000000000, 6000000000, 7000000001, 8000000000};
    Solution::InvertBit<uint64_t>(array[2], 0);
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InvertBitsInitializerListTest_uint8) {
    const size_t size = 4;
    uint8_t array[size] = {15, 7, 3, 0};
    uint8_t expected_result[size] = {9, 6, 2, 1};
    Solution::InvertBitsInitializerList<uint8_t, size>(array, {1, 2, 8, 16, 24});
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InvertBitsInitializerListTest_uint16) {
    const size_t size = 4;
    uint16_t array[size] = {500, 1000, 2000, 3000};
    uint16_t expected_result[size] = {498, 1001, 2001, 3001};
    Solution::InvertBitsInitializerList<uint16_t, size>(array, {1, 2, 16, 32, 48});
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InvertBitsInitializerListTest_uint32) {
    const size_t size = 4;
    uint32_t array[size] = {70000, 80000, 90000, 100000};
    uint32_t expected_result[size] = {70006, 80001, 90001, 100001};
    Solution::InvertBitsInitializerList<uint32_t, size>(array, {1, 2, 32, 64, 96});
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InvertBitsInitializerListTest_uint64) {
    const size_t size = 4;
    uint64_t array[size] = {5000000000, 6000000000, 7000000000, 8000000000};
    uint64_t expected_result[size] = {1104511627782, 6000000001, 7000000001, 8000000001};
    Solution::InvertBitsInitializerList<uint64_t, size>(array, {1, 2, 40, 64, 128, 192});
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(expected_result[i], array[i]);
    }
}

TEST(SolutionTest, InvertBitsHard) {
    const size_t size = 100000000;
    auto array1 = Solution::InitSequential<uint64_t, size>();
    auto array2 = Solution::InitSequential<uint64_t, size>();
    {
    Timer timer("invert by NOT");
    Solution::InvertAllBitsNOT<uint64_t, size>(array1);
    }
    {
    Timer timer("invert by XOR");
    Solution::InvertAllBitsXOR<uint64_t, size>(array2);
    }
    for (size_t i = 0; i < size; ++i) {
        ASSERT_EQ(array1[i], array2[i]);
    }
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}