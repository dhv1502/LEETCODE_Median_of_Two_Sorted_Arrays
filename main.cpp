class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec1;
        int i=0,j=0,k=0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i]<nums2[j]){
                vec1.push_back(nums1[i++]);
            }
            else{
                vec1.push_back(nums2[j++]);
            }
        }
        if(i<nums1.size()){
            while( i < nums1.size())
                vec1.push_back(nums1[i++]);
        }
        if(j<nums2.size()){
            while(j < nums2.size())
                vec1.push_back(nums2[j++]);
        }
        int tot_size = nums1.size() + nums2.size();
        if(tot_size% 2 == 1 )
            return vec1[tot_size/2];
        else
            return(((vec1[(tot_size/2) - 1])+vec1[(tot_size/2)])/2.0);
    }
};
