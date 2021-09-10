//Check Boundary elements in matrix

#include<iostream>
#define N 3
using namespace std;

void boundary(int mat[N][N])
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
		if (i == 0 || j == 0 || i == N - 1 || j == N - 1) 
		cout << mat[i][j] << " ";
		 else
                cout << " ";
        }      

    }
}
int main()
{
	int mat[N][N]={
					{1,2,3},
					{4,5,6},
					{7,8,9},
				  };	
	boundary(mat);
	return 0;
	
}
