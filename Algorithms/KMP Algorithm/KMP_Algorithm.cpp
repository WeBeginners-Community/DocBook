// C++ program for implementation of KMP pattern searching algorithm
#include <bits/stdc++.h>
using namespace std;

// Fills lps[] for given pattern pat[0..m-1]
void computeLPSArray(string pat, vector<int> &lps, int m)
{
    // length of the previous longest prefix suffix
    int len = 0;
 
    lps[0] = 0; // lps[0] is always 0
 
    // the loop calculates lps[i] for i = 1 to m-1
    int i = 1;
    while (i < m) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            // This is tricky. Consider the example.
            // aaacaaaa and i = 7. The idea is similar
            // to search step.
            if (len != 0) {
                len = lps[len - 1];
 
                // Also, note that we do not increment
                // i here
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

// Prints occurrences of txt in pat
void KMPSearch(string pat, string txt)
{
    int n = txt.size(), m = pat.size();

    // create lps[] that will hold the longest prefix suffix
    // values for pattern
    vector<int> lps(m);
    computeLPSArray(pat, lps, m);
    
    int i = 0; // index for txt
    int j = 0; // index for pat
    while((n - i) >= (m - j)) {
        if(pat[j] == txt[i]) {
            j++;
            i++;
        }
        if(j == m) {
            cout<<"Found pattern at index "<< i - j <<endl;
            j = lps[j - 1];
        }
        // mismatch after j matches
        else if(i < n && pat[j] != txt[i]) {
            // Do not match lps[0..lps[j-1]] characters,
            // they will match anyway
            if(j != 0) {
                j = lps[j - 1];
            }
            else {
                i = i + 1;
            }
        }
    }
}

int main()
{
    string txt = "ababdabacdababcabab";
    string pat = "ababcabab";
    KMPSearch(pat, txt);        //calling th funtion to find indexes of pattern in text
    //output --> Found pattern at index 10

    return 0;
}