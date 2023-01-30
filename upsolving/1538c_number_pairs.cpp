#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int t,n,l,r,x,y,aux,mid,lb,ub;
    ll ans;
    
    scanf("%d",&t);
    
    while(t--){
        
        scanf("%d %d %d",&n,&l,&r);
        
        vector<int> a;
        for(int i = 0; i < n; i++){
            scanf("%d",&aux);
            a.push_back(aux);
        }
        
        sort(a.begin(),a.end());
        
        ans = 0;
        
        for(int i = 0; i < n; i++){
            int lb = lower_bound(a.begin()+i+1,a.end(),l-a[i]) - a.begin();
            int ub = upper_bound(a.begin()+i+1,a.end(),r-a[i]) - a.begin();
            ans+=(ub-lb);
        }
        
        printf("%lld\n",ans);
        
    }
    return 0;
}
