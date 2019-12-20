#define SARI "\x1b[1;33m"
#define KRMZ "\x1b[1;31m"
#define RESET "\x1b[0m"
#define MAVI "\x1b[1;36m"
#define YSL "\x1b[1;32m"

void karsilama_ekrani(){

	printf(MAVI"########################################################################"RESET"\n\n\n");

  printf(SARI"\t\tSORU SORMA/CEVAPLAMA PROGRAMINA HOŞ GELDİNİZ\n\n\n"RESET);
  printf(KRMZ"Devam etmek için bir tuşa basınız...\n"RESET);
  printf(MAVI"########################################################################"RESET"\n\n");
  getchar();



}
