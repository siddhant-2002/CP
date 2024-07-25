#include <vector>
#include <algorithm>

class Solution {
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
        // Sort both vectors in ascending order
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());

        int count = 0;
        int i = 0, j = 0;

        // Iterate through both vectors
        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                count++;
                i++;
                j++;
            } else {
                j++;
            }
        }

        return count;
    }
};