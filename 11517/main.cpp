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

int c[N];
int d[N];

int main() {
    //ios_base::sync_with_stdio(false);
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int test;
    cin>>test;
    while (test--){
        int n,s;
        cin>>s>>n;
        rep(i,n)
            cin>>c[i];
        sort(c,c+n);
        rep(i,30000+1)
            d[i]=oo;
        d[0]=0;
        rep(i,n)
            for(int j=30000-c[i];j>=0;--j)
                if (d[j]<oo)
                    d[j+c[i]]=min(d[j+c[i]],d[j]+1);
        for(int i=s; i<=N;++i)
            if (d[i]<oo)
            {
                cout<<i<<" "<<d[i]<<endl;
                break;
            }
    }
    return 0;
}


