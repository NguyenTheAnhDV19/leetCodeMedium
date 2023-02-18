class Solution {
public:
    std::vector<std::string> ans;
    std::map<char,std::string> keys {
        {'2',"abc"},{'3',"def"},
        {'4',"ghi" },{'5',"jkl" },{'6',"mno" },
        {'7',"pqrs"},{'8',"tuv" },{'9',"wxyz" }
    };

    void backTrack(std::string& digits,int pos,std::string &temp);
    std::vector<std::string> letterCombinations(std::string digits) {
        std::string temp;
        backTrack(digits,0,temp);
        for(auto str: ans ) std::cout<<str<<std::endl;
        return ans;
    }
};


void Solution::backTrack(std::string& digits,int pos,std::string &temp)
{

    if(pos==digits.size()) ans.push_back(temp);

    for(auto letter: keys[digits[pos]])
    {
        temp.push_back(letter);
        backTrack(digits,pos+1,temp);
        temp.pop_back();
    }
}

int main(){
    Solution* solution = new Solution;
    std::vector<int> vect = {-1,2,1,-4};
    solution->letterCombinations("23");
    return 0;
}
