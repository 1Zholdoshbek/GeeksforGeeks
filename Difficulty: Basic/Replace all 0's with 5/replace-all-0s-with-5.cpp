//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        string s=to_string(n);
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                s[i]='5';
            }
        }
        int ans=std::stoi(s);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.convertFive(n) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends