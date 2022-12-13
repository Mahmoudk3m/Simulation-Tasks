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
int demandRN[100],leadRN[100];
void generateRN(){
    loop(0,100){
        demandRN[i]=(rand()%100);
        leadRN[i]=(rand()%10);
    }
}
///Section Test Case
//int demandRN[]={24,35,65,81,54,03,87,27,73,70,47,45,48,17,9};
//int leadRN[]={5,0,3};
///
vector<pair<int,int>>lead,demand;
void assignRN(){

    cout<<"Enter number of demand times"<<endl;
    int n;cin>>n;
    cout<<"Enter demand time and its probability ";
    int yold=0;
    loop(0,n){
        int x;double y;cin>>x>>y;
        y*=(int)100;
        yold+=y;
        demand.pb({x,yold-1});
    }
    ///
    cout<<"Enter number of lead times"<<endl;
    cin>>n;
    cout<<"Enter lead time and its probabilty ";
    yold=0;
    loop(0,n){
        int x;double y;cin>>x>>y;
        y*=(int)10;
        yold+=y;
        lead.pb({x,yold-1});
    }
}
///
map<int,int>demandMap,leadMap;
void mapRandomNumbers(){
    int j=0;
    loop(0,demand.size()){
        for(j;j<demand[i].second+1;j++){
            demandMap[j]=demand[i].first;
        }
    }
    j=0;
    loop(0,lead.size()){
        for(j;j<lead[i].second+1;j++){
            leadMap[j]=lead[i].first;
        }
    }
}
///
#define print cout<<"Day: "<<i+1<<"|"<<"InventoryBegin: "<<inv.begin<<"|"<<"Demand-RN: "<<demandRN[i]<<"|"<<"Demand: "<<demandMap[demandRN[i]]<<"|"<<"InventoryEnd: "<<inv.end<<"|"<<"Shortage: "<<inv.shortage<<"|"
///
struct inventory{
    int begin=0,end=0,shortage=0,orderQuantity=0,daysTillOrderArrives=0;
};

void solve(){
    cout<<"Enter capacity of storage , cycle size , number of cycles , the starting quantity, initial order ,and Days untill first order arrive"<<endl;
    inventory inv;
    int m,n,c;cin>>m>>n>>c>>inv.begin>>inv.orderQuantity>>inv.daysTillOrderArrives;
    cout<<endl<<endl;
    int t=n*c;
    int it=0;
    loop(0,t){
        inv.shortage=0;
        if(inv.daysTillOrderArrives==-1){
            inv.begin+=inv.orderQuantity;
        }
        inv.end=inv.begin-demandMap[demandRN[i]];
        if(inv.end<0){
            inv.shortage=abs(inv.end);
            inv.end=0;
        }
        if(i==0||(i+1)%n!=0)print <<"OrderQuantity: "<<'-'<<"|"<<"LeadRN: "<<'-'<<"|";
        else print;
        if((i+1)%n==0){
            inv.daysTillOrderArrives=leadMap[leadRN[it]];
            inv.orderQuantity=m-inv.end;
            cout<<"OrderQuantity: "<<inv.orderQuantity<<"|"<<"LeadRN: "<<leadRN[it]<<"|";
            it++;
        }
        if(inv.daysTillOrderArrives>=0){
            cout<<"DaysTillOrderArrive: "<<inv.daysTillOrderArrives<<endl;
        }
        else cout<<"DaysTillOrderArrive: "<<'-'<<endl;
        inv.daysTillOrderArrives--;
        inv.begin=inv.end;
        cout<<endl;
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
    mapRandomNumbers();
    solve();
//    for(auto it:demandMap)cout<<it.first<<" "<<it.second<<endl;
    return 0;
}