#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sl(n) scanf("%lld",&n)
#define pl(n) printf("%lld",n)
#define enter printf("\n")
#define space printf(" ")
#define MOD 1000000007
#define mag 10000000
#define rep(i,n) for(i=0;i<n;i++)
#define loop(i,a,b) for(i=(a);i<=(b);i++)
#define mset(x,v) memset(x, v, sizeof(x))

ll partition(ll *arr,ll start,ll end){
ll pivot=arr[end];
ll idx=start,i;
for(i=start;i<end;)
if(arr[i]<pivot)
{swap(arr[i],arr[idx]);
idx++;
}
}
swap(arr[i],arr[idx]);
return idx;
}
}

void quicksort(ll *arr,ll start,ll end){
if(start<end){
ll q=partition( arr,  start,  end) ;
quicksort(arr,start,q-1);
quicksort(arr,q+1,end);
}
}


int main(){
ll t;sl(t);
while(t--){
ll n;sl(n);ll arr[n];
ll i;
rep(i,n)
sl(arr[i]);
ll start=0,end=n-1;
quicksort(arr,start,end);
for(i=0;i<n;i++ ){
pl(arr[i]);space;}
enter;
}
}
