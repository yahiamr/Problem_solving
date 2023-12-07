#include <set>
#include <vector>
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

int main(){
    Solution sol;
    vector<int> test1 = {1,2,3,1};
    vector<int> test2 = {1,2,3,4};
    vector<int> test3 = {1,1,1,3,3,4,3,2,4,2};
    sol.containsDuplicate(test1);
    return 0;
}