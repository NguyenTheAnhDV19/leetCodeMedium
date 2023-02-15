class Solution {
public:
    std::string convert(std::string s, int numRows) {
        std::string result;
        numRows--;
        if(numRows ==0) return s;
        for(int i=0;i<=numRows;i++)
            {
                int temp ;
                if(i != 0) temp = (numRows*2) -(numRows -i)*2;
                else {
                    temp = numRows*2;
                }
                std::string temp_s;
                int count =0; count+=i;
                for(int j=0;j<s.size();j++)
                {
                    if(j == (count+ temp) || j ==count)
                    {
                        count +=temp;
                        temp_s.push_back(s[j]);
                    }
                }
                result += temp_s;
                std::cout<<temp_s<<std::endl;
            }
    return result;
    }
};
int main(){
    Solution* solution = new Solution;
    std::cout<<solution->convert("PAYPALISHIRING",3);
    return 0;
}
