// SORU EKLEME FONKSİYONU
#define SARI "\x1b[1;33m"
#define KRMZ "\x1b[1;31m"
#define RESET "\x1b[0m"
#define MAVI "\x1b[1;36m"
#define YSL "\x1b[1;32m"

int S=1;// Soru sayısını tutan değişken
struct sorum{
  char soru[120];
  char option_a[120];
  char option_b[120];
  char option_c[120];
  char option_d[120];
  char correct_option[120];
  int id;
}yeni_soru[BUFSIZ];
int counter;

void soru_ekle() {

  printf(SARI"                                        ____________________                                               \n");
  printf("                                       |                    |                                              \n");
  printf("=====================================> | SORU EKLEME EKRANI | <============================================\n");
  printf("                                       |____________________|                                              \n"RESET);

  printf(MAVI"\n%d. Soruyu eklemek için gerekli bilgileri doldurunuz.\n"RESET,S);


  FILE *fp;
  fp = fopen("dosya.txt","a");

  printf(MAVI"Soruyu"RESET" giriniz: ");
  fgets(yeni_soru[S].soru,120,stdin);
  fputs(yeni_soru[S].soru,fp);


  printf(MAVI"A şıkkını"RESET" giriniz: ");
  fgets(yeni_soru[S].option_a,120,stdin);
  fputs(yeni_soru[S].option_a,fp);


  printf(MAVI"B şıkkını"RESET" giriniz: ");
  fgets(yeni_soru[S].option_b,120,stdin);
  fputs(yeni_soru[S].option_b,fp);


  printf(MAVI"C şıkkını"RESET" giriniz: ");
  fgets(yeni_soru[S].option_c,120,stdin);
  fputs(yeni_soru[S].option_c,fp);

  printf(MAVI"D şıkkını"RESET" giriniz: ");
  fgets(yeni_soru[S].option_d,120,stdin);
  fputs(yeni_soru[S].option_d,fp);

  printf(MAVI"Doğru şıkkı"RESET" giriniz: ");
  fgets(yeni_soru[S].correct_option,120,stdin);
  fputs(yeni_soru[S].correct_option,fp);
  fclose(fp);

  yeni_soru[S].id = counter;
  counter++;
  printf(YSL"\n-------> %d. soru başarıyla eklendi!\nAna menüye dönmek için bir tuşa basınız.\n"RESET, yeni_soru[S].id);
  S++;
  getchar();


}
