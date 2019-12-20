// ONEMLI NOT: Bu program bir GNU/LINUX dagitimi uzerinde yazilmistir. "gcc-9.2.0" ile test edilmistir.
// Derleme icin "gcc" kullaniniz.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "ana_menu.h"
#include "soru_ekle.h"
#include "soru_sil.h"
#include "soru_goster.h"
#include "soru_guncelle.h"
#include "oyun_oyna.h"
#include "ekran_temizle.h"
#include "karsilama.h"
//#include "puan_kaydet.h"
#include "skorlar.h"
#define SARI "\x1b[1;33m"
#define KRMZ "\x1b[1;31m"
#define RESET "\x1b[0m"
#define MAVI "\x1b[1;36m"
#define YSL "\x1b[1;32m"


int counter = 1;
int puan_sayisi;
char kullaniciAdi[50];

int main() {

	ekran_temizle();
	karsilama_ekrani();
	ekran_temizle();
	ana_menu();


	while(1) {


		switch(islem_sec) {

			case 1:
				ekran_temizle();
      			soru_ekle();
				ekran_temizle();
				ana_menu();
				break;

			case 2:
				ekran_temizle();
				soru_sil();
				ekran_temizle();
				ana_menu();
				break;


			case 3:
				ekran_temizle();
				soru_goruntule();
				soru_guncelleme();
				ekran_temizle();
				ana_menu();
				break;



			case 4:
				ekran_temizle();
				printf(SARI"\n\nKullanıcı adınızı"RESET KRMZ" aralarında boşluk bırakmadan "RESET SARI"giriniz: "RESET);
				scanf("%s",&kullaniciAdi);
				oyun_oyna(kullaniciAdi);
				ekran_temizle();
				ana_menu();
				break;



			case 5:
				ekran_temizle();
		//		puan_sayisi=skor_oku();
		//		siralama(puan_sayisi);
				ana_menu();
				break;

			case 6:
				break;



			default:

				printf(KRMZ"Gecersiz deger giriniz. Ana menüye dönmek için bir tuşa basınız..\n"RESET);
				getchar();
				ekran_temizle();
				ana_menu();
				break;


		}

		if (islem_sec==6) {
			printf(KRMZ"                                        ____________________                                               \n");
		  printf("                                       |                    |                                              \n");
		  printf("=====================================> | PROGRAMDAN ÇIKILDI | <============================================\n");
		  printf("                                       |____________________|                                              \n"RESET);

			break;
		}
	}


	return 0;
}
