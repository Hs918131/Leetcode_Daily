class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        if(k==0) return "";
        unordered_map<string,int>m;
        vector<string>dis;
        for(int i =0;i<arr.size();i++) m[arr[i]]++;
        for(int i=0;i<arr.size();i++){
            if(m[arr[i]]==1) dis.push_back(arr[i]);
        }
        if(k>dis.size()) return "";
        return dis[k-1];
    }
};


//2nd Approach

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        for(string s: arr) {
            mp[s]++;
        }
        for(string s: arr) {
            if(mp[s] == 1) {
                if(k == 1) return s;
                k--;
            }
        }
        return "";
    }
};
