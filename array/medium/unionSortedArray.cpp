class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int> unionAns;
        int i = 0, j = 0;
        while(i < n1 && j < n2){
            if(nums1[i] < nums2[j]){
                if(unionAns.size() == 0 || unionAns.back() != nums1[i]){
                    unionAns.push_back(nums1[i]);
                }
                i++;
            }else {
                if(unionAns.size() == 0 || unionAns.back() != nums2[j]){
                    unionAns.push_back(nums2[j]);
                }
                j++;
            }
        }
        if(i >= n1){
            while(j < n2){
                if(unionAns.size() == 0 || unionAns.back() != nums2[j]){
                    unionAns.push_back(nums2[j]);
                }
                j++;
            }
        }
        if(j >= n2){
             while(i < n1){
            if(unionAns.size() == 0 || unionAns.back() != nums1[i]){
                    unionAns.push_back(nums1[i]);
                }
                i++;
             }
        }
        return unionAns;
    }
};
