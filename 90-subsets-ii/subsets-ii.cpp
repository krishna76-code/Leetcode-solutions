class Solution {
public:
void findSubset(int ind,vector<int>&nums,vector<vector<int>>&res,vector<int>&subset){
     
        res.push_back(subset);
    
     for(int i=ind;i<nums.size();i++){
        if(i>ind && nums[i]==nums[i-1]) continue;
        subset.push_back(nums[i]);
        findSubset(i+1,nums,res,subset);
        subset.pop_back();
     }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> subset;
        findSubset(0,nums,res,subset);
        return res;
    }
};