#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long int
#define pb push_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define loopb(i, a, b) for(int i=a; i>=b; i--)
#define testcase int t; cin>>t; while(t--)
#define pii pair<int, int>
#define f first
#define s second
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n";
#define debug(x) cout<<(#x)<<": "<<x<<endl
#define debugvi(v) cout<<(#v)<<": "; loop(i, 0, v.size()) cout<<v[i]<<" "; cout<<endl;


int32_t main() {
    fastio;
    string s;
    cin>>s;
    int n = s.length();
    int ans[n/2 + 1];
    int j=0;
    for(int i=0; i<n; i+=2) {
        ans[j]=s[i]-'0';
        j++;
    }

    sort(ans, ans+(n/2+1));
    // loop(i, 0, n/2+1) cout<<ans[i]<<' ';
    // cout<<endl;
    string final="";
    int i=0;
    for(i=0; i<n/2; i++) {
        final += (char)(ans[i]+(int)'0');
        final += '+';
    }
    final+=(char)(ans[i]+(int)'0');
    cout<<final<<endl;
    return 0;
}