//Write a C program to print the transpose and inverse matrices of a given matrix.

#include<stdio.h>
int main()
{
	int tra[20][20], row, col, i, j, I[50][50]; 
	float det=0;
	printf("THIS IS FOR PEINTING TRANSTOSE AND INVERSE OF MATRIX\n");
	printf("Enter number of rows and column for finding transpose of matrix: ");
	scanf("%d%d", &row, &col);


	printf("Enter %d array elements:\n",row*col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d", &tra[i][j]);

			//	printf("The transpose of the matrix is:\n");
			//	printf("%d\t", tra[j][i]);
		}
		//	printf("\n");
	}
	printf("The transpose of the matrix is:\n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d\t", tra[j][i]);
		}
		printf("\n");
	}



	//Inverse
	printf("THIS IS FOR PEINTING INVERSE OF MATRIX\n");
	printf("Enter equal number of rows and column for square matrix: ");
        scanf("%d%d", &row, &col);

	printf("Enter %d array elements:\n",row*col);
        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        scanf("%d", &I[i][j]);

                        //      printf("The transpose of the matrix is:\n");
                        //      printf("%d\t", tra[j][i]);
                }
                //      printf("\n");
        }


	if(row==col)
	{
		printf("Printing the inverse of  transpose matrix.\n");
		for(i=0; i<row; i++)
		{
//			printf("%d\t%d\t%d\t%d\t%d\n",tra[0][i],(tra[1][(i+1)%row],tra[2][(i+2)%row], tra[1][(i+2)%row], tra[2][(i+1)%row]));
			det += (I[0][i]*(I[1][(i+1)%row]*I[2][(i+2)%row] - I[1][(i+2)%row]*I[2][(i+1)%row]));
		}
//		printf("%.2f", det);
	

		//
		for(i=0; i<row; i++)
		{
			for(j=0; j<col; j++)
			{
				printf("%.2f\t", ((I[(i+1)% row][(j+1)% row]* I[(i+2)% row][(j+2)% row] - (I[(i+1)% row][(j+2)% row]* I[(i+2)% row][(j+1)% row]))/det));
			}
			printf("\n");
		}
	}
	else
	{
		printf("Enter equal number of rows and column.\n");
	}
	return 0;
}

