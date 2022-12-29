
#include <bits/stdc++.h>
using namespace std;

int MatrixChainOrder(int p[], int i, int j)
{
	if (i == j)
		return 0;
	int k;
	int mini = INT_MAX;
	int count;

	
	for (k = i; k < j; k++)
	{
		count = MatrixChainOrder(p, i, k)
				+ MatrixChainOrder(p, k + 1, j)
				+ p[i - 1] * p[k] * p[j];

		mini = min(count, mini);
	}

	
	return mini;
}


int main()
{
    int n;
    cout<<"Enter the number of matrices : ";
    cin>>n;
	int arr[n+1];
    cout<<"Enter the order of matrices \n";
    for(int i=0;i<n+1;i++)
        cin>>arr[i];
	int N = n+1;

	cout << "Minimum number of multiplications is "
		<< MatrixChainOrder(arr, 1, N - 1);
	return 0;
}

