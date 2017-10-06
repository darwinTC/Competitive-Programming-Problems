class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> count(256,0);
        int tail=0, head=1;
        if(s.size()<=1) return s.size();
        
        int mx=1;
        count[s[tail]]++;
        for(head=1; head<s.size(); head++)
        {
            if(count[s[head]]>=1)
            {
                while(tail<head && count[s[head]]!=0){
                    count[s[tail++]]--;
                }
            }
            count[s[head]]++;
            mx=max(mx, head-tail+1);
        }
        return mx;
    }
};
