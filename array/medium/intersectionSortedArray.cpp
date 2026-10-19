class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> interAns;
        int i = 0, j = 0;
        while(i < n1 && j < n2){
            if(nums1[i] == nums2[j]){
                interAns.push_back(nums1[i]);
                i++;
                j++;
            }else if(nums1[i] < nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return interAns;
    }
};
