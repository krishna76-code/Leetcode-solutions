class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int maxIndex=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[maxIndex]){
                maxIndex=i;
            }
        }
        long long sum1=0;
        long long sum2=0;
        for(int i=0;i<maxIndex;i++){
            sum1=sum1+nums[i];
        }
        for(int i=maxIndex+1;i<nums.size();i++){
            sum2=sum2+nums[i];
        }
        if(sum1>sum2) return 0;
        else if(sum2>sum1) return 1;
        else return -1;
    }
};