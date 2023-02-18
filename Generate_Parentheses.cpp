class Solution {

public:
    std::vector<std::vector<std::string>> store;
    void backTrack(int pos, int n);
    std::vector<std::string> temp;

    std::vector<std::string> generateParenthesis(int n) {

        temp.push_back("()");
        store.push_back(temp);
        temp.clear();
        backTrack(1,n);
        return store[n-1];
    }
};

void Solution::backTrack(int pos, int n)
    {
    for(int j=0;j<store[pos-1].size();j++)
       {
            temp.push_back(store[0][0]+ store[pos-1][j]);
            temp.push_back("(" +store[pos-1][j] + ")");
       }
        store.push_back(temp);
        temp.clear();
        if(pos-1 != n) backTrack(pos+1,n);
    }

int main(){
    Solution* solution = new Solution;
    solution->generateParenthesis(4);
    return 0;
}
