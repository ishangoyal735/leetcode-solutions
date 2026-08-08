class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {

        vector<int> res;
        int i = 0;
        int j = 0;
        while (i < m && j < n) {
            if (a[i] < b[j]) {
                res.push_back(a[i]);
                i++;
            } else {
                res.push_back(b[j]);
                j++;
            }
        }
        if (i < m)
            for (int k = i; k < m; k++)
                res.push_back(a[k]);
        else
            for (int k = j; k < n; k++)
                res.push_back(b[k]);
                      a.clear(); 
    for(auto val:res)
    {
        a.push_back(val);
    }
    }
      
};