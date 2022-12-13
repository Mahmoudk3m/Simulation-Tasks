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
int rn[100];
void generateRN(){
    loop(0,100){
        rn[i]=(rand()%100);
    }
}
int o[10];
void observation(){
    for(int i=0;i<10;i++){
        for(int j=0;j<100;j++){
            if(rn[j]>(i*10)&&rn[j]<=((i*10)+10))o[i]++;
        }
    }
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(0);std::ios::sync_with_stdio(false);cout.tie(0);
    srand(time(NULL));
    generateRN();
    observation();
    cout<<"class"<<'\t'<<"Interval"<<'\t'<<"Oi"<<'\t'<<"Ei"<<'\t'<<"Oi-Ei"<<'\t'<<"(Oi-Ei)^2"<<'\t'<<"(Oi-Ei)^2/Ei"<<'\t'<<endl;
    double sum=0.0;
    for(int i=0;i<10;i++){
        int e=100/10;
        cout<<i<<'<'<<'r'<<"<="<<(i*10)+10<<'\t'<<(i==9?"":"\t")<<(i+1)<<"\t\t"<<o[i]<<'\t'<<e<<"\t "<<o[i]-e<<"\t\t\t"<<(o[i]-e)*(o[i]-e)<<"\t\t\t"<<(double )((o[i]-e)*(o[i]-e))/e<<endl;
        sum+=(double )((o[i]-e)*(o[i]-e))/e;
    }
    cout<<"Chi Squared= "<<sum;
    return 0;
}