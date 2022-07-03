class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.size()-1;
        int n2=num2.size()-1;
        int c=0;
        string ans="";
        while(n1>=0 or n2>=0 or c)
        {
            int sum=0;
            if(n1>=0) {sum+=num1[n1]-'0'; n1--;}
            if(n2>=0) { sum+=num2[n2]-'0'; n2--;}
            sum+=c;
            c=sum/10;
            sum=sum%10;
            ans=ans+to_string(sum);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};