class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        int m1 = INT_MIN;
        int m2 = INT_MIN;
        int c1 = 0;
        int c2 = 0;
        // Boyer Moore Algorithm
        for(int i=0;i<n;i++)
        {
           if(m1 == nums[i])
           {
              c1++;
           }
           else if(m2 == nums[i])
           {
              c2++;
           }
           else if(c1 == 0)
           {
              m1 = nums[i];
              c1++;
           }
           else if(c2 == 0)
           {
              m2 = nums[i];
              c2++;
           }
           else{
              c1--;
              c2--;
           }
        }

        // verification is important

        c1 = 0;
        c2 = 0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == m1) c1++;
            else if(nums[i] == m2) c2++;
        }

        if(c1 > (n/3)) ans.push_back(m1);
        if(c2 > (n/3)) ans.push_back(m2);
        return ans;
    }
};
