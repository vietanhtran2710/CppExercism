#include "triangle.h"
#include <stdexcept>

using namespace std;

namespace triangle {

    int kind(float a, float b, float c) {
        if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
            throw std::domain_error("Invalid values");
        }
        if ((a == b) && (b == c)) {
            return flavor::equilateral;
        }
        if ((a == b) || (b == c) || (c == a)) {
            return flavor::isosceles;
        }
        return flavor::scalene;
    }

}  // namespace triangle
