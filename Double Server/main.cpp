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
#define printAble cout<<"CustomerNumber: "<<it+1<<"|"<<"IAT-RN: "<<iatRN[it]<<"|"<<"Clock: "<<clk[it]<<"|"<<"ST-RN: "<<serviceTimeRN[it]<<"|"<<"Able-ST-Begin: "<<ab.begin<<"|"<<"Able-ST: "<<ab.serviceTime<<"|"<<"Able-ST-End: "<<ab.end<<"|"<<"Baker-ST-Begin: "<<"-"<<"|"<<"Baker-ST: "<<"-"<<"|"<<"Baker-ST-End: "<<"-"<<"|"<<"QueueingTime: "<<sys.queueingTime<<"|"<<"TimeSpent: "<<sys.timeSpent<<"|"<<"AbleIdle: "<<ab.idle<<"|"<<"BakerIdle: "<<"-"<<"|"
#define printBaker cout<<"CustomerNumber: "<<it+1<<"|"<<"IAT-RN: "<<iatRN[it]<<"|"<<"Clock: "<<clk[it]<<"|"<<"ST-RN: "<<serviceTimeRN[it]<<"|"<<"Able-ST-Begin: "<<"-"<<"|"<<"Able-ST: "<<"-"<<"|"<<"Able-ST-End: "<<"-"<<"|"<<"Baker-ST-Begin: "<<bk.begin<<"|"<<"Baker-ST: "<<bk.serviceTime<<"|"<<"Baker-ST-End: "<<bk.end<<"|"<<"QueueingTime: "<<sys.queueingTime<<"|"<<"TimeSpent: "<<sys.timeSpent<<"|"<<"AbleIdle: "<<"-"<<"|"<<"BakerIdle: "<<bk.idle<<"|"

///
int serviceTimeRN[100],iatRN[100];
void generateRN(){
    loop(0,100){
        serviceTimeRN[i]=(rand()%100);
        iatRN[i]=(rand()%100);
    }
}
///Section Test Case
//int iatRN[]={0,26,98,90,26,42,74,80,68,22,48,34,45,24,34,63,38,80,42,56,89,18,51,71,16,92};
//int serviceTimeRN[]={95,21,51,92,89,38,13,61,50,49,39,53,88,01,81,53,81,64,01,67,01,47,75,57,87,47};
///
vector<pair<int,int>>able,baker,iat;
void assignRN(){

    cout<<"Enter number of iat times"<<endl;
    int n;cin>>n;
    cout<<"Enter iat time in minute and its probabilty ";
    int yold=0;
    loop(0,n){
        int x;double y;cin>>x>>y;
        y*=(int)100;
        yold+=y;
        iat.pb({x,yold-1});
    }
    ///
    cout<<"Enter number of able times"<<endl;
    cin>>n;
    cout<<"Enter able time in minute and its probabilty ";
    yold=0;
    loop(0,n){
        int x;double y;cin>>x>>y;
        y*=(int)100;
        yold+=y;
        able.pb({x,yold-1});
    }
    ///
    cout<<"Enter number of baker times"<<endl;
    cin>>n;
    cout<<"Enter baker time in minute and its probabilty ";
    yold=0;
    loop(0,n){
        int x;double y;cin>>x>>y;
        y*=(int)100;
        yold+=y;
        baker.pb({x,yold-1});
    }
}
///
vector<int> clk;
void iatToClock(){
    int a=0;
    loop(0,25){
        loopj(0,iat.size()){
            if(iatRN[i]<=iat[j].second){
                a=iat[j].first;break;
            }
        }
        if(i==0)clk.pb(0);
        else clk.pb(a+clk.back());
    }
}
struct Baker{
    int serviceTime=0,begin=0,end=0,idle=0;
};
struct Able{
    int serviceTime=0,begin=0,end=0,idle=0;
};
struct System{
    int queueingTime=0,timeSpent=0,ct=0;
};
///
map<int,int>bakerMap,ableMap;
void mapRandomNumbers(){
    loop(0,baker.size()){
        int n;
        if(i==0)n=0;
        else n=able[i-1].second;
        loopj(n,baker[i].second+1){
            bakerMap[j]=baker[i].first;
        }
    }
    loop(0,able.size()){
        int n;
        if(i==0)n=0;
        else n=able[i-1].second;
        loopj(n,able[i].second+1){
            ableMap[j]=able[i].first;
        }
    }
}
///
void solve(){
    Baker bk;Able ab;System sys;
    int it=0;
    while(sys.ct<=60){

        if(bk.end<=clk[it]||bk.end<=ab.end){
            if(clk[it]<bk.end)sys.queueingTime=bk.begin-clk[it];
            bk.begin=max(clk[it],bk.end);
            bk.serviceTime=bakerMap[serviceTimeRN[it]];
            bk.idle=bk.begin-bk.end;
            bk.end=bk.begin+bk.serviceTime;
            sys.queueingTime=bk.begin-clk[it];
            sys.timeSpent=bk.serviceTime+sys.queueingTime;
            printBaker;
        }

        else{
            if(clk[it]<ab.end)sys.queueingTime=ab.begin-clk[it];
            ab.begin=max(clk[it],ab.end);
            ab.serviceTime=ableMap[serviceTimeRN[it]];
            ab.idle=ab.begin-ab.end;
            ab.end=ab.begin+ab.serviceTime;
            sys.queueingTime=ab.begin-clk[it];
            sys.timeSpent=ab.serviceTime+sys.queueingTime;
            printAble;
        }

        it++;
        sys.ct=min(ab.end,bk.end);
        cout<<endl<<endl;
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
    assignRN();
    iatToClock();
    mapRandomNumbers();
    cout<<endl<<endl;
    solve();
    return 0;
}