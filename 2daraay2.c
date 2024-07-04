#include<stdio.h>

int main (){
	
	int row;
	
	int total=0;
	printf("enter array size:  ");
	scanf("%d",&row);
	
	int array[row][row];
	for(int i=0;i<row;i++){
		
		for(int j=0;j<row;j++){
			
			printf("a [%d] [%d]= ",i,j);
			scanf("%d",&array[i][j]);
		} 
		printf("\n");
	}
					 
					
	
	for(int i=0;i<row;i++){
		
		for(int j=0;j<row;j++){
			
			total+=array[i][j];
		}
		
		
		
	}
		int element=row*row;	
		float average=(float)total/element;
		
		printf("the average element %.2f",average);	 
					 
}
