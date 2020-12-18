#include<stdio.h>

int main(){
	
	int toplam=0, i=0;
	
	for(i=0;i<1000;i++){
		
		if(i%3 == 0 || i%5 == 0){
			
			toplam+= i;
			
		}
		else{
			i++;
		}
	}
	
	printf("Toplam: %d",toplam);
	
}
