class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        int c_i = -1;

        // pehle candidate ko dhundoo
        for(int i = n-1 ; i > 0 ; i--)
        {
            if(nums[i-1] < nums[i])
            {
                c_i  = i-1;
                break;
            }
        }

        if(c_i == -1)
        {
            reverse(nums.begin(),nums.end());
            
        }
        else{
            int s_i = c_i;

            for(int i = n-1 ; i > c_i ; i--)
            {
                if(nums[i] > nums[c_i])
                {
                    s_i = i;
                    break;
                }
            }

            swap(nums[s_i],nums[c_i]);

            reverse(nums.begin()+c_i+1 , nums.end());
        }
    }
};
