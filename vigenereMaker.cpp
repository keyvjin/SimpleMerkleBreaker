#include <bits/stdc++.h>
using namespace std;

// int/ll controls
#define ll long long
const int MOD = 1e9 + 7;       // Useful for mod arithmetic
const int INF = 1e9;           // Large value for initialization
const ll LINF = 1e18;          // Large value for long long

// loops
#define EFOR(i, a, b) for (int i = (a); i <= (b); i++)
#define EFORD(i, a, b) for (int i = (a); i >= (b); i--)
#define FOR(i, n) for (int i = 0; i < (n); i++)
#define FORD(i, n) for (int i = (n)-1; i >= 0; i--)
#define ALL(v) (v).begin(), (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
#define FASTFOR(v) for (const auto& e: v)
// Debugging (useful for checking variables while coding)
#define DEBUG(x) cerr << '>' << #x << ':' << x << endl
#define nl '\n'
// Fast input/output
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0);
#define G(i,x) get<i>(x)
#define D(x,i) vector<i>().swap(x)
// GCD and LCM
inline ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
inline ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }


// /usr/local/bin to update
// Main function
signed main() {
    int n, m, k;
    cout << "Text: " << endl;
    string text;
    string cipher;
    getline(cin, text);
    cout << "Cipher: " << endl;
    getline(cin, cipher);
    cout << "Message number: " << endl;
    cin >> n;
    // convert to lower case for all.
    FOR(i, cipher.size()) {
        if (cipher[i] <= 'Z' && cipher[i] >= 'A') {
            cipher[i] -= 'A';
            cipher[i] += 'a';
        }
    }

    int i = 0;
    FASTFOR(text) {
        // move it by this much
        if (e >= 'a' && e <= 'z' ) {
            if (e + (cipher[i] - 'a') > 'z') {
                cout << char(e + cipher[i] -'z' - 1);
            } else {
                cout << char(e + cipher[i] -'a');
            }
        } else if (e >= 'A' && e <= 'Z' ) {
            if (e + (cipher[i] - 'a') > 'Z') {
                cout << char(e + cipher[i] -'Z' - 1);
            } else {
                cout << char(e + cipher[i] -'A');
            }
        } else {
            cout << e;
            i--;
        }
        if (i == cipher.size() - 1) {
            i = 0;
        } else {
            i++;
        }
    }

    cout << ". PS I used the key with ID " << n;
    cout << endl;

    return 0;
}
