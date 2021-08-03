//                 ....
//             ....      ..
//          ...           .
//        ..        .......
//     ...          .......
//   ...          .. .......
//  ..          ..     .......
// ..          ..        ......
// ..         ..          .......
// ..        ..            .... ..
//  ..     ..                .......
//                            ... ...
//                              ......
//                               .......
//                                 ......
//                                  ......
//                                   .......
//                                     ......
//                                      .......
//                                       .......
//                                         ......                 ......
//                                          .......           ........ ..
//                                            ......      ........ ........
//                                             ....... ............ ........
//                                              .............................
//                                              ...................... ........
//                                           ...................................
//                                       ................................ .......
//                                    ............................................
//                                   ............................................
//                                 ............................................
//                                 ..........................................
//                                  ......................................
//                                   ..................................
//                                     .............................
//                                      .........................
//                                        .........................
//                                   ................................
//                                   ..............................
//                                      ....................



#include<bits/stdc++.h>
//#pragma GCC optimize ("O2,unroll-loops")
//#pragma GCC optimize("no-stack-protector,fast-math")
using namespace std;

//g++-10 -Wl,-stack_size -Wl,100000000 main.cpp -o test1
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;

#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//#define INFF 9223372036854775807
#define INF 1000000000000000001

#define debug1 cout<<"helo 1"<<endl;
#define debug2 cout<<"helo 2"<<endl;
#define endl '\n'
#define couti(a) printf("%d ",a)
#define coutl(a) printf("%lld ",a)
#define nline printf("\n")
#define cini(a) scanf("%d",&a)
#define cinl(a) scanf("%lld",&a)

#define mp make_pair
#define f first
#define pb push_back
#define pob pop_back
#define s second
#define t third
#define all(v) v.begin(),v.end()
#define all1(v) v.begin()+1,v.end()

#define int long long
#define ll long long
#define LL long long

//#define PI 3.14159265358979323846264338327950288419716939937510582097

#define priorqmax priority_queue<LL>
#define priorqmin priority_queue<LL,vector<LL>,greater<LL> >
#define len length()
#define vi vector<int>
#define vl vector<ll>
#define ve vector
#define lsti list<int>
#define pairi pair<int,int>
#define pairl pair<ll,ll>
#define mset(a) memset(a,0,sizeof(a))
#define FOR(j, a, n) for(int j=a;j<n;++j)
#define FOR1(j, a, n) for(int j=a;j>=n;--j)

//order_of_key (k) : Number of items strictly smaller than k .
//find_by_order(k) : K-th element in a set (counting from zero).
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

class trio {
 public:
	int first, second, third;

	void print() {
		cout << first << " " << second << " " << third << endl;
	}
};

//#define MOD 1000000007
//#define MOD 987654319
#define MOD 998244353

bool comp_trio(trio &a, trio &b) {
	if (a.t == b.t) {
		if (a.s == b.s)
			return a.f < b.f;
		return a.s < b.s;
	}
	return a.t < b.t;
}

class compare {
 public:
	bool operator()(const pairi &a, const pairi &b) const {
		if (a.s == b.s)
			return a.f < b.f;
		return a.s < b.s;
	}
};

LL power(LL x, LL y, LL m) {

	if (y < 0)
		return 0;

	//(x^y)%MOD
	LL ans = 1, s = x;
	while (y) {
		if (y & 1) {
			ans *= s;
			ans %= m;
		}
		s *= s;
		s %= m;
		y >>= 1;
	}
	return ans;
}


// .................................................. START
// Check if int needs to be converted to long long  _/\_
//

void solve() {

	int n,m;
	cin>>n>>m;

	ve<vi>arr(n,vi(m)),brr(n,vi(m,-1)),ans(n,vi(m,0));

	ve<trio>b;

	FOR(i,0,n){
		FOR(j,0,m){
			cin>>arr[i][j];
			b.pb({i,j,arr[i][j]});
		}
	}

	sort(all(b), comp_trio);

	FOR(i,0,m){
		brr[b[i].f][b[i].s]=i;
	}


	FOR(k,0,m) {
		FOR(i, 0, n) {
			bool fl = 1;
			FOR(j, 0, m) {
				if (brr[i][j] == k) {
					fl = 0;
					break;
				}
			}

			if (fl) {
				FOR(j, 0, m) {
					if (brr[i][j] == -1) {
						brr[i][j] = k;
						break;
					}
				}
			}
		}
	}

	FOR(i,0,n){
		FOR(j,0,m){
			ans[i][brr[i][j]] = arr[i][j];
		}
	}

	FOR(i,0,n) {

		FOR(j,0,m){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}







}

int32_t main() {

	fastio;

	int T = 1;
	cin >> T;

	while (T--) {
		solve();
	}
}

