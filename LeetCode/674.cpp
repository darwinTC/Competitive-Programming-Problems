class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        int mx=1;
        int aux=nums[0];
        int cont=1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]>aux) cont++;
            else 
            {
                mx=max(mx,cont);
                cont=1;
            }
            aux=nums[i];
        }
        mx=max(mx,cont);
        return mx;
    }
};
