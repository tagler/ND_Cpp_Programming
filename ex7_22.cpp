// ex7-22

/*--------------------------------------------------------------------*/
/*  Det Function chapter7_22                                          */
/*                                                                    */
/*  This function computes the minors of a square matrix              */
/*  with 4 rows and 4 columns.                                        */

#include <iostream>
using namespace std;

const int N=4;

/* Declare function prototypes */
double minor1(double a[][N], int i, int j);

double det3(double b[3][3])
{
return b[0][0]*b[1][1]*b[2][2] + b[0][1]*b[1][2]*b[2][0]
             + b[0][2]*b[1][0]*b[2][1] - b[2][0]*b[1][1]*b[0][2]
             - b[2][1]*b[1][2]*b[0][0] - b[2][2]*b[1][0]*b[0][1];
}

int main()
{
   /*  Declare variables */
   int i, j, M, row=0;
   double a[N][N];

   cout << "Compute the minors of 4x4 matrx. " << endl;
   for (i = 0; i<=N-1; i++)
      {
      cout << "Enter the row" << i+1 << " of the matrix: " << endl;
      for (j = 0; j<=N-1; j++)
         cin >> a[i][j];
      }

   cout << "Enter a row number for the minors to be computed: " << endl;
   cin >> M;

   /*  Compute minors.  */
   for (j=0; j<N; j++)
      cout << " Minor at (" << M << ',' << j+1 << ") is : "
           <<  minor1(a, M-1, j) << endl;
  // The index for row M is M-1, the index j corresponds to column j+1

   return 0;
}

/*--------------------------------------------------------------------*/
/*  Function chapter7_22                                              */
/*                                                                    */
/*  This function computes the minor of a square matrix               */
/*  with four rows and four columns.                                  */

double minor1(double a[][N], int i, int j)
{
	// declare variables
	double temp[9], b[3][3];
	int n(0);

	// make 3x3 matrix from 4x4 matrix excluding the ith row and jth column
	// first puts values into 1-d array, then puts it in a 3x3 matrix
	for (int r=0; r<4 ; r++)
		{
		if(i != r)
 			{
			for (int c=0; c<4; c++)
				{
				if(j != c)
					{
						temp[n] = a[r][c];
						n++;
					}
				}
			}
		}
	n=0;
	for (int r=0 ; r<3 ; r++)
	{
		for (int c=0 ; c<3 ; c++)
		{
			b[r][c] = temp[n];
			n++;
		}
	}

return det3(b);  // replace this line with your code
}
/*--------------------------------------------------------------------*/
