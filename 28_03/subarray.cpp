#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); //tat dong bo giup chuong trinh chay nhanh hon
	int N;
	cin >> N;
	int a[100], b[99], c[99];
	for (int i=0; i<N; i++)
	{
		cin >> a[i];
		if (i>0 && i<N-1) b[i]=min(a[i], b[i-1]);
		else if (i==0) b[0]=a[0];
	}
	reverse (a, a+N);
	for (int i=0; i<N; i++)
	{
		if (i>0 && i<N-1) c[i]=max(a[i], c[i-1]);
		else if (i==0) c[0]=a[0];
	}
	reverse (c, c+N-1);
	int S=-1e9;
	for (int i=0; i<N-1; i++)
	{
		S=max(S,c[i]-b[i]);
	}
	cout << S;
}