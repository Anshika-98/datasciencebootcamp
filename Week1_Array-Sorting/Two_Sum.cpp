// Problem Statment - https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++){ 
            int temp = target - nums[i];
            if(mp.find(temp) != mp.end()){ 
                ans.push_back(mp[temp]);
                ans.push_back(i);
                break;
            }
            else{
                mp.insert(make_pair(nums[i], i));
            }
        }
        return ans;
    }
};
// O(n)
