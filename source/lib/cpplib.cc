#include "cpplib.h"
#include <limits>
std::string CPPLib::PrintHelloWorld() {
    return "Hello StevePro";
}

// Calculates the Nth Fibonacci number
int CPPLib::fib(int N) {
    if (N < 2) {
        return N;
    }

    return fib(N - 1) + fib(N - 2);
}

int CPPLib::FindMax(const std::vector<int> &inputs) {
    if (inputs.size() == 0) {
        return -1;
    }

    int result = std::numeric_limits<int>::min();
    for (auto n : inputs) {
        if (n > result) {
            result = n;
        }
    }

    return result;
}