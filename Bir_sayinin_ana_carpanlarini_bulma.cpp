#include<stdio.h>

int main(){

	int i,sayi=50;
//	printf("Sayi: "); scanf("%d",&sayi);
	
	
	for(i=1;i<=sayi;i++){
		
		if(sayi%i == 0){
			
			if(i == 1 || i == sayi){
				
				printf("");
				
			}
			
			else{
				
				printf("%d ",i);
			} 
			 
			
		}
	}
}
