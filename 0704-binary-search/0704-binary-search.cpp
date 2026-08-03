class Solution {
public:
    int search(vector<int>& nums, int wanted) { 
        int beg=0;
        int mid;
        int end=nums.size()-1;
        while(beg<=end)
        {
            mid = beg + (end-beg)/2;
            if(wanted==nums[mid])
            return mid;
            if(wanted<nums[mid])
            end = mid-1;
            if(wanted>nums[mid])
            beg = mid+1;
        }
        return -1;
        
    }
};