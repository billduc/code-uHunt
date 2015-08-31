#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i < (int) n;++i)
#define For(i,m,n) for(int i= (int) m; i <= (int) n;++i)
#define pb push_back
#define X first
#define Y second
#define sz size()

using namespace std;
typedef long long ll;
#define N 1234

int n;
int p[N],w[N];
int s[N][N];


int main() {
    ios_base::sync_with_stdio(false);
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int test;
    test;
    cin>>test;
    while (test--){
        cin>>n;
        For(i,1,n)
            cin>>p[i]>>w[i];
        int k[N];
        int g;
        cin>>g;
        int m=0;
        rep(i,g)
            {
                cin>>k[i];
                m=max(m,k[i]);
            }
        rep(i,n)
            s[i][0]=0;
        rep(i,m)
            s[0][m]=0;
        for(int i=1;i<=n;++i)
            for(int j=0;j<=m;++j)
                if (w[i]>j)
                    s[i][j]=s[i-1][j];
                else
                    s[i][j]=max(s[i-1][j],s[i-1][j-w[i]]+p[i]);
        int res=0;
        rep(i,g)
            res+=s[n][k[i]];
        cout<<res<<endl;
    }
    return 0;
}


