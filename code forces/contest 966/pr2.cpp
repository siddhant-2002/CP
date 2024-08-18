#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(vector<int> arr, int i, int target)
{
    for (int j = 0; j < i; j++)
    {
        if (arr[j] == target + 1 || arr[j] == target - 1)
        {
            return true;
        }

    }

    return false;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        bool flag;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i < n; i++)
        {
            int t = arr[i];
            flag=solve(arr,i,t);
            if(flag==true){
                continue;
            }
            else{
                break;
            }

            
        }
        if (flag == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}