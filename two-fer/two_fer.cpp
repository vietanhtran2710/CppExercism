#include "two_fer.h"
#include <string>

using namespace std;

namespace two_fer
{
    string two_fer() {
        return "One for you, one for me.";
    }

    string two_fer(string name) {
        return "One for " + name + ", one for me.";
    }
} // namespace two_fer

