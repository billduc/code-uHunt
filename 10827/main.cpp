#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (int) n;++i)
#define For(i,m,n) for(int i= (int) m; i <= (int) n;++i)

using namespace std;
typedef long long ll;
#define N 100005

int a[200][200];
int s[200][200];


int main() {
    ios_base::sync_with_stdio(false);
    //freopen("test.inp","r",stdin);
    //freopen("test.out","w",stdout);
    int test;
    cin>>test;
    while (test--){
        int n;
        cin>>n;
        rep(i,n)
            rep(j,n)
                cin>>a[i][j];
        rep(i,n)
            For(j,n,n*2-1)
                a[i][j]=a[i][j-n];
        For(i,n,n*2-1)
            rep(j,n*2)
                a[i][j]=a[i-n][j];
        int res=-1e9;
        rep(i,n*2)
            rep(j,n*2)
                {
                    int tg=0;
                    if (i>0)
                        tg+=s[i-1][j];
                    if (j>0)
                        tg+=s[i][j-1];
                    if (i>0 && j>0 )
                        tg-=s[i-1][j-1];
                    tg+=a[i][j];
                    s[i][j]=tg;
                }
        rep(i,n)
            rep(j,n)
                For(ii,i,i+n-1)
                    For(jj,j,j+n-1)
                        {
                            int tg=s[ii][jj];
                            if (i>0)
                                tg-=s[i-1][jj];
                            if (j>0)
                                tg-=s[ii][j-1];
                            if (i>0 && j>0)
                                tg+=s[i-1][j-1];
                            if (tg>res)
                                res=tg;
                        }
        cout<<res<<endl;
    }

    return 0;
}
