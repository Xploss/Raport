typedef char* string;
void kelulusan(float *pNA, string *keterangan);
void skala(float *pNA, string *lattering, int absen);

typedef struct
{
	int absen;
	float UH1,UH2,UTS,UAS,pNA;
	string guru,lattering,keterangan;
	char name[50];
}some_item;

some_item Nilai[100];
