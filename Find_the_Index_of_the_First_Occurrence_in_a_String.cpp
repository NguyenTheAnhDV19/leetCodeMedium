class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        std::vector<int> store(haystack.size(),-2);
        int count = needle.size()-1;

        for(int i=0;i<needle.size();i++)
        {
            for(int j=0;j<haystack.size();j++)
            {
                if(needle[i] == haystack[j])
                    store[j] = i;
            }
        }

        for(int i=0;i<store.size()-1;i++)
        {
            if(store[i+1] == store[i]+1) count -=1;
            else count = needle.size()-1;

            if(!count) return i+1 - (needle.size()-1);

        }

        return -1;
    }
};

int main(){
    Solution* solution = new Solution;
    std::vector<int> vect = {-1,2,1,-4};
    std::cout<<solution->strStr("sadbutsad","ad");
    return 0;
}
