class Solution {
public:
    void sortColors(vector<int>& nums) {
        int j = nums.size() - 1;
        int i = 0;
        int mid = 0;

        while(mid <= j)
        {
            if(nums[mid] == 0)
            {
                swap(nums[i++],nums[mid++]);
            }
            else if(nums[mid] == 1)
            {
                mid++;
            }
            else{
                swap(nums[mid],nums[j--]);
            }
        }
    }
};
