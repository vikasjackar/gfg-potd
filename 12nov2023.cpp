//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int n = str1.length();
        int m = str2.length();
        
        //Edge cases
        if(n != m) return false;
        if(n <= 2) return (str1 == str2);
        if(str1 == str2) return false;
        
        str1 += str1;
        
        //Check if str2 is a substring of str1 + str1
        return ((str1.find(str2) != string::npos));
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends
