// max element in a row

#include<iostream>
using namespace std;
int  m = 3;
int  n = 3;

void display(int result[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		cout << result[i] << " "<<endl;
	}
}

void max(int mat[3][3], int m, int n)
{
	int i = 0;
	int max = 0;
	int result[m];
	while (i < m)
	{
		for ( int j = 0; j < n; j++)
		{
			if (mat[i][j] > max)
			{
			max = mat[i][j];
			}
		}
	result[i] = max;
	max = 0;
	i++;	
	}
	display(result, m);
}
int main()
{
	int i, j;
	int mat[3][3]={
					{1,2,3},
					{4,5,6},
					{7,8,9},
				  };
	max(mat,m,n);
	return 0;
}
