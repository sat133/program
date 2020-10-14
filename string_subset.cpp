#include<bits/stdc++.h>
using namespace std;


void powerSet(string str, int ind=0, string curr = "")
{
	int n=str.length();
	if(ind == n)
	{
		cout<<curr<<"\n";
		return;
	}
	powerSet(str, ind+1, curr+str[ind]);
	powerSet(str, ind+1, curr);
}

int main()
{
	freopen("input.txt", "r", stdin);
    freopen("op.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

	string str;
	cin>>str;
	powerSet(str);
	return 0;
}