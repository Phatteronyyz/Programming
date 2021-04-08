#include<bits/stdc++.h>
using namespace std;
int main(){
    int q,i,n;
    long double ans=1;
    scanf("%d",&q);
    while(q--){
        ans=1;
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            ans*=2;
        }
        printf("%.0llf\n",ans);
    }



    return 0;
}
