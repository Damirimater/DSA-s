#include <string>
#include <unordered_set>
#include <iostream>
#include <algorithm>

std::string disemvowel(std::string str) {
    std::unordered_set<char> vowels {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'O', 'I', 'O', 'U'};
    for (auto c : str) {
        if (vowels.find(c) != vowels.end()) {
            str.erase(std::find(str.begin(), str.end(), c));
        }
    }
    return str;
}
