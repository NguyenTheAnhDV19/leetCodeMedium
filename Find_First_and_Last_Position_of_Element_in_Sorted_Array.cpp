class Solution {
public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        int size_ = nums.size();
        int first,last;
        for(int i=0;i<size_;i++)
        {
            if(nums[i]== target)
            {
                first = i;
                break;
            }

        }

        for(int i=size_-1;i>=0;i--)
        {
            if(nums[i] == target)
            {
                last = i;
                break;
            }
        }
        std::cout<<first<<std::endl;
        std::cout<<last<<std::endl;
        return {first,last};
    }
};

int main(){
    Solution* solution = new Solution;
    std::vector<int> vect = {5,7,7,8,8,10};
    solution->searchRange(vect,8);
    return 0;
}
