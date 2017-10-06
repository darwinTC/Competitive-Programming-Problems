class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() <=1) return s;
        int mx=0;
        
        int mid,head, tail;
        string ans="";
        for(mid=0; mid<s.size(); mid++)
        {
            head=mid;
            tail=mid;
            bool flag=false;
            while(tail>=0 && head<s.size() && s[head]==s[tail])
            {
                flag=true;
                head++;
                tail--;
            }
            // ssasbsssa
            //   * * *
            head=flag?head-1:head;
            tail=flag?tail+1:tail;
            
            if(mx<head-tail+1){
                mx=head-tail+1;
                ans=s.substr(tail,head-tail+1);
            }
            head=mid;
            tail=head+1;
            flag=false;
            while(tail>=0 && head<s.size() && s[head]==s[tail])
            {
                flag=true;
                head++;
                tail--;
            }
            head=flag?head-1:head;
            tail=flag?tail+1:tail;
            
            if(mx<head-tail+1){
                mx=head-tail+1;
                ans=s.substr(tail,head-tail+1);
            }
            
            
        }
        return ans;
    }
};
