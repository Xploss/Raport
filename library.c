typedef char* string;

void skala(float *pNA, string *lattering, int absen)
{
	float th;
	
	th=0.8*16;
	
	if(absen>=th)
	{
		*pNA;
		if(*pNA <=100 && *pNA >=91)
		{
			*lattering="A";
		}
		else if(*pNA <=90 && *pNA >=81)
		{
			*lattering="B";
		}
		else if(*pNA <=80 && *pNA >=71)
		{
			*lattering="C";
		}
		else if(*pNA <=70 && *pNA >=61)
		{
			*lattering="D";
		}
		else if(*pNA <=60 && *pNA >=0)
		{
			*lattering="E";
		}
		
	}
	else if(absen<th)
	{
		*pNA=(*pNA*absen)/16;
		if(*pNA <=100 && *pNA >=91)
		{
			*lattering="A";
		}
		else if(*pNA <=90 && *pNA >=81)
		{
			*lattering="B";
		}
		else if(*pNA <=80 && *pNA >=71)
		{
			*lattering="C";
		}
		else if(*pNA <=70 && *pNA >=61)
		{
			*lattering="D";
		}
		else if(*pNA <=60 && *pNA >=0)
		{
			*lattering="E";
		}
	}
}

void kelulusan(float *pNA, string *keterangan)
{
	if(*pNA<=100 &&  *pNA>=71)
	{
		*keterangan="Lulus";
	}
	else if(*pNA<=70 && *pNA>=0)
	{
		*keterangan="Tidak Lulus";
	}
}
