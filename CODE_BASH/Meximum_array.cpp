#include <iostream>
#include <cstdio>
#include <stack>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <functional>
#include <numeric>
using namespace std;
#define int long long 
#define vi vector<int>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pii pair<int,int>
#define pb push_back
#define ff first
#define tester int t;cin>>t;while(t--)
#define looper(a,b,c) for(int a=b;a<c;a++)
#define ss second
#define pqmax priority_queue<int>
#define pqmin priority_queue<int,vi,greater<int> >
#define mod 1000000007
#define vs vector<string>
#define mp map<int,int>
#define ump unordered_map<int,int>
#define space ' '
#define invi(n) vi arr(n); for(int i=0; i<n; i++) cin >> arr[i];
#define stc stack<char>
#define sti stack<int>
#define all(arr) arr.begin(),arr.end()
#define looprev(i,a,b) for(int i=a;i>=(b);i--)
#define logarr(arr,a,b) for(int z=(a);z<=(b);z++) std::cout<<(arr[z])<<space;std::cout<<std::endl;
#define si set<int>
int a[200005], suffix_mex[200005];
int gCd(int a,int b){
    if(b==0)
        return a;
    return gCd(b,a%b);
}
int fact(int n){
    int res=1;
    for(int i=2;i<=n;i++)
        res = (res*i)%mod;
    return res;
}
int nCr(int n,int r){
    return fact(n)/ (fact(r)*fact(n-r));
}
    
bool compare(pair<int,int> &one, pair<int,int> &two){
    return one.second < two.second;
}
int32_t main()
{
	tester{
		int n; cin >> n;
		set<int> s;
		looper(i,0,n+1)
			s.insert(i);
 
		looper(i,1,n+1)
			cin >> a[i];
 
		for (int i=n;i>=1;i--){
			s.erase(a[i]);
			suffix_mex[i] = *s.begin();
		}
		int index = 1;
		vi ans;
		while (index <= n){
			if (suffix_mex[index] == 0){
				ans.pb(0);
				index++;
				continue;
			}
			set<int> temp;
			int j = index;
			while (temp.size() < suffix_mex[index]){
				if (a[j] < suffix_mex[index])
					temp.insert(a[j]);
				j++;
			}
			ans.pb(suffix_mex[index]);
			index = j;
		}
		cout<<ans.size()<<endl;
		for (int i : ans)
			cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}