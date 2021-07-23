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
    string word1,word2;cin>>word1>>word2;
    int n= word2.size();
    bool x=false;
    for(int i=0;i<n;i++){
        char a= tolower(word1[i]);
        char b= tolower(word2[i]);
        if(a>b){
            cout<<1;
            x=true;
            break;
        }else if(a<b){
            cout<<-1;
            x=true;
            break;
        }
    }
    if(x==false) cout<<0;
    return 0;
}