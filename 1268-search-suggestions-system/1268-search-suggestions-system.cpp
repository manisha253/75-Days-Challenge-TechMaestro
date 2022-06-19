class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string> &products,
                                             string searchWord) 
    {
        sort(products.begin(), products.end());
        vector<vector<string>> result;
        int start, bsStart = 0, n=products.size();
        string pref;
        for (char &c : searchWord) {
            pref += c;
            start = lower_bound(products.begin() + bsStart, products.end(), pref) - products.begin();

     
            result.push_back({});

            for (int i = start; i < min(start + 3, n) && !products[i].compare(0, pref.length(), pref); i++)
                result.back().push_back(products[i]);

           
            bsStart = start;
        }
        return result;
    }
};