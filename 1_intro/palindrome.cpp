#include <iostream>
#include <algorithm>
#include <vector>

bool isPalindrome(const std::string &text)
{
    return std::equal(text.begin(), text.begin() + text.size() / 2, text.rbegin());
}

int main()
{
    const std::vector<std::string> strs {"Ala ma kota", "ala", "kajak", "neveroddoreven", "abacada"};

    for (const auto &str : strs)
    {
        std::cout << str << (isPalindrome(str) ? " is " : " is NOT ") << "a Palindrome" << '\n';
    }

    return 0;
}