#include<bits/stdc++.h>
using namespace std; 
#define int long long int
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define ff first
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007

int32_t main(){
    int n;cin>>n;
    string s;cin>>s;
    int count_a=0;
    int count_d=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A') count_a++;
        else count_d++;
    }
    if(count_a>count_d) cout<<"Anton"<<endl;
    else if(count_d>count_a)cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
}