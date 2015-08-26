#include <bits/stdc++.h>

#define rep(i,n) for(int i=0; i < (int) n;++i)
#define For(i,m,n) for(int i= (int) m; i <= (int) n;++i)

using namespace std;
typedef long long ll;
#define N 100005

int h[N],l[N];
int st[N],dt[N],sg[N],dg[N];

int main() {
    ios_base::sync_with_stdio(false);
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int test;
    cin>>test;
    int c=0;
    while (test--){
        int n;
        cin>>n;
        rep(i,n)
            cin>>h[i];
        rep(i,n)
            cin>>l[i];

        rep(i,n)
            {
                int tg1=0;
                int tg2=0;
                for(int j=0;j<i;++j)
                    if (h[j]<h[i])
                        {
                            if (tg1<st[j])
                                tg1=st[j];
                        }
                st[i]=tg1+l[i];
            }

        rep(i,n)
            {
                int tg1=0;
                int tg2=0;
                for(int j=0;j<i;++j)
                    if (h[j]>h[i])
                        {
                            if (tg1<sg[j])
                                tg1=sg[j];
                        }
                sg[i]=tg1+l[i];

            }

        int lm=0,ln=0;
        rep(i,n)
            if (lm<st[i])
                lm=st[i];
        rep(i,n)
            if (ln<sg[i])
                ln=sg[i];
        c++;
//        rep(i,n)
//            cout<<st[i]<<" ";
//        cout<<endl;
//        rep(i,n)
//            cout<<sg[i]<<" ";
//        cout<<endl;
        if (lm>=ln)
            printf("Case %d. Increasing (%d). Decreasing (%d).\n",c,lm,ln);
        else
            printf("Case %d. Decreasing (%d). Increasing (%d).\n",c,ln,lm);

    }
    return 0;
}
