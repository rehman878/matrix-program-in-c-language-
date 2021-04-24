#include <stdio.h>


int main() 
{
	int operation,row,col,k;
	int a[3][3],b[3][3],result[3][3];
	
	
		///code for operation starts .
		
	printf(" which operation you want to perform ? \n ");
	printf("Press 1 for Addition of two matrix .\n");
	printf("Press 2 for Multiplication of two matrix .\n");
	scanf("%d",&operation);
	
	
		///code for operation Ends.
		
		
		
		///code for addition of matrix starts .
	
	if(operation==1){
		
		
			///code for matrix A starts for addition.
			
			
		printf("enter the value of matrix A (3x3) .\n");	
		for(row=0; row<3 ; row++){
			for(col=0; col<3; col++){
				scanf("%d",&a[row][col]);
			}
		}
		
		
			///code for matrix A ends for addition.	
		
		
		
			///code for matrix B starts for addition.
		printf("enter the value of matrix B (3x3) .\n");	
		for(row=0; row<3 ; row++){
			for(col=0; col<3; col++){
				scanf("%d",&b[row][col]);
			}
		}	
		
		
			///code for matrix B Ends for addition.
			
			
			///code for result of matrix A and B for addition starts.
		
		printf("\n\n\n\t\tThe Addition of matrix A and B is .\n\n\n");	
		for(row=0; row<3 ; row++){
			printf("\t\t\t");
			for(col=0; col<3; col++){
				result[row][col]=a[row][col]+b[row][col];
				printf("%d \t",result[row][col]);
			}
			printf("\n");
		}
			///code for result of matrix A and B for addition ends.
			
	}
	
	
		///code for addition of matrix ends .
		

			///code for Multiplication of matrix starts .

		if(operation==2){
			
	
			///code for matrix A starts for multiplication.
			
			
		printf("enter the value of matrix A (3x3) .\n");	
		for(row=0; row<3 ; row++){
			for(col=0; col<3; col++){
				scanf("%d",&a[row][col]);
			}
		}
		
		
			///code for matrix A ends for multiplication.	
		
		
		
			///code for matrix B starts for multiplication.
		printf("enter the value of matrix B (3x3) .\n");	
		for(row=0; row<3 ; row++){
			for(col=0; col<3; col++){
				scanf("%d",&b[row][col]);
			}
		}	
		
		
			///code for matrix B Ends for multiplication.
			
			
		///code for result of multipliucation of matrix a and b starts.
		
			printf("\n\n\n\t\tThe Product of matrix A and B is .\n\n\n");	
		for(row=0;row<3;row++){    
			for(col=0;col<3;col++)    
				{    
				result[row][col]=0;    
				for(k=0;k<3;k++)    
				{    
			result[row][col]+=a[row][k]*b[k][col];  
			}    
			}    
			}	
			
			for(row=0; row<3 ; row++){
			printf("\t\t\t");
			for(col=0; col<3; col++){
				printf("%d \t",result[row][col]);
			}
			printf("\n");
		}
		///code for result of multipliucation of matrix a and b ends.
		
	}
	
		///code for Multiplication of matrix Ends .
	
	
	return 0;
}
