class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector <int> ans;
        unordered_set<int> set;
        int n = grid.size();
        int a,b;
        int expectedsum=0,actualsum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                 actualsum= actualsum+grid[i][j];
                if(set.find(grid[i][j])!= set.end())
                {
                    a=grid[i][j];
                    ans.push_back(a);
                }
                set.insert(grid[i][j]);
            }
        }
        expectedsum = (n*n)*(n*n+1)/2;
        b = expectedsum + a - actualsum;
        ans.push_back(b);
        return ans;


    }
};