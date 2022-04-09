#include "pangram.h"
#include <bits/stdc++.h>

using namespace std;

namespace pangram {

    bool is_pangram(string str) {
        set<char> charSet;
        for (string::size_type i = 0; i < str.length(); i++) {
            if ((str[i] >= 'a') && (str[i] <= 'z')) {
                charSet.insert(str[i]);
            }
            else if ((str[i] >= 'A') && (str[i] <= 'Z')) {
                charSet.insert(str[i] + 32);
            }
        }
        return charSet.size() == 26;
    }

}  // namespace pangram
