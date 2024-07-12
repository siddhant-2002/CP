class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        // Step 1: Count occurrences of each element in arr1
        map<int, int> countMap;
        for (int num : arr1) {
            countMap[num]++;
        }

        vector<int> ans;

        // Step 2: Add elements to ans in the order of arr2
        for (int num : arr2) {
            while (countMap[num] > 0) {
                ans.push_back(num);
                countMap[num]--;
            }
        }

        // Step 3: Add remaining elements not in arr2, sorted in ascending order
        for (auto& [num, count] : countMap) {
            while (count > 0) {
                ans.push_back(num);
                count--;
            }
        }

        return ans;
    }
};
