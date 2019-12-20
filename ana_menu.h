// ANA MENÜ FONKSİYONU
#define SARI "\x1b[1;33m"
#define KRMZ "\x1b[1;31m"
#define RESET "\x1b[0m"
#define MAVI "\x1b[1;36m"
#define YSL "\x1b[1;32m"

int islem_sec;

void ana_menu() {


	printf(SARI"                                        ____________________                                               \n");
  printf("                                       |                    |                                              \n");
  printf("=====================================> |      ANA MENÜ      | <============================================\n");
  printf("                                       |____________________|                                              \n"RESET);

	printf(MAVI"\nYapmak istediginiz islemi seciniz.\n"RESET);
	printf(SARI"1 ☛  Soru ekle\n2 ☛  Soru sil\n3 ☛  Soruları göster ve güncelle\n4 ☛  Oyun oyna\n5 ☛  En yüksek skorları göster.\n6 ☛  Çık\n"RESET);
	printf(SARI"Seçiminiz: "RESET);
	scanf("%d", &islem_sec);
	getchar();

}
