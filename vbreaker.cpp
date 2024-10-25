#include <bits/stdc++.h>
using namespace std;

// int/ll controls
#define ll long long
const int MOD = 1e9 + 7;       // Useful for mod arithmetic
const int INF = 1e9;           // Large value for initialization
const ll LINF = 1e18;          // Large value for long long

// loops and utilities
#define FASTFOR(v) for (const auto& e: v)
#define nl '\n'
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0);
#define FOR(i, n) for (int i = 0; i < (n); i++)
// Main function
signed main() {
    FAST_IO;
    
    // Input text and cipher key
    cout << "E - Text: " << endl;
    string text;
    string cipher;
    int n;
    getline(cin, text);
    cout << "Cipher: " << endl;
    cin >> n;
    

    vector<string> keys = {"SCHOOL","BORING","MISSED","CLASS","TIME","TRAIT","COLOUR","NAMES","CRIME","CHEAT","FRIEND","TRUTH","WANT","THING","CHILD","WAKEUP","RIGHT","WORLD","HACKER","STOP"};
    cipher = keys[n - 1];
    FOR(i, cipher.size()) {
        if (cipher[i] <= 'Z' && cipher[i] >= 'A') {
            cipher[i] -= 'A';
            cipher[i] += 'a';
        }
    }

    int i = 0;  // Index for the cipher key

    FASTFOR(text) {
        // Decoding for lowercase letters
        if (e >= 'a' && e <= 'z') {
            int shift = (cipher[i] - 'a') % 26;
            if (e - shift < 'a') {
                cout << char(e - shift + 26);  // Wrap-around
            } else {
                cout << char(e - shift);
            }
        }
        // Decoding for uppercase letters
        else if (e >= 'A' && e <= 'Z') {
            int shift = (cipher[i] - 'a') % 26;
            if (e - shift < 'A') {
                cout << char(e - shift + 26);  // Wrap-around
            } else {
                cout << char(e - shift);
            }
        }
        // Non-alphabetic characters remain unchanged
        else {
            cout << e;
            i--;  // Avoid advancing cipher index for non-alphabetic characters
        }

        // Reset or increment cipher index
        if (++i == cipher.size()) {
            i = 0;  // Wrap around if at the end of the cipher
        }
    }

    cout << nl;
    return 0;
}
