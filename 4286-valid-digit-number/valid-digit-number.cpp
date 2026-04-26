class Solution {
public:
    bool validDigit(int n, int x) {
      string s=to_string(n);
      char target=x+'0';
      if(s[0]==target) return false;
      for(int i=0;i<s.length();i++){
        if(s[i]==target){
            return true;
        }
      }
      return false;  
    }
};