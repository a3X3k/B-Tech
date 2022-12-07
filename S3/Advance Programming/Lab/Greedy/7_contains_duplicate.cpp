class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) 
    {
        multimap <int,int> map;

        for(int i=0;i<nums.size();i++)
        {
            map.insert(pair< int, int >(nums[i], i));
        }
        
        multimap <int,int>::iterator it;
        multimap <int,int>::iterator nxt;
        
        for(it=map.begin();it!=map.end();it++)
        {
            nxt = it;
            while(true)
            {
                nxt++;

                if(nxt == map.end()) 
                    break;
                long long a = (*it).first;
                long long b = (*nxt).first;
                
                if(abs(a-b) <= t)  
                {
                    if(abs((*it).second - (*nxt).second) <= k)
                    {
                        return true;
                    }
                }
                else break;
            }
        }            
        return false;
    }
    
};