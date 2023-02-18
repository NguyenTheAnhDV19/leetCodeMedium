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

        for(int i=0;i<store[n-1].size();i++) std::cout<<store[n-1][i]<<std::endl;

        return store[n-1];
    }
};

void Solution::backTrack(int pos, int n)
    {
        for(int i=0;i<store[0].size();i++)
        {
            for(int j=0;j<store[pos-1].size();j++)
            {
                temp.push_back(store[0][i]+ store[pos-1][j]);
                temp.push_back("(" +store[pos-1][j] + ")");
            }
        }
        store.push_back(temp);
        temp.clear();
        if(pos-1 != n) backTrack(pos+1,n);
    }

int main(){
    Solution* solution = new Solution;
    std::vector<int> vect = {-1,2,1,-4};
    solution->generateParenthesis(4);
    return 0;
}
