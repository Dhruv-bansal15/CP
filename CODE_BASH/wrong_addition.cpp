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
    
int32_t main(){
    tester{
        string a,s;cin>>a>>s;
        vi opone(a.length()),sum(s.length());
        looper(i,0,a.length()){
            opone[i] = a[i]-'0';
        }
        looper(i,0,s.length()){
            sum[i] = s[i]-'0';
        }
        int i=a.length()-1,j=s.length()-1;
        vi optwo;
        bool done=true;
        while(i>=0 & j>=0){
            if(sum[j]>=opone[i]){
                optwo.pb(sum[j]-opone[i]);
            }else{
                if(j==0){
                    done=false;
                    break;
                }
                int result = 10*sum[j-1] + sum[j];
                if(result < 10 | result >18){
                    done=false;
                    break;
                }
                j--;
                optwo.pb(result - opone[i]);
            }
            i--,j--;
        }
        if(i>=0 & j<0){
            done=false;
        }else if(i<0 &j>=0){
            while(j>=0){
                optwo.pb(sum[j]);
                j--;
            }
        }
        if(!done){
            cout<<-1<<endl;
        }else{
            vi ans;
            for(int i=optwo.size()-1;i>=0;i--){
                ans.pb(optwo[i]);
            }
            int i=0;
            while(ans[i]==0){
                i++;
            }
            while(i<ans.size()){
                cout<<ans[i];
                i++;
            }
            cout<<endl;
        }
    }   
    return 0;
}