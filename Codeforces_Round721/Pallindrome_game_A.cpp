#include<bits/stdc++.h>
using namespace std; 
#define int_ long long int
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define ff first
#define ss second
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007
int no_of_0(string s){
    int l = s.size();
    int count=0;
    for(int i=0;i<l;i++){
        if(s[i]=='0'){
            count++;
        }
    }
    return count;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int count_ = no_of_0(s);
        if(count_==1){
            cout<<"BOB"<<endl;

        }else if(count_%2==0){
            cout<<"BOB"<<endl;
        }else{
            cout<<"ALICE"<<endl;
        }
    }
    return 0;
}