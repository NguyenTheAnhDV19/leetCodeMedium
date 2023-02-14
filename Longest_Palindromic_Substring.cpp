class Solution {
public:
    std::string longestPalindrome(std::string s) {
        std::string s_res, result, temp_result;
        s_res = s;
        reverse(s_res.begin(), s_res.end());
        for(int i=0;i<s.size();i++){
            if(s[i] == s_res[i]){
                temp_result.push_back(s[i]);
            }else{
                if(temp_result.size()>result.size()) result = temp_result;
                temp_result ="";
            }
        }
        return result;
    }
};
int main(){
    Solution* solution = new Solution;
    std::cout<<solution->longestPalindrome("cbbd");
    return 0;
}
