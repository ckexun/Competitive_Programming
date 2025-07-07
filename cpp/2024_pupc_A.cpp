#include <bits/stdc++.h>  
using namespace std;

#define DEBUG true
#define OJ_DEBUG
#define $(x) {if (DEBUG) {cout << __LINE__ << ": "; {x} cout << endl;}}  // $( _(a); ) 
#define _(x) {cout << #x << " = " << x << " ";}     // _(a);
#define int long long
#define pii pair<int,int>
#define all(x) x.begin(), x.end()
#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define f first
#define s second

const int INF = 1e18;       
const int MOD = 1e9+7; 
const double E = 1e-8;
const double PI = acos(-1);     

int32_t main() {
    fastio; 

    int k;
    cin >> k;

    while(k--){
        int n;
        cin >> n;

        vector<int> incomes(n);
        for(int i = 0; i < n; ++i)
            cin >> incomes[i];
        
        int max_income = incomes[0];
        int max_gap = incomes[0] - incomes[1];
        for(int j = 1; j < n; ++j){
            max_gap = max_gap > max_income - incomes[j] ? max_gap : max_income - incomes[j];
            max_income = max_income > incomes[j] ? max_income : incomes[j];
            // max_gap = max(max_gap, max_income - incomes[j]);
            // max_income = max(max_income, incomes[j]);
        }
        cout << max_gap << endl;
    }
}
