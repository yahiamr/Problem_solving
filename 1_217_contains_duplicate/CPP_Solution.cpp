#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <set>
#include <vector>
#include "catch.hpp"
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
   return nums.size() > set<int>(nums.begin(),nums.end()).size();
    }
     /*bool containsDuplicate(vector<int>& nums) {
    std::set<long> st;
    for (size_t num : nums){
        st.insert(num);
    }
    return !(nums.size() == st.size());
    }*/
};

TEST_CASE("Duplicate Detection") {
    Solution sol;

    SECTION("Duplicates Present") {
        std::vector<int> test1 = {1, 2, 3, 1};
        std::vector<int> test3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
        REQUIRE(sol.containsDuplicate(test1) == true);
        REQUIRE(sol.containsDuplicate(test3) == true);
    }

    SECTION("No Duplicates") {
        std::vector<int> test2 = {1, 2, 3, 4};
        REQUIRE(sol.containsDuplicate(test2) == false);
    }
}