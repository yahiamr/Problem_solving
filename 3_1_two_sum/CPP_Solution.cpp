#include <vector>
#include <unordered_map>
using namespace std;


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


int main(){
   

    return 0;
}