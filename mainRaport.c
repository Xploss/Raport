#include <stdio.h>
#include <stdlib.h>
#include "library.h"

int main(int argc, char *argv[]) 
{
	float UH1,UH2,UTS,UAS,pNA;
	int absen,option,index,i;
	char guru[50];
	string name,lattering,keterangan;
	index=1;
	
	printf("Masukkan Nama Guru : ");
	scanf("%s", &guru);
	
	option=1;
	while(option==1)
	{
		printf("Masukkan Nama Siswa : ");
		scanf("%s", Nilai[index].name);
		printf("Masukkan Kehadiran Siswa : ");
		scanf("%d", &absen);
		printf("Masukkan Nilai UH1 : ");
		scanf("%f", &UH1);
		printf("Masukkan Nilai UTS : ");
		scanf("%f", &UTS);
		printf("Masukkan Nilai UH2 : ");
		scanf("%f", &UH2);
		printf("Masukkan Nilai UAS : ");
		scanf("%f", &UAS);
		
		Nilai[index].absen=absen;
		Nilai[index].UH1=UH1;
		Nilai[index].UTS=UTS;
		Nilai[index].UH2=UH2;
		Nilai[index].UAS=UAS;
		
		UH1=UH1*0.15;
		UTS=UTS*0.3;
		UH2=UH2*0.15;
		UAS=UAS*0.4;
		pNA=UH1+UTS+UH2+UAS;
		
		skala(&pNA,&lattering,absen);
		kelulusan(&pNA,&keterangan);
		
		Nilai[index].guru=guru;
		Nilai[index].pNA=pNA;
		Nilai[index].lattering=lattering;
		Nilai[index].keterangan=keterangan;
		
		index=index+1;
		
		system("cls"); //clear
		
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("Nama Guru Yang Mengajar : %s ", &guru);
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("No\t Nama Siswa\t Absen\t UH1\t UTS\t UH2\t UAS\t Nilai Akhir\t Skala\t Keterangan\t\n");
		for(i=1;i<index;++i)
		{
			printf("%d\t %s\t %d\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f\t\t %s\t %s\t\n",i,Nilai[i].name,Nilai[i].absen,Nilai[i].UH1,Nilai[i].UTS,Nilai[i].UH2,Nilai[i].UAS,Nilai[i].pNA,Nilai[i].lattering,Nilai[i].keterangan);
		}
		
		printf("Masukkan 1 untuk lanjut ");
		scanf("%d",&option);
	}
	system("pause");	
	return 0;
}
