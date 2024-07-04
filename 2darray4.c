
#include<stdio.h>

int main (){
	
	int row;
	printf("enter array's Row & col Size :  ");
	scanf("%d",&row);
	int array[row][row];
	int sum;
	for(int i=0;i<row;i++){
		
		for(int j=0;j<row;j++){
			
			printf("a [%d] [%d]= ",i,j);
			scanf("%d",&array[i][j]);
			if(i==j){
				sum+=array[i][j];
			}
		} 
	}
	printf("\nThe Sum of diagonal element of an array :- %d",sum);				 				 
}