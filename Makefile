CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++17
TARGET_DIR = target
GTEST_LIB = -lgtest

all: clean main test

$(TARGET_DIR)/main: src/main.cc
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(TARGET_DIR)/*

main: $(TARGET_DIR)/main
	./$<

run: $(TARGET_DIR)/main | $(TARGET_DIR)
	./$< > $(TARGET_DIR)/temp.txt

test: $(TARGET_DIR)/Tests
	./$^

$(TARGET_DIR)/Tests: tests/Tests.cc
	$(CC) $(CFLAGS) $^ $(GTEST_LIB) -o $@

$(TARGET_DIR):
	mkdir -p $(TARGET_DIR)

.PHONY: all clean run test