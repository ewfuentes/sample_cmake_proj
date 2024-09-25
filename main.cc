#include <iostream>
#include <vector>
#include <random>

#include "common/argument_wrapper.hh"
#include "common/math/sample_without_replacement.hh"

int main(int argc, char **argv) {
    std::mt19937 gen(0);
    const std::vector<double> weights{1, 2, 3, 4, 5};

    constexpr bool NOT_LOG_PROBABILITY = false;
    const std::vector<int> selected_idxs = robot::math::sample_without_replacement(weights, 2, NOT_LOG_PROBABILITY, robot::make_in_out(gen));
    std::cout << "hello world" << std::endl;
    std::cout << "Sampled: [";
    for (const int idx : selected_idxs) {
        std::cout << idx << ", ";
    }
    std::cout << "]" << std::endl;
}
