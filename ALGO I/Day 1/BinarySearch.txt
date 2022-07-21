class Solution {
    
    
public:
    
    int searchh(vector<int> arr,int start,int end,int target){
        if(start>end){
            return -1;
        }
        int mid=(start+end)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(target<arr[mid]){
            return searchh(arr,start,mid-1,target);
        }
        else{
            return searchh(arr,mid+1,end,target);
        }
    }
    int search(vector<int>& nums, int target) {
        int end =nums.size()-1;
        int start=0;
        return searchh(nums,start,end,target);
        
    }
};