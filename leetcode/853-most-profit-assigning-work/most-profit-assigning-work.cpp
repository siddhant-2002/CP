// class Solution {
//     int find(vector<int>& difficulty, int s) {
//         int n = difficulty.size();
//         int max=0;
//         for (int i = n - 1; i >= 0; i--) {
//             if (s >= difficulty[i]) {
//                 if(max< difficulty[i]){
//                     max = difficulty[i];
//                 }
//             }
//         }
//         return max;
//     }
//     struct cmp {
//         bool operator()(int a, int b) const { return a > b; }
//     };
// public:
//     int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
//         map<int, int, cmp> mp;
//         int n = worker.size();

//         for (int i = 0; i < difficulty.size(); i++) {
//             mp[difficulty[i]] = max(mp[difficulty[i]], profit[i]);
//         }

//         sort(difficulty.begin(), difficulty.end());
//         sort(worker.begin(), worker.end());

//         int ans = 0;

//         int a = find(difficulty, worker[n - 1]);
//         for (int i = n - 1; i >= 0; i--) {
//             if (a > worker[i]) {
//                 a = find(difficulty, worker[i]);
//                 ans += mp[a];
//             } else {
//                 ans += mp[a];
//             }
//         }
//         return ans;
//     }
// };

#define sort(a) sort(begin(a), end(a))
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        opt();
        int res = 0, j = 0, best = 0;
        vector<pair<int, int>> temp;
        for(int i = 0; i < worker.size(); ++i) {
            temp.push_back({difficulty[i], profit[i]});
        }

        sort(temp); sort(worker);
        for(int work : worker) {
            while(work >= temp[j].first && j < worker.size()) {
                best = max(best, temp[j++].second);
            }
            
            res += best;
        }

        return res;
    }
};