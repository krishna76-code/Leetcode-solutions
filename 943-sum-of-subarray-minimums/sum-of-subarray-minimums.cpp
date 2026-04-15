class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
            int n=arr.size();
            vector<int> Nse(n) , Pse(n);
            stack<int> st;
            for(int i=n-1;i>=0;i--){
                while(!st.empty()&& arr[st.top()]>=arr[i]){
                    st.pop();
                }
             Nse[i]=st.empty() ? n : st.top();
                st.push(i);
            }
            while(!st.empty()) st.pop();
            for(int i=0;i<n;i++){
                while(!st.empty()&& arr[st.top()]>arr[i]){
                    st.pop();
                }
                Pse[i]=st.empty() ? -1 : st.top();
                st.push(i);
            }
   long long total=0; 
   int mod = 1e9+7;
   for(int i=0;i<n;i++){
    long long left=i-Pse[i];
    long long right=Nse[i]-i;
   total=(total+ (left*right% mod*arr[i])% mod)%mod;
   }
   return total;
    }
};