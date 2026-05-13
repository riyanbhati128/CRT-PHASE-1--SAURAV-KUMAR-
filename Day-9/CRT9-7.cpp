#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int largest(vector<int> &arr) {
        int n = arr.size();
        int maxi = arr[0];

        for(int i = 1; i < n; i++) {
            if(arr[i] > maxi) {
                maxi = arr[i];
            }
        }

        return maxi;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution s;

    cout << s.largest(arr);

    return 0;
}