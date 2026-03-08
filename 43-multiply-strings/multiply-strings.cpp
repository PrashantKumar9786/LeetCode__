class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0")
        return "0";

        int n = num1.size()-1;
        int m = num2.size()-1;
         
        vector<int>res(n+m+2, 0);

        for(int i = n; i>=0; i--){
            for(int j = m; j>=0; j--){

                int prod = (num1[i] - '0') * (num2[j] - '0');
                int sum = prod + res[i+j+1];

                res[i+j+1] = sum % 10;
                res[i+j] += sum/10;

            }
        }

        string ans = "";
        for(auto it: res){
            if(!(ans.empty() && it == 0))
            ans += to_string(it);
        }
        return ans;
    }
};