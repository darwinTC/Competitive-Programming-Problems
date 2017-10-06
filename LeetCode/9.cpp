class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0 && x<10) return true;
        if(x<0 || x%10==0) return false;
        int new_number=0;
        while(x>new_number)
        {
            new_number=new_number*10+x%10;
            x=x/10;
        }
        if(x==new_number || x==new_number/10) return true;
        return false;
    }
};
