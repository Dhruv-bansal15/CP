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
#define pii pair<int,int>
#define pb push_back
#define ff first
#define tester int t;cin>>t;while(t--)
#define looper(a,b,c) for(int a=0;a<b;a+c)
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007
    
int32_t main(){
    tester{
        int n,x,t;cin>>n>>x>>t;
        int temp= n - t/x;
        if(temp<0) temp= 0;
        int tempp= min(n-1, t/x - 1);
        int temppp= min(n,t/x);
        int ans= temp*(t/x) + tempp*temppp/2;
        cout<<ans<<endl;
    }   
    return 0;
}