class Solution {
public:
    int threeSumClosest(std::vector<int>& nums, int target) {
        int result = nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    int temp = nums[i]+nums[j]+nums[k];
                    if(result > std::abs(temp)) result = std::abs(temp);
                }
            }
        }
        return result;
    }
};

int main(){
    Solution* solution = new Solution;
    std::vector<int> vect = {-1,2,1,-4};
    std::cout<<solution->threeSumClosest(vect,1);
    return 0;
}
