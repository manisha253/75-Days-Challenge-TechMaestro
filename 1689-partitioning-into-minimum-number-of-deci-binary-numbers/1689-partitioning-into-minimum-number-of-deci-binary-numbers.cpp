class Solution {
public:
    int minPartitions(string n) {
        int maxi= 0;
        for(auto i : n) 
        {
            int digit = i - '0';
            maxi = max(maxi, digit);
        }
        return maxi;
    }
};