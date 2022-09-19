class Solution {
public:
    vector<int> intersect(vector<int>& v1, vector<int>& v2) {
        int n = v1.size();
        int m = v2.size();
        multiset<int> ms;
        for(int i = 0;i<n;i++){
            int k = v1[i];
            ms.insert(k);
        }
        vector<int> v;
        for(int i = 0;i<m;i++){
            int k = v2[i];
            int cnt = ms.count(k);
            if(cnt >= 1){
                v.push_back(k);
                ms.erase(ms.find(k));
            }
        }
        return v;
    }
};