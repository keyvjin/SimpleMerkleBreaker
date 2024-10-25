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
    unordered_set<string> specialNumbers;
    vector<string> u = {"one", "two","three", "four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety","One", "Two","Three", "Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen","Twenty","thirty"};
    FASTFOR(u) {
        specialNumbers.insert(e);
    }

    string s;
    cout << "Message to decrypt: " << endl;
    getline(cin, s);
    for (int i = 0; i < 26; i++) {
        string out = "";
        string curr = "";
        bool print = false;
        FASTFOR(s) {
            if (e >= 'a' && e <= 'z') {
                if (e + i > 'z') {
                    curr += char(e + i - 'z' + 'a' - 1);
                } else {
                    curr += char(e + i);
                }
            } else if (e >= 'A' && e <= 'Z') {
                if (e + i > 'Z') {
                    curr += char(e + i - 'Z' + 'A' - 1);
                } else {
                    curr += char(e + i);
                }
            } else {
                if (specialNumbers.find(curr) != specialNumbers.end()) {
                    print = true;
                }
                out += curr;
                out += e;
                curr = "";
            }
        }
        if (specialNumbers.find(curr) != specialNumbers.end()) {
            print = true;
        }
        out += curr;

        if (print) {
            cout << out << endl;
        }
        
        cout << nl;
    }





    return 0;
}
