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
        rn[i]=(rand()%10);
    }
}
map<int,char> rnMap;
void assignRN(){
    cout<<"Enter Probability of Forward, Left, Right: ";
    int f,l,r;cin>>f>>l>>r;
    l+=f;r+=l;
    int i=0;
    for(i;i < f/10;i++)rnMap[i]='f';
    for(i;i < l/10;i++)rnMap[i]='l';
    for(i;i < r/10;i++)rnMap[i]='r';
}
void solve(){
    int x=0,y=0;
    for(int i=0;i<100;i++){
        if(rnMap[rn[i]]=='f')y++;
        else if (rnMap[rn[i]]=='r')x++;
        else x--;
        cout<<"Step: "<<i+1<<" RandomNumber: "<<rn[i]<<" Direction: "<<rnMap[rn[i]]<<" X: "<<x<<" Y: "<<y<<endl;
    }
}
///
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(0);std::ios::sync_with_stdio(false);cout.tie(0);

    srand(time(NULL));
    generateRN();
    assignRN();
    cout<<endl;
    solve();
    return 0;
}