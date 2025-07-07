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
    fastio; // 啟用輸入輸出加速

    int M;
    string line;

    // 持續讀入直到 EOF
    while (cin >> M) {
        cin.ignore();  // 忽略 M 那行之後的換行符
        getline(cin, line); 
        
        stringstream ss(line);  // 將整行字串當成「輸入串流」來處理，就像 cin 一樣
        int num;
        vector<vector<int>> vec(M);  // buckets
        while (ss >> num) { // 每次會從 line 中抓出一個整數，可存入 vector、做分類等
            vec[num % M].push_back(num);
        }
        for (int i = 0; i < M; ++i){
            if (vec[i].empty())
                continue;
            sort(vec[i].begin(), vec[i].end());
            for (int j = 0; j < vec[i].size(); ++j){
                cout << vec[i][j];
                if (i < M - 1 || j < vec[i].size() - 1) {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
