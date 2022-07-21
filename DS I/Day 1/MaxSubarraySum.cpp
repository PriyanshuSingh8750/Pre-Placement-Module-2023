class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int maxsumSofar=nums[0];
       int maxsumEndingHere=nums[0];
        for(int i=1;i<nums.size();i++){
            maxsumEndingHere=max(maxsumEndingHere+nums[i],nums[i]);
            if(maxsumSofar<maxsumEndingHere){
                maxsumSofar=maxsumEndingHere;
            }
        }
        return maxsumSofar;
    }
};