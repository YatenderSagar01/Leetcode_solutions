class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        set<vector<int>>s;

        for(int i=0;i<digits.size();i++){
            for(int j=0;j<digits.size();j++){
                for(int k=0;k<digits.size();k++){
                    if(i==j || j==k || i==k){
                        continue;
                    }
                    if(digits[i]==0){
                        continue;
                    }
                    vector<int> num = {digits[i],digits[j],digits[k]};
                    s.insert(num);
                }
            }
        }
        int count =0;
        for(auto a:s){
            if(a[2]%2==0){
                count++;
            }
        } 
        return count;    
    }

};