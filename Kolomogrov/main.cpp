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
double RN[10];
void generateRN(){
    loop(0,10){
        RN[i]=(double)(rand()%100)/100;
    }
}
double f(double x){
    //x=(2*(x*x)-x);
    return x;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(0);std::ios::sync_with_stdio(false);cout.tie(0);
//    double rn[]={0.11,0.23,0.24,0.41,0.50,0.61,0.64,0.65,0.86,0.89};
    srand(time(NULL));
    generateRN();
    double mx=-1;
    sort(RN,RN+10);
    cout<<"X: ";
    for(int i=0;i<10;i++){
        cout<<RN[i]<<" ";
    }
    cout<<endl<<"F(x): ";
    for(int i=0;i<10;i++){
        RN[i]=f(RN[i]);
        cout<<RN[i]<<" ";
    }
    cout<<endl<<"|Sn(x)-F(x)|: ";
    for(int i=0;i<10;i++){
        RN[i]= abs(RN[i]-((double)(i+1)/10));
        cout<<RN[i]<<" ";
        mx=max(mx,RN[i]);
    }
    cout<<endl<<"MAX: "<<mx;
    return 0;
}