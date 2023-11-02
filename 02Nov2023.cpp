//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    void store(int a[], int n, int x, vector<int>& s) {
        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                s.push_back(i);
            }
        }
    }
    int minDist(int a[], int n, int x, int y) {
        // code here
         vector<int> s1;
        vector<int> s2;
        store(a, n, x, s1);
        store(a, n, y, s2);

        int minDistance = INT_MAX;

        for (int i = 0; i < s1.size(); i++) {
            for (int j = 0; j < s2.size(); j++) {
                int distance = abs(s1[i] - s2[j]);
                if (distance < minDistance) {
                    minDistance = distance;
                }
            }
        }
        if(s1.empty() || s2.empty()){
            return -1;
        }

        return minDistance;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends
