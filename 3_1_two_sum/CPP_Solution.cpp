#define CATCH_CONFIG_MAIN 
#include <vector>
#include <unordered_map>
using namespace std;
#include "catch.hpp"

class Solution {
public:
 vector<int> twoSum(vector<int>& nums, int target) {
        int i, index_val;
        vector<int> ret;
        unordered_multimap<int,int> lst_map;
        
    
        for(i= 0;i<nums.size();i++){
            lst_map.insert(make_pair(nums[i],i));
        }

for (auto x : lst_map)
        for(i= 0;i<nums.size();i++){
        auto index = lst_map.find(target-nums[i]);

            if (index != lst_map.end()&& index->second != i){
            
                 index_val = index->second;
                ret.push_back(i);
                ret.push_back(index_val);
                
                return ret; 
            }
        }
    return ret;
    }
};


// Test cases
TEST_CASE("Two Sum Problem") {
    Solution solution;

    SECTION("Test Case 1") {
        vector<int> nums = {2, 7, 11, 15};
        int target = 9;
        vector<int> expected = {0, 1};
        REQUIRE(solution.twoSum(nums, target) == expected);
    }

    SECTION("Test Case 2") {
        vector<int> nums = {3, 2, 4};
        int target = 6;
        vector<int> expected = {1, 2};
        REQUIRE(solution.twoSum(nums, target) == expected);
    }

    SECTION("Test Case 3") {
        vector<int> nums = {3, 3};
        int target = 6;
        vector<int> expected = {1, 0};
        REQUIRE(solution.twoSum(nums, target) == expected);
    }
}