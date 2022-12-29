
#include <bits/stdc++.h>
using namespace std;


int max(int a, int b) { return (a > b) ? a : b; }


int knapSack(int W, int wt[], int val[], int n)
{

	// Base Case
	if (n == 0 || W == 0)
		return 0;

	
	if (wt[n - 1] > W)
		return knapSack(W, wt, val, n - 1);

	
	else
		return max(
			val[n - 1]
				+ knapSack(W - wt[n - 1], wt, val, n - 1),
			knapSack(W, wt, val, n - 1));
}


int main()
{
    int n1;
    cout<<"Enter the number of items : ";
    cin>>n1;
	int val[n1];
    int wt[n1];
    cout<<"Enter the values \n";
    for(int i=0;i<n1;i++)
        cin>>val[i];
    cout<<"Enter the weight in the same order : \n";
    for(int i=0;i<n1;i++)
        cin>>wt[i];
	int W;
    cout<<"Enter the knapsack capacity : ";
    cin>>W;
	int n = n1;
	cout << knapSack(W, wt, val, n);
	return 0;
}


