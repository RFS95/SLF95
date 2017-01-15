
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>



struct player
{
	int shomare;// shomare poshtesh
	int num;// shomare pirhan
	char name [20];//last name
	char esm [5];// esme koochik
	int age;
	char post;
	int skill;
	int fitness;
	int form;	
};


struct team
{
	struct player p[50];
	struct player m[15];
	char name[30];
	int scr;
	int goals[25];
	int khorde;
	int tafazol;
	int tedad;
	int r[50];
	int week[40];
};

struct team t[16];

void name_team(int d)
{
	switch(d)
	{
		case 1: strcpy(t[d].name,"Persepolis"); break;
		case 2: strcpy(t[d].name,"Tractorsazi"); break;
		case 3: strcpy(t[d].name,"Paykan"); break;
		case 4: strcpy(t[d].name,"Zobahan"); break;
		case 5: strcpy(t[d].name,"Naft Tehran"); break;
		case 6: strcpy(t[d].name,"Foolad"); break;
		case 7: strcpy(t[d].name,"Esteghlal"); break;
		case 8: strcpy(t[d].name,"Sepahan"); break;
		case 9: strcpy(t[d].name,"Esteghlal khuzestan"); break;
		case 10: strcpy(t[d].name,"Gostaresh Foolad"); break;
		case 11: strcpy(t[d].name,"Sanat Naft"); break;
		case 12: strcpy(t[d].name,"Padideh Khorasan"); break;
		case 13: strcpy(t[d].name,"Siahjamegan"); break;
		case 14: strcpy(t[d].name,"Saipa"); break;
		case 15: strcpy(t[d].name,"Saba Qom"); break;
		case 16: strcpy(t[d].name,"Machine Sazi"); break;

	}
}

void shuffle(int *array, size_t n)
{
    if (n > 1) 
    {
        size_t i;
        //srand(time(0));
        for (i = 0; i < n - 1; i++) 
        {
          size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
          int t = array[j];
          array[j] = array[i];
          array[i] = t;
        }
    }
}



int poss[16];
int switcher(int b,int a,int d) //b--->adade m  a--->adade p d---->adade team
{
	t[d].m[b].num=t[d].p[a].num;
	strcpy(t[d].m[b].name,t[d].p[a].name);
	strcpy(t[d].m[b].esm,t[d].p[a].esm);
	t[d].m[b].age=t[d].p[a].age;
	t[d].m[b].post=t[d].p[a].post;
	t[d].m[b].skill=t[d].p[a].skill;
	t[d].m[b].fitness=t[d].p[a].fitness;
	t[d].m[b].form=t[d].p[a].form;
	poss[d]+= t[d].m[b].skill + t[d].m[b].fitness + t[d].m[b].form;

	
}	
	
int show_team(int i,int a)
{
	int j=0;
	for (j=1; j<=a-1 ; j++)
	printf("%d %d %s%s %d %c %d %d %d\n",t[i].p[j].shomare,t[i].p[j].num,t[i].p[j].esm,t[i].p[j].name,t[i].p[j].age,t[i].p[j].post,t[i].p[j].skill,t[i].p[j].fitness,t[i].p[j].form);
}
	int change(int d,int a,int b,int c)
{
	int j=1;
	t[d].m[b].num=t[d].p[a].num;
	strcpy(t[d].m[b].name,t[d].p[a].name);
	system("cls");
	show_team(d,t[d].tedad);
	while(j<c)
	{
	if(j==1)
			printf("G%d %d %s\n",j,t[d].m[j].num,t[d].m[j].name);
		
		else if(j>1 && j<=5)
			printf("D%d %d %s\n",j-1,t[d].m[j].num,t[d].m[j].name);

		
		else if(j>5 && j<=9)
			printf("M%d %d %s\n",j-5,t[d].m[j].num,t[d].m[j].name);
		
		else if(j>8 && j<=11)
			printf("A%d %d %s\n",j-9,t[d].m[j].num,t[d].m[j].name);
			j++;
		}
		
}


