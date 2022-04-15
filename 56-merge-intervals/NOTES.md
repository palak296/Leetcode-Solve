sort(in.begin(),in.end());
vector<vector<int>>v;
v.push_back(in[0]);
for(int i=1;i<in.size();i++)
{
if(v.back()[1]>=in[i][0]) v.back()[1]=max(v.back()[1],in[i][1]);
else
v.push_back(in[i]);
}
return v;
}