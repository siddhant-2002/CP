#include <iostream>
#include <vector>
using namespace std;

bool solve(vector<int>& arr, int sum, int index, int target) {
    if (index >= arr.size()) {
        return sum == target;
    }

    int ans1 = solve(arr, sum + arr[index], index + 1, target);
    int ans2 = solve(arr, sum - arr[index], index + 1, target);

    return ans1 || ans2;
}

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target = x;
    int sum = arr[0];
    int index = 1;
    bool flag = solve(arr, sum, index, target);

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}