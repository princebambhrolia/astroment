#include<stdio.h>

int main(){
	
	int row,col;
	printf("Enter The array Row Size :- ");
	scanf("%d",&row);
    printf("Enter The array Col Size :- ");
	scanf("%d",&col);
	
	int a[row][col];
	printf("\n\nEnter array A's Elemernts \n");
	for(int i=0; i<row; i++){
		for(int j=0; j<row; j++){
		printf("a [%d] [%d] = ",i,j);
	 scanf("%d",&a[i][j]);
	 	
		}
	}
	int b[row][col];
	printf("\n\nEnter array B's Elemernts \n");
	for(int i=0; i<col; i++){
		for(int j=0; j<col; j++){
		printf("b [%d] [%d] = ",i,j);
	 scanf("%d",&b[i][j]);
	 	
		}
	}
	int c [row] [col];
	for(int i=0; i<row; i++){
		for(int j=0; j<row; j++){
		c[i][j]=a[i][j]+b[i][j];
		}
	}
		printf("\n");
	for(int i=0; i<row; i++){
		for(int j=0; j<row; j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	
	
}