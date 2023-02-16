class Solution {
public:
    int myAtoi(std::string s) {
        int result=0;
        int index =0;
        char neg_pos;
        if(s[0] =='-'|| s[0] =='+' )
        {
            neg_pos = s[0];
            index =1;
        }
        for(index;index<s.size();index++){
            int recent = int(s[index])-48;
            if(recent >9 || recent<0)
            {
                if(neg_pos == '-') result*-1;
                if(result > INT_MAX) return INT_MAX;
                if(result <INT_MIN) return INT_MIN;
                return result;
            }
            result = result*10 + recent;
        }
    }
};

int main(){
    Solution* solution = new Solution;
    std::cout<<solution->myAtoi("-0010...");
    return 0;
}
