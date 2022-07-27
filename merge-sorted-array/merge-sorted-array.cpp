class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //merge array into nums1
        for (int i = 0; i < n; i++) {
            nums1[i + m] = nums2[i];
        }
        //sort nums1 array
        sort(nums1.begin(), nums1.end());
    }
};