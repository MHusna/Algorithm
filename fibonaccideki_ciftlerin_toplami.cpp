#include<stdio.h>

int main(){
	
	int i=0,f=1,s=1,t=0,toplam=0;
	
	for(i=0;i<4000000;i++){
		
		t = f+s;
		f = s;
		s = t;
		
		if(t%2 == 0){
			
			toplam+=t;
		}		
	}
	
	printf("Toplam: %d",toplam);
}
