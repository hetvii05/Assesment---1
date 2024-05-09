#include<stdio.h>
mul(int a[2][2], int b[2][2])    // Give Parameters and Function Defination
{         
	int i,j,k,c[2][2];        
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=0;
			for(k=0;k<2;k++){
				c[i][j]+=a[i][k]*b[k][j];                    
			}
		}
	}
	/*first of all i=0 and j=0 bcz c[i][j]=c[0][0],and next loop k=0 k<2 condition then logic work like c[0][0]+=a[0]*b[0]then
	next loop increment then k will like 1(k=1) and k<2 condition and ligoc will c[0]+=a[0][1]*b[1][0] then next loop increment
	and k will 2(k=2) and k<2 condition and logic will c[0]+=a[0][2]*b[2][0] and then increment and k will 2(k=3) and k<2 
	condition not satisfied bcz this loop will go i=1 and j=1 like this loop will work....
    */
	
	printf("\n-----------Multiplication Matrix-----------\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
main(){
	int x[2][2],y[2][2],i,j;                         
	printf("\n-----------first Matrix-----------\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter numbers : ");
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",x[i][j]);	
		}
    printf("\n");
	}
	printf("\n-----------Second Matrix-----------\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter numbers : ");
			scanf("%d",&y[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",y[i][j]);	
		}
		printf("\n");
	}
	
	mul(x,y);                          //Function Calling and Arguments
}
