class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();
         if(n==1) 
        return A[0];
        int st =0;
        int end= n-1;
        int mid;
       
        while(st<=end)
        {
            mid = st + (end-st)/2;
            if(mid == 0 &&  A[mid] != A[mid+1])
                return A[mid];
            if(mid == n-1 &&  A[mid] != A[mid-1])
                return A[mid];
                   
            if(A[mid-1]!=A[mid] && A[mid]!=A[mid+1])
                return A[mid];
            if(mid % 2 == 0)// even number of elements each sid of mid
           {
             if(A[mid-1]==A[mid])
               end = mid-1; 
            else 
               st = mid+1;
           }
           else  // odd numbers of elements each  side of mid 
           {
            if(A[mid-1]==A[mid])
               st = mid+1;
            else 
               end = mid-1;
           }
        }
        return -1;
        
    }
};