int compare(int d,int e,int c)
{
	int j;
	for(j=1; j<c ; j++)
	{
		
		if(strcmp(t[d].m[e].name ,t[d].m[j].name)==0)
		{
			return	0;			
		}

		
	}

}

int comp_team(int i)
{
	int j=0;
	int n[50];
	int d=5,m=9,counter=1;
	//srand(time(0));
	int r=rand() % 10 +1; 
	if(r<=8 && r>=1)
	{
	switcher(1,1,i);
		
	} 
	else 
	{
		switcher(1,2,i);		
	}
	//srand(time(0));
	int sys= rand()%3 +1;
	if(sys==2)
	{
		d=5;
		m=10;	
	}
	else if(sys==3)
	{
		d=5;
		m=8;
	}
	
	for(counter=2 ; counter<=d ; counter++)
	{
			while(t[i].p[t[i].r[j]].post!='D')
			{
			 j++;
			}	
		switcher(counter,t[i].r[j],i);
		j++;	
	}
	j=0;
	for(counter=d+1 ; counter<=m ; counter++)
	{
			while(t[i].p[t[i].r[j]].post!='M')
			{
			 j++;
			}	
		switcher(counter,t[i].r[j],i);
		j++;			
			
	
	
	}
	j=0;
	for(counter=m+1 ; counter<=11 ; counter++)
	{
			while(t[i].p[t[i].r[j]].post!='A')
			{
			 j++;
			}	
		switcher(counter,t[i].r[j],i);
		j++;
	
	
	}
	
	name_team(i);
	j=0;
}

int teams[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};


int play(int a,int b,int hafte,int poss[],int d)
{
	int w,l;
	shuffle(t[a].r , t[a].tedad-1);
	shuffle(t[b].r , t[b].tedad-1);

	//srand(time(0));
	if(a==d)
	{
		comp_team(b);
	}
	else if(b==d)
	{
		comp_team(a);
	}
	else
	{
	comp_team(a);
	comp_team(b);		
	}

	t[a].week[hafte]=b;
	t[b].week[hafte]=a;

	int r=rand() % 100 +1;
	if(r>=0 && r<=50)
	{
		//srand(time(0));
		 w=rand() % 5 + 1;
		 l=rand()% 3 + 1;
		while(w<=l)
		{
			//srand(time(0));
			 w=rand() % 5 + 1;
			 l=rand() % 3 ;		
		}
	}
	else if(r>50 && r<=75)
	{
	//	srand(time(0));
		 w=rand() % 5 + 1;
		 l=w;		
	}
	else 
	{
	//		srand(time(0));
		 l=rand() % 5 + 1;
		 w=rand()% 3 + 1;
		while(l<=w)
		{
			 l=rand() % 5 + 1;
			 w=rand() % 3 ;		
		}	
	}
	if(poss[a]>poss[b]) 
	{
		t[a].goals[b]=w;
		t[b].goals[a]=l;
		t[a].khorde+=l;
		t[b].khorde+=w;
		t[b].tafazol+= (l -w);
		t[a].tafazol+= (w-l);
		printf("\n%s = %d \t %s=%d\n",t[a].name,w,t[b].name,l);
		if(w>l) t[a].scr+=3;
		else if(w<l) t[b].scr+=3;
		else 
		{
			t[a].scr+=1;
			t[b].scr+=1;	
		}
	}
	else
	{
		t[b].goals[a]=w;
		t[a].goals[b]=l;
		t[a].khorde+=w;
		t[b].khorde+=l;
		t[a].tafazol+= (l -w);
		t[b].tafazol+= (w-l);
		printf("\n%s = %d \t %s=%d\n",t[a].name,l,t[b].name,w);
		if(w>l) t[b].scr+=3;
		else if(w<l) t[a].scr+=3;
		else 
		{
			t[a].scr+=1;
			t[b].scr+=1;	
		}
	}
		
}

int save_status()
{
	FILE *fp=fopen("saved.csv","w");
		if (!fp) {
		perror("fopen");
		return 0;
	}
	int i,j,goals=0;
	for ( i = 1; i <= 16; i++) {
		for(j=1; j<=16 ; j++)
		 		goals+=t[i].goals[j];
		 		
		fprintf(fp, "%s %d %d %d %d \n", t[i].name,t[i].scr, goals, t[i].khorde , t[i].tafazol);
		goals=0;
	}	
	fclose(fp);
	fp=NULL;
}

