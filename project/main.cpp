#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i < (int) n;++i)
#define For(i,m,n) for(int i= (int) m; i <= (int) n;++i)
#define pb push_back
#define X first
#define Y second
#define sz size()

using namespace std;
typedef long long ll;
#define N 30005
#define oo 100000000

int tsp[17][1<<16-1];
int dis[17][17];

int main() {
    //ios_base::sync_with_stdio(false);
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n;
    cin>>n;
    rep(i,n)
        rep(j,n)
            cin>>dis[i][j];
    rep(pos,n)
        {
            rep(bit,1<<n-1)

        }
    return 0;
}


