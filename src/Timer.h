#include <iostream>
#include <chrono>

/*
    Простенький класс для измерения времени выполнения участка кода
    При вызове конструктора, записывает время в приватное поле
    При вызове деструктора, выводит общее время выполнения участка кода     
*/

class Timer {
public:
    Timer() = delete;
    Timer(const std::string& message) : message_(message) {
        start_ = std::chrono::high_resolution_clock::now();
        std::cout << "timer(" << message << ") started" << std::endl; 
    }
    ~Timer() {
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start_);
        std::cout << "duration = " << duration.count() << " ns" <<std::endl; 
        std::cout << "timer(" << message_ << ") stopped" << std::endl; 
    }

private:
    std::string message_;
    std::chrono::time_point<std::chrono::high_resolution_clock> start_;
};