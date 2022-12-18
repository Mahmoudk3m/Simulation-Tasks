#include<bits/stdc++.h>
//ACPC2022
//TposersFTW
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define pb push_back
#define lcm(x,y) x*y/__gcd(x,y)
#define summ(n) (n*(n+1))/2
#define loop(x,n) for(int i=x;i<n;i++)
#define loopj(x,n) for(int j=x;j<n;j++)
#define test int t;cin>>t;while(t--)
using namespace std;
double eps =1e-9;
//////////////////
int fact(int n){
    return( n==1||n==0 ? 1 : n*fact(n-1) );
}
double L(double x,double n,double p){
    return (fact(n)/ (fact(n-x)* fact(x)))*pow(p,x)* pow(1-p,n-x);
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(0);std::ios::sync_with_stdio(false);cout.tie(0);
    int n,x;cin>>n>>x;
    double p=(double)x/n;
    cout<<"P = "<<p<<endl;
    cout<<"L("<<p<<"|("<<x<<","<<n<<"))"<<" = "<<L(x,n,p)<<endl;
    return 0;
}