class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m-1; //last elem of m, just before n number of 0s
        int p2 = n-1; //last elem of n
        int p = m+n-1; //merged array pointer
        while (p1>=0 && p2>=0) //not out of bounds
        {
            if (nums1[p1]<=nums2[p2])
            {
                nums1[p]=nums2[p2];
                p2--; //num2 greater so we now check against another elem 
            }
            else 
            {
                nums1[p]=nums1[p1];
                p1--; //num21 greater so we now check against another elem
            }
            p--;    
        }
        while (p2>=0) //leftover num2 elements (copy and finish)
        {
            nums1[p]=nums2[p2];
            p--;
            p2--;
        }
    }
};
