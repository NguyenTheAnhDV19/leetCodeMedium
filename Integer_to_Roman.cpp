class Solution {
public:
    std::string intToRoman(int num) {
        int arr_num[] = {1,5,10,50,100,500,1000};
        char arr_str[] = {'I','V','X','L','C','D','M'};
        std::string result;

        //loop_ to find the index of number greater,lesser than num
        int bigger_index, smaller_index;
        for(int i=0;i<7;i++)
        {
            if( arr_num[i] == num) return result+arr_str[i] ;
            if(arr_num[i] > num)
            {
                bigger_index = i;
                smaller_index = i-1;
                break;
            }
        }
        //loop_ through all the elements inside arr_str that has lesser value

        for(int i= bigger_index;i>=0;i--)
        {
            if(arr_num[bigger_index] - arr_num[i] == num) return result+ arr_str[i] + arr_str[bigger_index];
        }

        for(int i= smaller_index;i>=0;i--)
        {
            if( num- arr_num[i] >= 0)
            {
                num -= arr_num[i];
                return arr_str[i] + intToRoman(num) ;
            }
        }

    }
};

int main(){
    Solution* solution = new Solution;
    std::cout<<solution->intToRoman(59);
    return 0;
}
