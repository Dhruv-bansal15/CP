#include<bits/stdc++.h>
using namespace std; 
#define int long long int
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
vector<vi> tree;
vi subval,val;
vector<pii> ch;

void dfs(int now, int last){
    for(auto x:tree[now]){
        if(x==last) continue;
        dfs(x,now);
    }
    ch.clear();
    for(auto x:tree[now]){
        if(x!=last){
            ch.pb({subval[x],x});
        }

    }
    sort(ch.rbegin(),ch.rend());
    int tol=1;
    for(auto [temp,id]:ch){
        val[id]+= tol++;
    }
    for(auto x:tree[now]){
        if(x!=last){
            subval[now]+= val[x]*subval[x];
        }
    }
}

int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        subval.assign(n,1);
        val.assign(n,0);
        tree.clear();
        tree.resize(n);
        while(n-->1){
            int u,v;
            cin>>u>>v;
            u--;
            v--;
            tree[u].pb(v);
            tree[v].pb(u);

        }
        dfs(0,-1);
        cout<< subval[0]%(1e9 + 7)*x%(1e9 + 7)<<endl;

    }
    return 0;
}