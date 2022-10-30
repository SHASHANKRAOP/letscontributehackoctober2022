#include<bits/stdc++.h>
using namespace std;

vector<bool> vst;
vector<vector<pair<int,int>>> tree;
priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq;

void dfs(vector<pair<int,int>> v[],int at){
	vst[at]=true;
	for(auto to : v[at]){
		if(!vst[to.first]){
			pq.push(make_tuple(to.second,at,to.first));
		}
	}
	int nxt,wt,from;

	tie(wt,from,nxt)=pq.top();
	
	if(!vst[nxt])
	tree[from].push_back({nxt,wt});

	pq.pop();

	if(pq.size())
	dfs(v,nxt);
}

void prims_mst(vector<pair<int,int>> v[],int n){
	dfs(v,0);
	// The Minimum Spanning Tree formed is
	cout<<"\nMinimum Spanning Tree\n";
	int sum=0;
	for(int i=0;i<n;i++){
		cout<<i+1<<" : ";
		for(auto it : tree[i]){
			cout<<"{"<<it.first+1<<","<<it.second<<"} ";
			sum+=it.second;
		}
		cout<<"\n";
	}
	cout<<"\nSum : "<<sum;
}

int main(){
	int n;
	cout<<"Enter # of nodes : ";
	cin>>n;
	vst.resize(n,false);
	tree.resize(n);
	vector<pair<int,int>> adj[n];

	//Inputting the weighted graph
	// In form of v1: {v2,wt}, {v3,wt}
	// Enter {v2,wt} as 0 0 
	// to end the sequence of adding nodes.
	cout<<"Enter node connected each node:\n";
	for(int i=0;i<n;i++){
		cout<<i+1<<" : ";
		int u,wt;
		while(1){
			cin>>u>>wt;
			if(!u) break;
			if(u>n) continue;
			// u--;
			adj[i].push_back({u-1,wt});
		}
	}
	// Now we have a directed graph
	// Displaying the graph
	cout<<"\nGRAPH\n";
	for(int i=0;i<n;i++){
		cout<<i+1<<" : ";
		for(auto it: adj[i]){
			cout<<"{"<<it.first+1<<","<<it.second<<"} ";
		}
		cout<<"\n";
	}
	prims_mst(adj,n);
	return 0;
	// SAMPLE RUN
	// Enter # of nodes : 4
	// Enter node connected each node:
	// 1 : 2 4 3 3 0 0
	// 2 : 4 3 1 4 0 0
	// 3 : 1 3 4 5 0 0
	// 4 : 2 3 3 5 0 0
	// Graph ...
	// MST ...
	// Sum: 10
}
