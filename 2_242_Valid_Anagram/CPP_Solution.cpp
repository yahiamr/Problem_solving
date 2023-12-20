#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <unordered_map>
#include <string>
#include <iostream>
#include "catch.hpp"
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
         bool ret = false;
        if(s.size() != t.size())
        return false;
        unordered_map<char,int> table;
        for(char c :s){
            table[c]++;
        }
        for (char c : t){
            if (table.find(c)== table.end()|| --table[c] < 0)
            return false;
        }
        return true;
    }
};

TEST_CASE("Anagram Detection") {
    Solution sol;

    SECTION("Anagrams") {
        REQUIRE(sol.isAnagram("listen", "silent") == true);
        REQUIRE(sol.isAnagram("triangle", "integral") == true);
    }

    SECTION("Not Anagrams") {
        REQUIRE(sol.isAnagram("hello", "world") == false);
        REQUIRE(sol.isAnagram("apple", "orange") == false);
    }

    SECTION("Different Lengths") {
        REQUIRE(sol.isAnagram("abc", "abcd") == false);
    }
}