class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        // vector<int> ans(n);
        int n = nums.size();
         vector<int> ans(n);
        for(int i= 2*n-1;i>=0;i--){
            while(!st.empty()&& st.top()<=nums[i%n]) st.pop();
            if(i<n) ans[i%n]=st.empty() ? -1 : st.top();
            // else if(st.top()=m[nums[i]]);
            st.push(nums[i%n]);
        }
        // vector<int> ans;
        // for(int i=0;i<n;i++){
        //     ans.push_back(nums[i]);
        // }
        return ans;
    }
};