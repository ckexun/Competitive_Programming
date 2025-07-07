// 萬用 C++ template for PUPC / ICPC / APCS 競賽使用
// 支援快速輸入輸出、避免 int overflow、常用型別簡化、常數定義

#include <bits/stdc++.h>  // 匯入所有標準 C++ 函式庫（僅 GCC 支援）
using namespace std;

// ======================== 巨集定義區 ========================
#define DEBUG true
#define OJ_DEBUG

#define $(x) {if (DEBUG) {cout << __LINE__ << ": "; {x} cout << endl;}}  // $( _(a); ) 
#define _(x) {cout << #x << " = " << x << " ";}     // _(a);

// 將所有 int 替換為 long long，避免 overflow（但記得 int32_t main()）
#define int long long

// 常用型別簡寫：pair<int,int> → pii（用於座標、區間）
#define pii pair<int,int>

// STL 容器常用寫法簡化：sort(all(v)) = sort(v.begin(), v.end())
#define all(x) x.begin(), x.end()

// 快速輸入輸出設定，加速 cin/cout（不要混用 scanf/printf）
#define fastio ios::sync_with_stdio(false); cin.tie(0);

// pair 的簡寫：f = first, s = second，方便讀寫 map/priority_queue 等
#define f first
#define s second

// ======================== 常數定義區 ========================

const int INF = 1e18;       // 定義「無限大」，常用於最短路、DP 初始值
const int MOD = 1e9+7;      // 常見取模數，許多題目會要求 mod 1e9+7
const double E = 1e-8;
const double PI = acos(-1);

// ======================== 主程式區 ========================

int32_t main() {
    fastio; // 啟用輸入輸出加速

    // 在這裡撰寫程式
}
