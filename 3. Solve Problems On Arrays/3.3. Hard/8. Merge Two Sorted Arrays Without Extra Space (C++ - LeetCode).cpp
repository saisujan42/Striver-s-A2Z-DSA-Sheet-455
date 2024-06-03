// Approach 1 : Append 2 Arrays & Sort TC : O((N+M)Log(N+M) + N + M) SC : O(N + M)


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        for(int i=m, j=0; i<m+n; i++, j++)
            nums1[i] = nums2[j];
        sort(nums1.begin(), nums1.end());
    }
};



// Approach 2 : 2 Pointer TC : O(N + M) SC : O(1)


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int Ptr1 = m - 1, Ptr2 = n - 1, Ptr = m + n - 1;
        while(Ptr1 >= 0 && Ptr2 >= 0)
        {
            if(nums1[Ptr1] >= nums2[Ptr2])
            {
                nums1[Ptr] = nums1[Ptr1];
                Ptr1--, Ptr--;
            }
            else if(nums1[Ptr1] < nums2[Ptr2])
            {
                nums1[Ptr] = nums2[Ptr2];
                Ptr2--, Ptr--;
            }
        }
        while(Ptr1 >= 0)
        {
            nums1[Ptr] = nums1[Ptr1];
            Ptr1--, Ptr--;
        }
        while(Ptr2 >= 0)
        {
            nums1[Ptr] = nums2[Ptr2];
            Ptr2--, Ptr--;
        }
    }
};