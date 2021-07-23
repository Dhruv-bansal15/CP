#include<bits/stdc++.h>
#define infinity 999999999999999999
#define float long double
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(),(v).end()
#define MOD_DEFINE const int MOD = 1e9 + 7;
#define And &&
#define Or ||
#define endl '\n'
#define space " "
#define int long long
#define pii pair<int, int>
#define vi vector<int>
#define pb(n) push_back(n)
#define mii map<int, int>
#define umii unordered_map<int, int>
#define test_cases_loop int t; cin >> t; while(t--)
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(var, initial, final) for(int var=initial; var < final; var++)
using namespace std;
typedef long long ll;

int32_t main(){
    FIO
    int a, c; cin>> a >> c;
    vi first_base_3, second_base_3;
    while(a){
        first_base_3.pb(a%3);
        a/=3;
    }
    while(c){
        second_base_3.pb(c%3);
        c/=3;
    }
    // print<int>(first_base_3);
    int limit = max(sz(first_base_3), sz(second_base_3));
    first_base_3.resize(limit);
    second_base_3.resize(limit);
    // print<int>(first_base_3);
    int factor = 1;
    int ans = 0;
    loop(i, 0, limit){
        int temp = second_base_3[i] - first_base_3[i];
        temp < 0 ? temp += 3 : temp = temp;
        ans += temp*factor; factor*=3;
    }
    cout << ans << endl;
    return 0;
}