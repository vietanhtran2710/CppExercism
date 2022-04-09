#include "reverse_string.h"
#include <string>

using namespace std;

namespace reverse_string {

    string reverse_string(string str) {
        std::string result = "";
        for (int i = str.length() - 1; i >= 0; i--) {
            result += str[i];
        }
        return result;
    }

}  // namespace reverse_string
