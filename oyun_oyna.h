#define SARI "\x1b[1;33m"
#define KRMZ "\x1b[1;31m"
#define RESET "\x1b[0m"
#define MAVI "\x1b[1;36m"
#define YSL "\x1b[1;32m"

int i=0;
int yeni_puan=0;

void oyun_oyna(char kullaniciAdi[]) {

int z;
int puan=0;
char cevap;

for(int sayac=0; sayac<5; sayac++) {

  srand(time(NULL));
  z= 1+(rand()%S-1);


  printf("\n%d. soru: %s",sayac+1,yeni_soru[z].soru);
  printf("A- %s",yeni_soru[z].option_a);
  printf("B- %s",yeni_soru[z].option_b);
  printf("C- %s",yeni_soru[z].option_c);
  printf("D- %s",yeni_soru[z].option_d);
  printf("Cevabınızı giriniz:");
  scanf("%s", &cevap);


  if(cevap=='A') {
    if(!strcmp(yeni_soru[z].correct_option,yeni_soru[z].option_a)) {
    printf(YSL"Doğru cevap! "RESET);
    yeni_puan ++;
    puan++;
    
  }
  	else
  		printf(KRMZ"Yanlış Cevap"RESET);
  	
  }
  else if(cevap=='B') {
    if(!strcmp(yeni_soru[z].correct_option,yeni_soru[z].option_b)) {
    printf(YSL"Doğru cevap! "RESET);
    yeni_puan ++;
    puan ++;
  }
  	else
  		printf(KRMZ"Yanlış Cevap"RESET);
  	
  }
  else if(cevap=='C') {
    if(!strcmp(yeni_soru[z].correct_option,yeni_soru[z].option_c)) {
    printf(YSL"Doğru cevap! "RESET);
    yeni_puan ++;
    puan ++;
  }
  	else
  		printf(KRMZ"Yanlış Cevap"RESET);
  	
  }
  else if(cevap=='D') {
    if(!strcmp(yeni_soru[z].correct_option,yeni_soru[z].option_d)) {
    printf(YSL"Doğru cevap! "RESET);
    yeni_puan ++;
    puan ++;
  }
  	else
  		printf(KRMZ"Geçersiz bir değer girdiniz. Cevap yanlış sayılacaktır."RESET);
  	
  }
  printf("%d\n",yeni_puan);
}
// Kullanıcı adını ve puanı dosyaya yazma işlemi

    FILE *f;
    f = fopen("Skorlar.txt","a");

  printf(SARI"Tebrikler %s!\n"RESET,kullaniciAdi);
  printf(SARI"Puanınız %d.\n"RESET,yeni_puan);


  fprintf(f,"%s: %d\n",kullaniciAdi,yeni_puan);
  fclose(f);

  i++;

  printf(MAVI"Ana menüye dönmek için bir tuşa basınız..\n"RESET);
  getchar();
  getchar();
}
