#include <string>
#include <unordered_set>
#include <iostream>
#include <algorithm>

std::string disemvowel(std::string str) {
    std::unordered_set<char> vowels {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    str.erase(std::remove_if(str.begin(), str.end(), [&](char c) {
        return vowels.find(c) != vowels.end();
    }), str.end());
    return str;
}
