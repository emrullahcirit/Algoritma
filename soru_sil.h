#define SARI "\x1b[1;33m"
#define KRMZ "\x1b[1;31m"
#define RESET "\x1b[0m"
#define MAVI "\x1b[1;36m"
#define YSL "\x1b[1;32m"

void soru_sil()
{
	printf("                                        ____________________                                               \n");
	printf("                                       |                    |                                              \n");
	printf("=====================================> | SORU SILME EKRANI  | <============================================\n");
	printf("                                       |____________________|                                              \n");

	int noSilinen = 0;


/*	if(S<2) {
		printf(KRMZ"Soru bulunamadı.\n Ana menüye dönmek için bir tuşa basınız..."RESET);
		getchar();
		system("clear||cls");
		system("clear||cls");
		ana_menu();

	} */



		for(int i=1; i<S; i++) {

    printf(MAVI"\n%d. soru:"RESET" %s",i, yeni_soru[i].soru); }


		printf(MAVI"\n----> Silmek istediginiz sorunun numarasini giriniz: "RESET);
		scanf("%d",&noSilinen);

/*	if(noSilinen>S-1) {
		printf(KRMZ"Soru bulunamadı.\n Ana menüye dönmek için bir tuşa basınız..."RESET);
		getchar();
		system("clear||cls");
		system("clear||cls");
	} */

	noSilinen=noSilinen - 1;


	{
		strcpy(yeni_soru[noSilinen].soru,yeni_soru[S-1].soru);
		strcpy(yeni_soru[noSilinen].option_a,yeni_soru[S-1].option_a);
		strcpy(yeni_soru[noSilinen].option_b,yeni_soru[S-1].option_b);
		strcpy(yeni_soru[noSilinen].option_c,yeni_soru[S-1].option_c);
		strcpy(yeni_soru[noSilinen].option_d,yeni_soru[S-1].option_d);
		strcpy(yeni_soru[noSilinen].correct_option,yeni_soru[S-1].correct_option);

		S--;

		printf(YSL"\n\n---> Soru silme başarılı!\nAna menüye dönmek için bir tuşa basınız.\n"RESET);
		getchar();
		getchar();
	}
}
