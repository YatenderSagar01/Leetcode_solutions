class Solution {
public:
    int countCommas(int n) {
        if(n<999){
            return 0;
        }
        int x = 1000;
        int count =0;
        while(x<=n){
            count+=1;
            x++;
        }
        return count;
        
    }
};