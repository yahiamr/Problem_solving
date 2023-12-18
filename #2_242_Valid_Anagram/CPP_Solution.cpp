#include <unordered_map>
#include <string>

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

    return 0;
}