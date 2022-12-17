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
//int lifeTimeRN[100];
//void generateRN(){
//    loop(0,100){
//        lifeTimeRN[i]=(rand()%10);
//    }
//}
int lifeTimeBegin=0,lifeTimeEnd=0,costTube=0,shutDownCost=0,hrs=0;
void input(){
    cout<<"Enter lifeTime begin, lifeTime end, cost of one tube, shutdown cost, and hours of simulation "<<endl;
    cin>>lifeTimeBegin>>lifeTimeEnd>>costTube>>shutDownCost>>hrs;
}
///Test Case
int lifeTimeRN[]={8, 2, 6, 3, 1, 3, 0, 8, 9, 2,8, 3, 7, 4, 8, 5 ,6 ,0 ,4, 9};
///
#define print cout<<clock<<" | "<<t.tubes[0]<<" | "<<t.tubes[1]<<" | "<<t.tubes[2]<<" | "<<t.tubes[3]<<" | "<<t.replaced
///
struct tube{
    int tubes[4]={(lifeTimeRN[0]*100)+lifeTimeBegin,(lifeTimeRN[1]*100)+lifeTimeBegin,(lifeTimeRN[2]*100)+lifeTimeBegin,(lifeTimeRN[3]*100)+lifeTimeBegin};
    int replaced=1;
    int mn=min(tubes[0],min(tubes[1],min(tubes[2],tubes[3])));
    int newMin(){
        return min(tubes[0],min(tubes[1],min(tubes[2],tubes[3])));
    }
};
int it = 4;
void solve(){
    int clock=0;
    tube t;
    cout<<"Clock"<<" | "<<"T1"<<" | "<<"T2"<<" | "<<"T3"<<" | "<<"T4"<<" | "<<"Replaced"<<endl;
        print<<endl;
    while(clock<hrs){
        clock+=t.mn;
        t.replaced=0;
        for(int i=0;i<4;i++){
            t.tubes[i]-=t.mn;
            if(t.tubes[i]==0){
                t.replaced++;
                t.tubes[i]=(lifeTimeRN[it]*100)+lifeTimeBegin;
                it++;
            }
        }
        print<<endl;
        t.mn=t.newMin();
    }
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(0);std::ios::sync_with_stdio(false);cout.tie(0);

    srand(time(NULL));
//    generateRN();
    input();
    solve();
    return 0;
}