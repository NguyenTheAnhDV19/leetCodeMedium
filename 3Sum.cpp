class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        std::vector<int> v;
        int compare;
        for(int i=0;i<nums.size();i++)
        {
            for(int j =i+1;j<nums.size();j++)
            {
                 for(int k=0;k<nums.size();k++)
                 {
                     compare= nums[i]* nums[j]*nums[k];
                     if(nums[i]+ nums[j] == nums[k]*-1)
                        if(i!=j&& i!=k && j!= k)
                             if (!std::count(v.begin(), v.end(), compare))
                            {
                                std::cout<<nums[i]<<nums[j]<<nums[k]<<std::endl;
                                result.push_back({nums[i],nums[j],nums[k]});
                                v.push_back(compare);
                                break;
                            }
                 }
            }
        }
        return result;
    }
};

int main(){
    Solution* solution = new Solution;
    std::vector<int> vect = {-1,0,1,2,-1,-4};
    solution->threeSum(vect);
    return 0;
}
