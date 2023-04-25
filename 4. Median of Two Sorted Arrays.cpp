/*
LeetCode
*/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp;
        int n = nums1.size();
        int m = nums2.size();

        for (int i = 0; i < n; i++){
            temp.push_back(nums1[i]);
        }
        for (int j = 0; j < m; j++){
            temp.push_back(nums2[j]);
        }
        sort(temp.begin(), temp.end());
        int mid = (n + m) / 2;
        if ((n + m) % 2 == 0){
            return (((double)temp[mid - 1] + (double)temp[mid])/2);
        }
        else{
            return temp[mid];
        }
    }
};
