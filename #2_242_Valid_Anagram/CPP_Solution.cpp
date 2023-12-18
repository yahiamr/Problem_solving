#include <unordered_map>
#include <string>
#include <iostream>

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


int main(){
    Solution sol;
    std::string s = "listen";
    std::string t = "silent";

    if (sol.isAnagram(s, t)) {
        std::cout << "The strings are anagrams." << std::endl;
    } else {
        std::cout << "The strings are not anagrams." << std::endl;
    }

    return 0;
}