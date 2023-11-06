#include <stdio.h>
#include <stdlib.h>


int main() {
	
	   // KULLANICIDAN YASÝNÝ SORARAK DAKÝKA SAAT SN HESAPLAYAN PROJE
   
   int yas,hafta,gun,saat,dakika,saniye;
   
   printf("Yasiniz: ");
   scanf("%d",&yas);
   
   hafta=yas*52;
   gun=yas*365;
   saat=yas*365*24;
   dakika=yas*365*24*60;
   saniye=yas*365*24*60*60;
   
   printf("Yasadigiz Hafta: %d\n",hafta);
   printf("Yasadiginiz Gun: %d\n",gun);
   printf("Yasadiginiz Saat: %d\n",saat);
   printf("Yasadiginiz Dakika: %d\n",dakika);
   printf("Yasadiginiz Saniye: %d\n",saniye);
   
	return 0;
}
