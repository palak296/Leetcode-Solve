class Solution {
public:
long long getDescentPeriods(vector<int>& p) {
    vector<int>temp(p.size(),1);
    for(int i=1;i<p.size();i++)
    {
        if(p[i]+1==p[i-1])
        temp[i]=temp[i-1]+1;
    }
    
    long long sum=0;
    for(int i=0;i<temp.size();i++)
        sum+=temp[i];
    
    return sum;     
}
};