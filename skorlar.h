struct skor {
    char nick[50];
    int puan;
}yeni_kullanici[50];

int skor_oku() {

  int i=0;

  FILE *f;
  f = fopen("Skorlar.txt","r");

  while(!feof(f)){

			fscanf(f,"%d\t%s",&yeni_kullanici[i].puan,&yeni_kullanici[i].nick);
			i++;
		}
    return i-1;
}

void siralama(int i){
  int x = 0;
	int a = 0;
  char tempName[50];
  int temp;

	for(x=0;x<i-1;x++){

		for(a=0;a<x-1;a++){

			if(yeni_kullanici[a].puan > yeni_kullanici[a+1].puan){

        		temp = yeni_kullanici[a].puan;
				strcpy(tempName,yeni_kullanici[a].nick);
				yeni_kullanici[a].puan = yeni_kullanici[a+1].puan;
				strcpy(yeni_kullanici[a].nick,yeni_kullanici[a+1].nick);
				strcpy(yeni_kullanici[a+1].nick,tempName);
				yeni_kullanici[a+1].puan = temp;
			}
		}
	}


}
