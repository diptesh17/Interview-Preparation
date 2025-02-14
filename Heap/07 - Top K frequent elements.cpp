#include <vector>
#include <map>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for (int x : nums) {
            mp[x]++;
        }

        priority_queue<pair<int, int>> pq;
        for (auto it : mp) {
            pq.push({it.second, it.first});
        }

        vector<int> result;
        while (k--) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
