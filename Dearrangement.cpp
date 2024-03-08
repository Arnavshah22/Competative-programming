#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	map<int,int>freq;
	vector<pair<int,int>>a;
	
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		freq[x]++;
		a.push_back(make_pair{x,i});
		
	}
	//find the element with max frequency
	int max_freq=0;
	for(auto it=freq.begin();it!=freq.end();it++){
		if(it->second > max_freq){
			max_freq=it->second;
			
		}
		
	}
	//do the process
	sort(a.begin(),a.end());
	auto b=a;
	//shift b by max_freqposition to right
	for(int i=0;i<n;i++){
		b[(i+max_freq)%n]=a[i];
		
	}
	int final_answer[n];
	for(int i=0;i<n;i++){
		final_answer[a[i].second]=b[i].first;
	}
	for(int i=0;i<n;i++){
		cout<<final_answer[i]<<"\n";
		
	}
} 