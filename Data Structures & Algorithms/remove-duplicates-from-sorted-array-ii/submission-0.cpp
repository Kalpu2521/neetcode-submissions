class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=2;
        int j=2;
        while(i<nums.size()){
            if(nums[i]==nums[j-2]){
                i++;
            }
            else{
                nums[j]=nums[i];
                i++;
                j++;
            }
        }
        return j;
    }
};