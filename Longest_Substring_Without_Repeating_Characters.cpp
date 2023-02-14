class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::string temp = s;
        int result =1;
        for(int i=0;i<s.size();i++){
            int temp_count =0;
            for(int j=1;j<=temp.size();j++){
                temp_count++;
                if(temp[j] == s[i]){
                    if(temp_count >result){
                        std::cout<<temp.substr(0,j)<<std::endl;
                        result = temp_count++;
                        temp = temp.substr(j,temp.size());
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
    std::cout<<solution->lengthOfLongestSubstring("pwwkew");
    return 0;
}
