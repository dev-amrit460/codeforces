#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long b;
	cin>>b;
	unordered_map<long long,long long>mp;
	for(long long i=1;i*i<=b;i++){
	    if(b%i==0){
	        mp[i]++;
	        mp[b/i]++;
	    }
	}
	std::cout << mp.size() << std::endl;
	return 0;
}
