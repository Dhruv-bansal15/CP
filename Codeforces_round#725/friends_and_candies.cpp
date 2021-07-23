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
using namespace std;
#define int long long 
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define ff first
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007
    
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int total=0;
        vi arr;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.pb(x);
            total+= x;
        }
        if(n==1) {
            cout<<0<<endl;
            continue;
        }
        if(total%n!=0) cout<<-1<<endl;
        else{
            int req_value= total/n;
            int count=0;
            for(int i=0;i<n;i++){
                if(arr[i]>req_value) count++;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}