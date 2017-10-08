class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool flag=true;
        if(nums.size()<=1) return true;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]<nums[i-1])
                if(flag){
                    flag=false;
                    if(i-1!=0)
                    {
                        if(i-2>=0 && nums[i-2]<=nums[i])
                            nums[i-1]=nums[i-2];
                        else nums[i]=nums[i-1];
                    
                    }
                }
                else return false;
        }
        return true;
    }
};
