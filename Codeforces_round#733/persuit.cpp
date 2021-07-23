#include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
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
    
int32_t main(){
	tester{
		int n;cin>>n;
		deque<int> mine_dq;
		deque<int> llyas_dq;
		pqmax pq1;
		pqmax pq2;
		looper(i,0,n){
            int x;cin>>x;
			pq1.push(x);
		}
		looper(i,0,n){
            int x;cin>>x;
			pq2.push(x);
		}
		int sum1 = 0, sum2 = 0;
		int k = n - (n / 4);
		while(k--){
			sum1 += pq1.top();
			mine_dq.push_back(pq1.top());
			pq1.pop();
			sum2 += pq2.top();
			llyas_dq.push_back(pq2.top());
			pq2.pop();
		}
 
		if(sum1 >= sum2){cout<<0<<endl;}
		else{
			int cnt = 0;
			while(sum1 < sum2){
				cnt += 1;
				n += 1;
				mine_dq.push_front(100);
				k = (n) - (n/4);
				if(mine_dq.size() == k){
					sum1 += 100;
				}else if(mine_dq.size() > k){
					sum1 -= mine_dq.back();
					mine_dq.pop_back();
					sum1 += 100;
				}
				if(!pq2.empty() and k > llyas_dq.size()){
					llyas_dq.push_back(pq2.top());
					sum2 += llyas_dq.back();
					pq2.pop();
				}
			}
			cout<<cnt<<endl;
		}
	}
    return 0;
}