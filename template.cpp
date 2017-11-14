/*
	tips:
		* (vector) Never passed a vector as parameters, this have to pass as reference
			- int v1 = *max_element(v.begin(),v.end()); returns value of max element in vector
			- int v2 = min_element(v.begin(),v.end())-v.begin(); returns index of min element in vector
		* (array)
			- int v1 = *max_element(v,v+size); returns value of max element in vector
			- int v2 = min_element(v,v+size)-v; returns index of min element in vector

		* (iterator) In STL iterators are the most general way to access data in containers 
			- for(vector<int>::iterator it = v.begin(); it!=v.end(); it++) 
			- 	*it++;
		* (iterator) In the comparison "it!=v.end()" use always "!=" instead of "<"

*/

#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vii;
typedef pair<int, int> ii;
typedef set<int> si;
typedef set<string> ss;
typedef map<int,int> mii;
typedef map<int, string> mis;
typedef map<string, int> msi;
typedef long long ll;


#define ci1(x) cin>>x;
#define ci2(x,y) cin>>x>>y;
#define co(x) cout<<":) "<<x<<endl;
#define mkp make_pair
#define pb push_back
#define sz(a) int((a).size())
#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(), c.rend() 
#define maxc(c) max_element(all(c)) - c.begin() /*max element(return the index index) of a container*/
#define minc(c) min_element(all(c)) - c.begin() /*min element(return the index index) of a container*/
#define fl(x , N)\
		for(int x = 0 ; x < N ; i++) /*accending loop 'for'*/
#define fr(x , N)\
		for(int x = N-1 ; x >=0 ; i--) /*deccending loop 'for'*/
#define tr(container, it)\
		for(auto it: container) /*travel each element of any container*/
#define printc(container)\
		for(auto a: container)\
			cout<<a<<" ";\
		cout<<endl; /*print elements of any container*/

int main(){
}
