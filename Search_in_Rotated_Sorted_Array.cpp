class Solution {
public:
    int _search(std::vector<int>& nums, int target) {
        if(target == nums[0] -1) return -1;
        if(target>nums[0])
        {
            if(nums[target-nums[0]] == target) return target - nums[0];
        }
        return nums.size()-1 -(nums[0] -2 - target);

    }
};

int main(){
    Solution* solution = new Solution;
    std::vector<int> vect = {4,5,6,7,0,1,2};
    std::cout<<solution->_search(vect,0);
    return 0;
}
