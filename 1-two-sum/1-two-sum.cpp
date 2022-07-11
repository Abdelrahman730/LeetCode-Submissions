#include <map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        std::map<int,int> dic;
        for (size_t i = 0 ; i < nums.size() ;i++)
        {
            dic[target-nums[i]] = i;
        }
        
        for (int i = 0 ; i < nums.size() ;i++)
        {
            if (dic[nums[i]] and i != dic[nums[i]])
            {
                return {i,dic[nums[i]] };
            }
        }
        return {0,1};
    }
};