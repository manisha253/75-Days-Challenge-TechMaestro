class Solution {
public:
    int lastStoneWeight(vector<int>& stones)
    {
        while(stones.size()>=2)
        {
            sort(stones.begin(),stones.end());
            int x=stones[stones.size()-1];
            int y=stones[stones.size()-2];
            stones.pop_back();
            stones.pop_back();
            if(x!=y)
                stones.push_back(abs(x-y));
        }
        return stones.size() ? stones[0] : 0;
    }
};