int main()
{
	srand(time(0));
	shuffle(teams,15);
	int poss[16];
	int i1,i2;
	for ( i1 = 0; i1 <= 16; i1++) {
		for(i2=0; i2<=16 ; i2++) t[i1].goals[i2]=0;
	}

		FILE *fop = fopen("teams.csv", "r");
	if (!fop) {
		perror("fopen");
		return 0;
	}
	char buffer[100];
	int i=1,j=1,n=1,b,tedad;
	while (fgets(buffer, 100, fop) != NULL) {
		sscanf(buffer, "%s", t[i].name);
	if(i==1)
	{
				FILE *fp = fopen("Persepolis.csv", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"Persepolis");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
		}
		sscanf(buffer, "%d %d %s %s %d %c %d %d %d",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].esm,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
		for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
		printf("\n");		 
		shuffle(t[i].r , t[i].tedad-1);
		i++;
		j=1;
		fclose(fp);
		fp = NULL;	
			
	}

	 else if(i==2)
	{
		
				FILE *fp = fopen("TractorSazi.csv", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"Tractorsazi");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='.';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
		for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
		printf("\n");		 	
		shuffle(t[i].r , t[i].tedad-1);
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}
	

	 else if(i==3)
	{
				FILE *fp = fopen("Paykan.csv", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"Paykan");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=70 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='.';

		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
		for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
		printf("\n");		 	
		shuffle(t[i].r , t[i].tedad-1);
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}

	
		if(i==4)
	{
				FILE *fp = fopen("ZobAhan.csv", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"Zobahan");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='.';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	

		for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
		printf("\n");			 	
		shuffle(t[i].r , t[i].tedad-1);
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}
	
	
		if(i==5)
	{
				FILE *fp = fopen("NaftTehran.csv", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"Naft Tehran");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='.';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;		
		for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
		printf("\n");
		shuffle(t[i].r , t[i].tedad-1);
		i++;
		j=1;
		fclose(fp);
		fp = NULL;			
	}

	
		if(i==6)
	{
				FILE *fp = fopen("FooladKhuzestan.csv", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"Foolad Khuzestan");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='.';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
		for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
		printf("\n");	
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}

	
		if(i==7)
	{
				FILE *fp = fopen("Esteghlal.csv", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"Esteghlal");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='.';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
		for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
		printf("\n");	
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}

	
		if(i==8)
	{
				FILE *fp = fopen("Sepahan.csv", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"Sepahan");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='.';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;		
		for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
		printf("\n");
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}

	
		if(i==9)
	{
				FILE *fp = fopen("EsteghlalKhuzestan.csv", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"Esteghlal Khuzestan");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='.';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;		
		for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
		printf("\n");
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}

	
		if(i==10)
	{
				FILE *fp = fopen("GostareshFoolad.csv", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='.';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
		for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
		printf("\n");	
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}

	
	if(i==11)
	{
				FILE *fp = fopen("SanatNaft.csv", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=70 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='.';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
		for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
		printf("\n");	
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;			
	}

	
			if(i==12)
	{
				FILE *fp = fopen("PadidehKhorasan.csv", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='.';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;		
		shuffle(t[i].r , t[i].tedad-1);
		for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
		printf("\n");
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;			
	}

	
			if(i==13)
	{
				FILE *fp = fopen("SiahjameganMashhad.csv", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='.';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
		 printf("\n");
		for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
		printf("\n");	
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;			
	}

	
			if(i==14)
	{
				FILE *fp = fopen("Saipa.csv", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='.';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
		for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
		printf("\n");	
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;			
	}

	
			if(i==15)
	{
				FILE *fp = fopen("SabaQom.csv", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='.';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;
		for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
		printf("\n");		
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}

	
			if(i==16)
	{
				FILE *fp = fopen("MachineSazi.csv", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='.';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
		for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
		printf("\n");	
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;			
	}

	}
		


	int d,c,e,x,y,sys,def,mid,hafte=1,k;
	printf("pick your team\n 1-perspolis\n 2-tractorsazi\n 3-Paykan\n 4-Zobahan");
	printf("pick your team\n 5-Naft Tehran\n 6-Foolad Khuzestan\n 7-Esteghlal\n 8-Sepahan");
	printf("pick your team\n 9-Esteghlal Khuzestan\n 10-Gostaresh Foolad\n 11-Sanat Naft Abadan\n 12-Padideh Khorasan");
	printf("pick your team\n 13-Siahjamegan\n 14-Saipa\n 15-Saba Qom\n 16-Machine sazi");
	scanf("%d",&d);
	for(k=1 ; k<=16 ; k++)
	{
			t[d].r[k]=0;		
	}

	system("cls");
	while(hafte<=15)
	{
	show_team(d,t[d].tedad);
	printf("choose your system \n 1. 4-4-2  2. 5-4-1   3. 4-3-3");
	scanf("%d",&sys);	
	if(sys==1)
	{
		def=5;
		mid=9;
	}
	else if(sys==2)
	{
		def=5;
		mid=10;
	}
		else if(sys==3)
	{
		def=5;
		mid=8;
	}
	for( c=1; c<=11 ; c++)
	{
			int	comper;
		if(c==1)
		{
			scanf("%d",&e);
			if(e==0) 
			{
				scanf("%d%d",&x,&y);
				change(d,x,y,c);
				scanf("%d",&e);
			}
			//t[d].m[c].num = t[d].p[e].num;
		//	strcpy(t[d].m[c].name , t[d].p[e].name);
			switcher(c,e,d);
			printf("G %d %s",t[d].m[c].num,t[d].m[c].name);
	}


		
		if(c>1 && c<=def)
		{
			scanf("%d",&e);
			t[d].m[c].num = t[d].p[e].num;
		comper=compare(d,e,c);
		while (comper==0){
			printf("dari eshtebah mizani daadach 1bar dige emtehan kon");
			scanf("%d",&e);
			t[d].m[c].num = t[d].p[e].num;
			comper=compare(d,e,c);
		}
			if(e==0) 
			{
				scanf("%d%d",&x,&y);
				change(d,x,y,c);
			    scanf("%d",&e);	
				t[d].m[c].num = t[d].p[e].num;			
			}
			switcher(c,e,d);
			printf("D%d %d %s",c-1,t[d].m[c].num,t[d].m[c].name);
			
		}
		
		else if(c>def && c<=mid)
		{
			scanf("%d",&e);
			t[d].m[c].num = t[d].p[e].num;
			comper=compare(d,e,c);	
		while (comper==0){
			printf("dari eshtebah mizani daadach 1bar dige emtehan kon");
			scanf("%d",&e);
			t[d].m[c].num = t[d].p[e].num;
	    	comper=compare( d,e, c);
		}
		
			if(e==0) 
			{
				scanf("%d%d",&x,&y);
				change(d,x,y,c);
				scanf("%d",&e);
			}
			switcher(c,e,d);
			printf("M%d %d %s",c-5,t[d].m[c].num,t[d].m[c].name);
		}
		else if(c>mid && c<=11)
		{
			scanf("%d",&e);
			t[d].m[c].num = t[d].p[e].num;
			comper=compare(d,e,c);	
		while (comper==0){
			printf("dari eshtebah mizani daadach 1bar dige emtehan kon");
			scanf("%d",&e);
			t[d].m[c].num = t[d].p[e].num;
	    	comper=compare( d,e, c);
		}

			
			if(e==0) 
			{
				scanf("%d%d",&x,&y);
				change(d,x,y,c);
				scanf("%d",&e);
			}
			switcher(c,e,d);		
			printf("A%d %d %s",c-9,t[d].m[c].num,t[d].m[c].name);
			name_team(d);

		}

			
	}
	
if(hafte==1)
{
//	srand(time(0));
	play(teams[0],teams[13],hafte,poss,d);
	play(teams[4],teams[11],hafte,poss,d);
	play(teams[14],teams[9],hafte,poss,d);
	play(teams[2],teams[15],hafte,poss,d);
	play(teams[8],teams[7],hafte,poss,d);
	play(teams[10],teams[3],hafte,poss,d);	
	play(teams[6],teams[1],hafte,poss,d);
	play(teams[12],teams[5],hafte,poss,d);
/*	int z;
	for(z=1 ; z<=11 ; z++) 
	printf("\n%s %c",t[teams[0]].m[z].name,t[teams[0]].m[z].post);
	play(teams[12],teams[5],hafte,poss,d);
	for(z=1 ; z<=11 ; z++) printf("\n%s %c",t[teams[3]].m[z].name,t[teams[3]].m[z].post);*/
	save_status();

}

else if(hafte==2)
{
	play(teams[1],teams[0],hafte,poss,d);
	play(teams[3],teams[2],hafte,poss,d);
	play(teams[5],teams[4],hafte,poss,d);
	play(teams[7],teams[6],hafte,poss,d);
	play(teams[9],teams[8],hafte,poss,d);
	play(teams[11],teams[10],hafte,poss,d);	
	play(teams[13],teams[12],hafte,poss,d);
	play(teams[14],teams[15],hafte,poss,d);
	int z;
	for(z=1 ; z<=11 ; z++) 
	printf("\n%s %c",t[teams[0]].m[z].name,t[teams[0]].m[z].post);
	play(teams[12],teams[5],hafte,poss,d);
	for(z=1 ; z<=11 ; z++) printf("\n%s %c",t[teams[3]].m[z].name,t[teams[3]].m[z].post);

}
else if(hafte==3)
{
	play(teams[5],teams[0],hafte,poss,d);
	play(teams[7],teams[14],hafte,poss,d);
	play(teams[15],teams[9],hafte,poss,d);
	play(teams[1],teams[8],hafte,poss,d);
	play(teams[3],teams[4],hafte,poss,d);
	play(teams[11],teams[12],hafte,poss,d);
	play(teams[10],teams[2],hafte,poss,d);
	play(teams[13],teams[6],hafte,poss,d);	
}

else if(hafte==4)
{
	play(teams[0],teams[11],hafte,poss,d);
	play(teams[12],teams[3],hafte,poss,d);
	play(teams[4],teams[2],hafte,poss,d);
	play(teams[6],teams[5],hafte,poss,d);
	play(teams[15],teams[10],hafte,poss,d);
	play(teams[14],teams[1],hafte,poss,d);
	play(teams[8],teams[13],hafte,poss,d);
	play(teams[7],teams[9],hafte,poss,d);	
}

else if(hafte==5)
{
	play(teams[3],teams[0],hafte,poss,d);
	play(teams[10],teams[4],hafte,poss,d);
	play(teams[7],teams[15],hafte,poss,d);
	play(teams[11],teams[6],hafte,poss,d);
	play(teams[1],teams[9],hafte,poss,d);
	play(teams[5],teams[8],hafte,poss,d);
	play(teams[2],teams[12],hafte,poss,d);
	play(teams[13],teams[14],hafte,poss,d);	
}

else if(hafte==6)
{
	play(teams[0],teams[2],hafte,poss,d);
	play(teams[6],teams[3],hafte,poss,d);
	play(teams[15],teams[4],hafte,poss,d);
	play(teams[7],teams[1],hafte,poss,d);
	play(teams[9],teams[13],hafte,poss,d);
	play(teams[14],teams[5],hafte,poss,d);
	play(teams[12],teams[10],hafte,poss,d);
	play(teams[8],teams[11],hafte,poss,d);	
}

else if(hafte==7)
{
	play(teams[10],teams[0],hafte,poss,d);
	play(teams[3],teams[8],hafte,poss,d);
	play(teams[4],teams[12],hafte,poss,d);
	play(teams[13],teams[7],hafte,poss,d);
	play(teams[2],teams[6],hafte,poss,d);
	play(teams[5],teams[9],hafte,poss,d);
	play(teams[1],teams[15],hafte,poss,d);
	play(teams[11],teams[14],hafte,poss,d);	
}

else if(hafte==8)
{
	play(teams[0],teams[4],hafte,poss,d);
	play(teams[14],teams[3],hafte,poss,d);
	play(teams[7],teams[5],hafte,poss,d);
	play(teams[6],teams[10],hafte,poss,d);
	play(teams[9],teams[11],hafte,poss,d);
	play(teams[8],teams[2],hafte,poss,d);
	play(teams[1],teams[13],hafte,poss,d);
	play(teams[15],teams[12],hafte,poss,d);	
}

else if(hafte==9)
{
	play(teams[12],teams[0],hafte,poss,d);
	play(teams[3],teams[9],hafte,poss,d);
	play(teams[4],teams[6],hafte,poss,d);
	play(teams[11],teams[7],hafte,poss,d);
	play(teams[5],teams[1],hafte,poss,d);
	play(teams[2],teams[14],hafte,poss,d);
	play(teams[10],teams[8],hafte,poss,d);
	play(teams[13],teams[15],hafte,poss,d);	
}

else if(hafte==10)
{
	play(teams[15],teams[0],hafte,poss,d);
	play(teams[7],teams[3],hafte,poss,d);
	play(teams[8],teams[4],hafte,poss,d);
	play(teams[6],teams[12],hafte,poss,d);
	play(teams[9],teams[2],hafte,poss,d);
	play(teams[13],teams[5],hafte,poss,d);
	play(teams[1],teams[11],hafte,poss,d);
	play(teams[14],teams[10],hafte,poss,d);	
}

else if(hafte==11)
{
	play(teams[0],teams[6],hafte,poss,d);
	play(teams[3],teams[1],hafte,poss,d);
	play(teams[4],teams[14],hafte,poss,d);
	play(teams[2],teams[7],hafte,poss,d);
	play(teams[10],teams[9],hafte,poss,d);
	play(teams[5],teams[15],hafte,poss,d);
	play(teams[12],teams[8],hafte,poss,d);
	play(teams[11],teams[13],hafte,poss,d);	
}

else if(hafte==12)
{
	play(teams[8],teams[0],hafte,poss,d);
	play(teams[13],teams[3],hafte,poss,d);
	play(teams[7],teams[10],hafte,poss,d);
	play(teams[15],teams[6],hafte,poss,d);
	play(teams[5],teams[11],hafte,poss,d);
	play(teams[1],teams[2],hafte,poss,d);
	play(teams[14],teams[12],hafte,poss,d);
	play(teams[11],teams[13],hafte,poss,d);	
}

else if(hafte==13)
{
	play(teams[0],teams[14],hafte,poss,d);
	play(teams[3],teams[5],hafte,poss,d);
	play(teams[4],teams[7],hafte,poss,d);
	play(teams[6],teams[8],hafte,poss,d);
	play(teams[12],teams[9],hafte,poss,d);
	play(teams[2],teams[13],hafte,poss,d);
	play(teams[10],teams[1],hafte,poss,d);
	play(teams[11],teams[15],hafte,poss,d);	
}

else if(hafte==14)
{
	play(teams[9],teams[0],hafte,poss,d);
	play(teams[11],teams[3],hafte,poss,d);
	play(teams[1],teams[4],hafte,poss,d);
	play(teams[7],teams[12],hafte,poss,d);
	play(teams[14],teams[6],hafte,poss,d);
	play(teams[5],teams[2],hafte,poss,d);
	play(teams[13],teams[10],hafte,poss,d);
	play(teams[15],teams[8],hafte,poss,d);	
}

else if(hafte==15)
{
	play(teams[0],teams[7],hafte,poss,d);
	play(teams[3],teams[15],hafte,poss,d);
	play(teams[4],teams[13],hafte,poss,d);
	play(teams[6],teams[9],hafte,poss,d);
	play(teams[10],teams[5],hafte,poss,d);
	play(teams[2],teams[11],hafte,poss,d);
	play(teams[12],teams[1],hafte,poss,d);
	play(teams[14],teams[8],hafte,poss,d);	
}

hafte++;	
}
	return 0;
}



