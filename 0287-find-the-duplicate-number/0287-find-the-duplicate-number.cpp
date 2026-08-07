class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int a;
        int n = nums.size();
        for(int i = 0;i<n+1;i++)
        {
           if(s.find(nums[i])!= s.end())
           {
           a = nums[i];
            break;
           }
           s.insert(nums[i]);
        }
        return a;
    }
};