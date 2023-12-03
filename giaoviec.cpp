#include<bits/stdc++.h>
#define ii pair<int,int>
#define f first
#define s second
#define N 10000001
using namespace std;
ii t[N];
int a[101][101],cnt[101];
bool kt[101];
int n,m,smax,smin;
// n so cong viec
// so luong may
void inp(){
    scanf("%d %d",&n,&m);
    for(int i=1; i<=n; i++){
        scanf("%d",&t[i].f);
        t[i].s=i;
    }
}
bool check(int k){
    // k : tong thoi gian goc

    // reset lai cac mang khi ham truoc do da return false
    for(int i=1; i<=n; i++) kt[i]=false;
    for(int i=1; i<=m; i++) cnt[i]=0;
    // duyet tu cac may dau tien den cac may cuoi cung
    for(int i=1; i<=m; i++){
        // tong tam thoi
        int stmp=0;
        //nhat tu cac cong viec lau nhat
        for(int j=n; j>0; j--)
            //kiem tra xem da nhat hay chua va co the nhat tiep khong
            if(!kt[t[j].s] && stmp+t[j].f<=k){
                // nhat roi thi danh dau
                kt[t[j].s]=true;
                // dem xem may thu i da thuc hien bao nhieu cong viec
                cnt[i]++;
                //mang danh dau cac may va cac cong viec da thuc hien
                a[i][cnt[i]]=t[j].s;
                //tong thoi gian
                stmp+=t[j].f;
            }
    }
    int scv=0;
    for(int i=1; i<=m; i++) scv+=cnt[i];
    // kiem tra so luong cong viec da lam co bang so cong viec khong
    return (scv==n);
}
bool cp(ii x,ii y){
    return (x.f<y.f || (x.f==y.f && x.s>y.s));
}
void solve(){
    // sort lai tu nho den lon
    sort(t+1,t+n+1,cp);
    int smax = -1;
    for(int i=1; i<=n; i++) smax=max(smax,t[i].f);
    smax*=2; smin=smax;
    for(int i=1; i<=n; i++) smin=min(smin,t[i].f);
    //thuc hien tim kiem thoi gian nho nhat thoa man
    for(int s=smin; s<=smax; s++)
        if(check(s)){
            printf("%d\n",s);
            for(int i=1; i<=m; i++){
                for(int j=1; j<=cnt[i]; j++) printf("%d ",a[i][j]);
                printf("\n");
            }
            return;
        }
}
#define task "task"
int main(){
    freopen(task".inp","r",stdin);
    freopen(task".out","w",stdout);
    inp();
    solve();
    return 0;
}
