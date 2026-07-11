class Solution {
public:
// helper function
int atMost(vector<int>&nums,int K){
    unordered_map<int,int>freq;
    int left=0;
    int count=0;
    for(int right=0;right<nums.size();right++){
        if(freq[nums[right]]==0) K--;
        freq[nums[right]]++;
        while(K<0){
            freq[nums[left]]--;
            if(freq[nums[left]]==0) K++;
            left++;
        }
        count+=(right-left+1);
    }
    return count;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};