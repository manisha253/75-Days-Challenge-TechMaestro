class TimeMap {
private:
    unordered_map<string, vector<pair<string, int>>> map;
    string searchVal(vector<pair<string, int>> &v, const int &timestamp) 
    {
        int n=v.size();
        int s = 0;
        int e = n - 1;
        
        while (s <= e) 
        {
            int mid = s + (e - s) / 2;
            
            if (v[mid].second > timestamp) 
            {
                e = mid - 1;
            }
            else if (v[mid].second < timestamp)
            {
                s = mid + 1;
            } 
            else 
            {
                return v[mid].first;
            }
        }
        
        return e >= 0 ? v[e].first : "";
    }
public:
    TimeMap()
    {
        
    }
    
    void set(string key, string value, int timestamp) 
    {
        map[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) 
    {
        if (map.find(key) == map.end()) 
        {
            return "";
        }
        return searchVal(map[key], timestamp);
    }
};