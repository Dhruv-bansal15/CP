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
#define int_ long long 
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define ff first
#define tester int t;cin>>t;while(t--)
#define looper(a,b,c) for(int_ a=b;a<c;a++)
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007
bool find_in_arr(vi arr,int x){
    int_ n=arr.size();
    if(n==0) return false;
    looper(i,0,n){
        if(arr[i]==x) return true;
    }
    return false;

}
int32_t main(){
    string s;cin>>s;
    int_ dist_alpha=0;
    vi arr;
    looper(i,0,s.size()){
        char x= s[i];
        int_ a = int(x);
        if(!find_in_arr(arr,a)) dist_alpha++; arr.pb(a); 
        // cout<< dist_alpha <<endl;
    }   

    if(dist_alpha%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}