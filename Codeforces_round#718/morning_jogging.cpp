#include <iostream>
#include <cstdio>
#include <stack>
#include <bits/stdc++.h>
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
#define tt third
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
class trio {
 public:
	int first, second, third;
	void print() {
		cout<<first<<space<<second<<space<<third<<endl;
	}
};
bool comp_trio(trio &a, trio &b) {
	if (a.tt == b.tt) {
		if (a.ss == b.ss)
			return a.ff < b.ff;
		return a.ss<b.ss;
	}
	return a.tt < b.tt;
}
// class compare {
//  public:
// 	bool operator()(const pairi &a, const pairi &b) const {
// 		if (a.ss == b.ss)
// 			return a.ff < b.ff;
// 		return a.ss < b.ss;
// 	}
// };
void solve() {
	int n,m;
	cin>>n>>m;
	vector<vi>arr(n,vi(m)),brr(n,vi(m,-1)),ans(n,vi(m,0));
	vector<trio>b;
	looper(i,0,n){
		looper(j,0,m){
			cin>>arr[i][j];
			b.pb({i,j,arr[i][j]});
		}
	}
	sort(all(b), comp_trio);
	looper(i,0,m){
		brr[b[i].ff][b[i].ss]=i;
	}
	looper(k,0,m) {
		looper(i, 0, n) {
			bool fl = 1;
			looper(j, 0, m) {
				if (brr[i][j] == k) {
					fl = 0;
					break;
				}
			}

			if (fl) {
				looper(j, 0, m) {
					if (brr[i][j] == -1) {
						brr[i][j] = k;
						break;
					}
				}
			}
		}
	}

	looper(i,0,n){
		looper(j,0,m){
			ans[i][brr[i][j]] = arr[i][j];
		}
	}
	looper(i,0,n) {

		looper(j,0,m){
			cout<<ans[i][j]<<space;
		}
		cout<<endl;
	}
}
int32_t main() {
	tester{
		solve();
	}
}

