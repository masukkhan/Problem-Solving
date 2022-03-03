class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        unordered_map<int, int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int value1=nums[i];
            int value2=target-value1;
            if(mp.find(value2)!=mp.end())
            {
                result.push_back(i);
                result.push_back(mp[value2]);
                break;
            }
            mp[value1]=i;
        }
        return result;
    }
};
