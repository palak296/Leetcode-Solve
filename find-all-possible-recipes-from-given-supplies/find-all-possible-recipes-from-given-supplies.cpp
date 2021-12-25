class Solution {
public:
 vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) 
    {
        vector<string>ans;
        unordered_map<string,int> mp;
        for(auto s:supplies)
            mp[s]++;
        while(true)
        {
            int s= mp.size();
        for(int i=0;i<ingredients.size();i++)
        {
            int f=0;
            if(mp.find(recipes[i])==mp.end())
            for(int j=0;j<ingredients[i].size();j++)
            {
                if(mp.find(ingredients[i][j])!=mp.end())
                    f++;
            }
            if(f==ingredients[i].size())
            {
                mp[recipes[i]]++;
            }
           
        }
            //cout<<s<<" "<<mp.size()<<endl;
             if(s==mp.size())
                break;
        }
         for(int i=0;i<ingredients.size();i++)
        {
            int f=0;
            for(int j=0;j<ingredients[i].size();j++)
            {
                if(mp.find(ingredients[i][j])!=mp.end())
                    f++;
            }
            if(f==ingredients[i].size())
            {
                ans.push_back(recipes[i]);
                mp[recipes[i]]++;
            }
           
        }
        return ans;
    
    }
};