class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int small = 0, count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < target){
                small++;
            }
            else if(nums[i] == target){
                count++;
            }
        }
        vector<int> v;
        int j = small;
        while(count --){
            v.push_back(j);
            j++;
        }
        return v;
    }
};