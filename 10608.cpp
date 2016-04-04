#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define sz(a) ((int)(a).size())
#define all(a) (a).begin(),(a).end()
#define DEBUG(x) {cout<< #x <<" = " << x <<endl;}

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

vector<int> pset;

int findSet(int i){return pset[i] == i ? pset[i] : pset[i] = findSet(pset[i]);}

void unionSet(int i, int j){
    pset[findSet(i)] = findSet(j);
}

bool sameSet(int i, int j){
    return findSet(i) == findSet(j);
}

int main(){
    //freopen("in.txt","r",stdin);
    ios::sync_with_stdio(false);
    int test;
    cin>>test;
    while (test--){
        int n,m;
        cin>>n>>m;
        pset.assign(n+3,0);
        for(int i = 1;i <= n; ++i)
            pset[i] = i;
        for(int i = 1;i <= m; ++i)
        {
            int u,v;
            cin >> u >> v;
            unionSet(u,v);
        }
        vector<int> s;
        s.assign(n+3,0);

        for(int i = 1;i <= n; ++i)
            s[findSet(i)]++;
        int res = 0;
        for(int i = 1;i <= n; ++i)
            res = max(res,s[i]);
        cout<<res<<endl;
        pset.clear();
    }

    return 0;
}
