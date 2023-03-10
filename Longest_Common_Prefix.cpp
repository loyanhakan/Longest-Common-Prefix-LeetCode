using namespace std;
class Solution 
{
  public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        sort(strs.begin(), strs.end());
        int a=(strs.size()-1);
        string n=strs[0];
        string ans="";
        for(int i=0; i<n.size(); i++)
        {
            if(n.at(i)==strs[a].at(i))
            {ans+=n.at(i);}
            else break;
        }
        return ans;
    }
};      
