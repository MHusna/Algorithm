#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sayi_ata(int random_dizi[40]);								//Diziye random sayi atama fonksiyonumu tanimliyorum.
void bubble_Sort(int random_dizi[40],int elemanSayisi);			//Bubble sort'u tanimliyorum.
void selection_Sort(int random_dizi[40], int elemanSayisi); 	//Selection sort'u tanimliyorum.
void yazdir(int random_dizi[40]);								//Yazdir fonksiyonumu tanimliyorum.
															    
int main(){
	
	int random_dizi[40], elemanSayisi=40;						//Diziyi tanimliyorum.
	sayi_ata(random_dizi);										//Oncelikle diziye eleman atamak icin random fonk. cagirdim.
	bubble_Sort(random_dizi, elemanSayisi);						//Bubble sortu cagiriyorum.
	selection_Sort(random_dizi, elemanSayisi);					//Selection sortu cagiriyorum.
	
}

void sayi_ata(int random_dizi[40]){
																// Diziye random sayi atiyorum.
	int i,rastgele;
	
	srand(time(NULL));
	for(i = 0; i<40;i++){
		
		rastgele = rand()%100;									//Sayilarin sifir ile 100 arasinda olmasini sagliyorum.
		random_dizi[i] = rastgele;
	}
}

void bubble_Sort(int random_dizi[40], int elemanSayisi){
	
	int tutucu, i, j, sayici=0;					  //Gerekli olacak degiskenleri tanimliyorum.
	
	for(i=0;i<elemanSayisi;i++){
		
		for(j=0; j<elemanSayisi-1;j++){
			
			if(random_dizi[j] > random_dizi[j+1]){
				
				tutucu = random_dizi[j];			  //Her adimda mevcut elemani bir sonraki elemanla karsilastiriyoruz.
				random_dizi[j] = random_dizi[j+1];    //Eger bir sonraki eleman mevcut elemandan kucukse swap islemleri yapiyoruz.
				random_dizi[j+1] = tutucu;            //Tutucu burda swap isleminde degerin kaybolmamasi icin bir gecici degisken.
				sayici++;                             //Bubble sort'un ne kadar islemde gerçeklestigini anlamak icin sayici adinda bir
			}                                         //degiskende saydiriyoruz.
			else{
				sayici++;                             //Program if'e de girebilir else bloguna da hangi duruma girerse girsin sayiciyi 
			} 										  //saydirmak zorundayiz.
		}
													 
	}
	
	yazdir(random_dizi);						  			  //Dizimizin siralanmis halini gormek icin yazdir adinda bir fonksiyon yazdim.
	printf("Bubble Sort %d adim kadar calisti.\n\n",sayici); //Dizinin siralanmis halinden sonra kac islem yapildigini yazdiriyorum.
	
}


void selection_Sort(int random_dizi[40], int elemanSayisi){  	//Diziyi bastan sona gezip min elemani bulup dizinin ilk elemanina atiyoruz.
																//Daha sonra diziyi ikinci elemandan baslatip tekrar ayni islemi uyguluyoruz.
	int min, tutucu, i, j, sayici=0;
		
		for(i=0;i<elemanSayisi-1;i++){
			
			min = i;
			
			for(j=i+1; j<elemanSayisi; j++){
			
				if(random_dizi[j] < random_dizi[min]){
			
					min = j;
					
				}
				sayici++;
			}
			
			tutucu = random_dizi[i];
			random_dizi[i] = random_dizi[min];
			random_dizi[min] = tutucu;
			
		}
		
		yazdir(random_dizi);
		printf("Selection Sort %d adim kadar calisti.\n",sayici);
}

void yazdir(int random_dizi[40]){
	
	int i;
	
	for(i=0;i<40;i++){
		
		printf("%d ",random_dizi[i]);
		
	}
	printf("\n");
}
