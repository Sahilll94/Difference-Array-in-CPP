#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getModifiedArray(int length, vector<vector<int>> &updates)
    {
        vector<int> arr(length + 1, 0);

        for (auto &update : updates)
        {
            int start = update[0];
            int end = update[1];
            int value = update[2];

            arr[start] += value;

            if (end + 1 < length)
            {
                arr[end + 1] -= value;
            }
        }

        vector<int> prefix(length, 0);
        prefix[0] = arr[0];

        for (int i = 1; i < length; i++)
        {
            prefix[i] = prefix[i - 1] + arr[i];
        }

        return prefix;
    }
};

int main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;

    int k;
    cout << "Enter the number of update operations: ";
    cin >> k;

    vector<vector<int>> updates(k, vector<int>(3));

    cout << "Enter the update operations (startIndex, endIndex, inc): " << endl;
    for (int i = 0; i < k; ++i)
    {
        cin >> updates[i][0] >> updates[i][1] >> updates[i][2];
    }

    Solution obj;
    vector<int> result = obj.getModifiedArray(length, updates);


    cout << "Modified array: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
