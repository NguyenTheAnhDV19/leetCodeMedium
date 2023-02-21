class Solution {
public:
    std::vector<std::string> store;
    std::string backTrack(int index, int n,std::string temp)
    {
        int count =1;
        std::string newString;
        char chaTemp = temp[0];
        for(int i=1;i<temp.size();i++)
        {
            if(chaTemp == temp[i]) count +=1;
            else {
                newString += (std::to_string(count) + temp[i-1]);
                chaTemp = temp[i];
                count =1;
            }
            if(i == temp.size()-1) newString += (std::to_string(count) + temp[i]);
        }
        store.push_back(newString);
        if(index <n-1) backTrack(index+1,n,newString);
    }

    std::string countAndSay(int n) {
        store.push_back("1");
        store.push_back("11");
        backTrack(2,n,"11");
        return store[n-1];
    }

};

int main(){
    Solution* solution = new Solution;
    std::vector<int> vect = {5,7,7,8,8,10};
    std::cout<<solution->countAndSay(4);
    return 0;
}
