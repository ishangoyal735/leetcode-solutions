class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int l,r,area=0,maxwater=0;
        int n= height.size();
        l=0;
        r=n-1;
        while(l<r)
        {
           int wid= r-l;
           int len=min(height[l],height[r]);
            area = len * wid;
            maxwater = max(maxwater , area);
          if(height[l]<height[r])
          l++;
          else 
          r--;
        }
        return maxwater ;
    }
};