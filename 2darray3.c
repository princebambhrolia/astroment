
#include<stdio.h>

int main (){
	
	int row;
		int sum=0;
	printf("enter array's Row & col Size :  ");
	scanf("%d",&row);
	int array[row][row];
	for(int i=0;i<row;i++){
		
		for(int j=0;j<row;j++){
			
			printf("a [%d] [%d]= ",i,j);
			scanf("%d",&array[i][j]);
			
		} 
	}

	for(int i=0; i<row; i++){
		for(int j=0; j<row; j++){
			if(i==0 || i==row-1 || j==0 || j==row-1){
				printf("%d ",array[i][j]);
				sum+=array[i][j];
			}else{
				printf("  ");
			}
		}
		printf("\n");
		
	}
	printf("\n The Sum of boundary elements of an array :- %d",sum);
}