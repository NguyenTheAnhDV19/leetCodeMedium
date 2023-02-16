class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int result=0;
        int area =0;
        for(int i=0;i<height.size();i++)
        {
            for(int j=i+1;j<height.size();j++)
            {
                if(height[i] < height[j])
                {
                    area = height[i]*(j-i);
                }else{
                    area = height[j]*(j-i);
                }
                if(area>result) result = area;
            }
        }
        return result;
    }
};

int main(){
    Solution* solution = new Solution;
    std::vector<int> height = {1,8,6,2,5,4,8,3,7};
    std::cout<<solution->maxArea(height);
    return 0;
}
