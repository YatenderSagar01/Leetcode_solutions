class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0, digit =0,prod=1;
        int temp =n;
        while(temp>0){
            digit = temp%10;
            sum+=digit;
            prod*=digit;
            temp/=10;
        }
        int t_sum = sum+prod;
        if(n%t_sum==0){
            return true;
        }
        return false;
    }
};