#include<bits/stdc++.h>
using namespace std;
const int N=100005;
int n,k,t[N],a[N],b[N],ans[N],cu[105],cd[105],cntD[105];
priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>>up[105],dn[105];
vector<int>ob;
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)scanf("%d%d%d",&t[i],&a[i],&b[i]);
	int wh=0,wl=101,omx=0,omn=101,p=1,pos=1,dir=0,done=0;
	long long s=1;
	auto updm=[&](int x){return omx>x||wh>x||cu[x]>0;};
	auto dndm=[&](int x){return omn<x||wl<x||cd[x]>0;};
	auto recalc=[&](){
		omx=0;omn=101;
		for(int id:ob){omx=max(omx,b[id]);omn=min(omn,b[id]);}
	};
	auto board=[&](int x,int d){
		auto&q=(d==1?up[x]:dn[x]);
		while((int)ob.size()<k&&!q.empty()){
			int id=get<2>(q.top());q.pop();
			ob.push_back(id);
			(d==1?cu[x]:cd[x])--;
			cntD[b[id]]++;
			omx=max(omx,b[id]);omn=min(omn,b[id]);
		}
		if(cu[x]+cd[x]==0){
			if(wh==x)while(wh>0&&cu[wh]+cd[wh]==0)wh--;
			if(wl==x)while(wl<=100&&cu[wl]+cd[wl]==0)wl++;
		}
	};
	while(done<n){
		while(p<=n&&t[p]<=s){
			int f=a[p];
			if(b[p]>f){up[f].push({t[p],abs(a[p]-b[p]),p});cu[f]++;}
			else{dn[f].push({t[p],abs(a[p]-b[p]),p});cd[f]++;}
			wh=max(wh,f);wl=min(wl,f);
			p++;
		}
		if(dir&&cntD[pos]){
			int w=0;
			for(int id:ob){
				if(b[id]==pos){ans[id]=(int)s;done++;}
				else ob[w++]=id;
			}
			ob.resize(w);
			cntD[pos]=0;
			recalc();
		}
		bool mv=false;
		if(dir==1){
			if(updm(pos)){board(pos,1);mv=true;}
			else dir=0;
		}else if(dir==-1){
			if(dndm(pos)){board(pos,-1);mv=true;}
			else dir=0;
		}else{
			if(updm(pos)){board(pos,1);dir=1;mv=true;}
			else if(dndm(pos)){board(pos,-1);dir=-1;mv=true;}
		}
		if(mv){pos+=dir;s++;}
		else if(dir==0&&wh==0&&ob.empty()){
			if(p<=n)s=max(s+1,(long long)t[p]);
			else break;
		}else s++;
	}
	for(int i=1;i<=n;i++)printf("%d%c",ans[i]," \n"[i==n]);
	return 0;
}
