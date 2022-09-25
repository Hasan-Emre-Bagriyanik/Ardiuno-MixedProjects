#include <stdio.h>
#include <stdlib.h>
#define SINIF_MEVCUDU 21
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  
    
  int ogrenci_numaralari[SINIF_MEVCUDU]={1,2,3,4,5};
  
  char gecti_kaldi[SINIF_MEVCUDU];
  
  float vize[SINIF_MEVCUDU];
  float final[SINIF_MEVCUDU];
  
  for (int i=0; i<5; i++)
  {
    printf("%d. ogrenci numarasi: %d\n",i+1,ogrenci_numaralari [i]);
  }
  

  return 0;
}
