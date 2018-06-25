#include <bits/stdc++.h>
using namespace std;

bool isPowerOf(long val, int base)
{
    while (val > 1) {
        if (val % base != 0)
            return false; 
        val /= base;
    }
    return true;
}

int numberOfPartitions(string binaryNo)
{
    int i, j, n = binaryNo.length();
    long val;
    int dp[n];
 
    dp[n - 1] = ((binaryNo[n - 1] - '0') == 0) ? -1 : 1;
 
    for (i = n - 2; i >= 0; i--) {
        val = 0;
        if ((binaryNo[i] - '0') == 0) {
            dp[i] = -1;
            continue;
        }
 
        dp[i] = INT_MAX;
 
        for (j = i; j < n; j++) {
 
            val = (val * 2) + (long)(binaryNo[j] - '0');
            if (isPowerOf(val, 4) || isPowerOf(val, 6)) {
                if (j == n - 1) {
                    dp[i] = 1;
                }
                else {
                    if (dp[j + 1] != -1)
                        dp[i] = min(dp[i], dp[j + 1] + 1);
                }
            }
        }

        if (dp[i] == INT_MAX)
            dp[i] = -1;
    }
 
    return dp[0];
}

int main()
{
    string binaryNo;
    cin>>binaryNo;
    cout << numberOfPartitions(binaryNo);
    return 0;
}