//{ Driver Code Starts

#include <iostream>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findSum(string num1, string num2) {
         int m = num1.length();
    int n = num2.length();
    int len = max(m, n);
    int carry = 0;
    int a[len] = {0};
    int b[len] = {0};
    int c[len + 1] = {0};
    for (int i = 0; i < m; i++) {
        a[i] = num1[m - i - 1] - '0';
    }
    for (int i = 0; i < n; i++) {
        b[i] = num2[n - i - 1] - '0';
    }
    for (int i = 0; i < len; i++) {
        int sum = a[i] + b[i] + carry;
        c[i] = sum % 10;
        carry = sum / 10;
    }
    if (carry != 0) {
        c[len] = carry;
        len++;
    }
    string res = "";
    for (int i = len - 1; i >= 0; i--) {
        res += to_string(c[i]);
    }
    // remove leading zeros
    int i = 0;
    while (res[i] == '0' && i < res.length() - 1) {
        i++;
    }
    res = res.substr(i);
    return res;
    
        
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
{
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends