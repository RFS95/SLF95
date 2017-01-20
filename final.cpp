
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
void taghvim(int week){
	if (week==1)
		printf(" \t\t1395/6/26\tjome");
	else if (week==2)
	   	printf(" \t\t1395/7/2\tjome");
	else if (week==3)
	   	printf(" \t\t1395/7/9\tjome");
 	else if (week==4)
	   	printf(" \t\t1395/7/16\tjome");
	else if (week==5)
	   	printf(" \t\t1395/7/23\tjome");
	else if (week==6)
	   	printf(" \t\t1395/7/30\tjome");
	else if (week==7)
	   	printf(" \t\t1395/8/7\tjome");
	else if (week==8)
	   	printf(" \t\t1395/8/14\tjome");
	else if (week==9)
	   	printf(" \t\t1395/8/21\tjome");
	else if (week==10)
	   	printf(" \t\t1395/8/28\tjome");
	else if (week==11)
	   	printf(" \t\t1395/9/5\tjome");
 	else if (week==12)
	   	printf(" \t\t1395/9/12\tjome");
	else if (week==13)
	   	printf(" \t\t1395/9/19\tjome");
	else if (week==14)
	   	printf(" \t\t1395/9/26\tjome");
	else if (week==15)
	   	printf(" \t\t1395/10/3\tjome");
	else if (week==16)
	   	printf(" \t\t1395/10/23\tpanjshanbe");
	else if (week==17)
	   	printf(" \t\t1395/10/30\tpanjshanbe");
	else if (week==18)
	   	printf(" \t\t1395/11/7\tpanjshanbe");
	else if (week==19)
	   	printf(" \t\t1395/11/14\tpanjshanbe");
 	else if (week==20)
	   	printf(" \t\t1395/11/21\tpanjshanbe");
	else if (week==21)
	   	printf(" \t\t1395/11/28\tpanjshanbe");
	else if (week==22)
	   	printf(" \t\t1395/12/5\tpanjshanbe");
	else if (week==23)
	   	printf(" \t\t1395/12/12\tpanjshanbe");
	else if (week==24)
	   	printf(" \t\t1395/12/19\tpanjshanbe");
	else if (week==25)
	   	printf(" \t\t1395/12/26\tpanjshanbe");
	else if (week==26)
	   	printf(" \t\t1396/1/3\tpanjshanbe");
	else if (week==27)
	   	printf(" \t\t1396/1/10\tpanjshanbe");
 	else if (week==28)
	   	printf(" \t\t1396/1/17\tpanjshanbe");
	else if (week==29)
	   	printf(" \t\t1396/1/24\tpanjshanbe");
	else if (week==30)
	   	printf(" \t\t1396/1/31\tpanjshanbe");
	 	   	   	   	   	   	      	
}
/*void ClearConsoleToColors(int ForgC, int BackC)
 {
 WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
               //Get the handle to the current output buffer...
 HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
                     //This is used to reset the carat/cursor to the top left.
 COORD coord = {0, 0};
                  //A return value... indicating how many chars were written
                    //   not used but we need to capture this since it will be
                      //   written anyway (passing NULL causes an access violation).
  DWORD count;

                               //This is a structure containing all of the console info
                      // it is used here to find the size of the console.
 CONSOLE_SCREEN_BUFFER_INFO csbi;
                 //Here we will set the current color
 SetConsoleTextAttribute(hStdOut, wColor);
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                          //This fills the buffer with a given character (in this case 32=space).
      FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

      FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );
                          //This will set our cursor position for the next print statement.
      SetConsoleCursorPosition(hStdOut, coord);
 }
 return;
}

void SetColor(int ForgC)
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}*/

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
	int goalsum;
	int khorde;
	int tafazol;
	int win;
	int lose;
	int draw;
	int tedad;// tedad bazikonaee k esmeshun tu file csv has
	int r[50];
	int week[20];
	int color;
};

struct team t[16];

void name_team(int d)//rey
{
	switch(d)
	{
		case 1: strcpy(t[d].name,"Persepolis"); break;
		case 2: strcpy(t[d].name,"Tractorsazi"); break;
		case 3: strcpy(t[d].name,"Paykan"); break;
		case 4: strcpy(t[d].name,"Zobahan"); break;
		case 5: strcpy(t[d].name,"NaftTehran"); break;
		case 6: strcpy(t[d].name,"Foolad"); break;
		case 7: strcpy(t[d].name,"Esteghlal"); break;
		case 8: strcpy(t[d].name,"Sepahan"); break;
		case 9: strcpy(t[d].name,"Esteghlalkhuzestan"); break;
		case 10: strcpy(t[d].name,"GostareshFoolad"); break;
		case 11: strcpy(t[d].name,"SanatNaft"); break;
		case 12: strcpy(t[d].name,"PadidehKhorasan"); break;
		case 13: strcpy(t[d].name,"Siahjamegan"); break;
		case 14: strcpy(t[d].name,"Saipa"); break;
		case 15: strcpy(t[d].name,"SabaQom"); break;
		case 16: strcpy(t[d].name,"MachineSazi"); break;
}
}

	void shuffle(int arr[], int n)
{	
    
        int i;
        
        for (i =n-1; i >0; i--) 
        {
          int j = rand() %(i+1);
          int t = arr[j];
          arr[j] = arr[i];
          arr[i] = t;
        }
    
}




int azno() // piri rey
{
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
			else if(buffer[b]==' ') buffer[b]='-';
		}
		sscanf(buffer, "%d %d %s %d %c %d %d %d",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	t[1].color=4;
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
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
			else if(buffer[b]==' ') buffer[b]='-';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	t[2].color=4;
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");		 	
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
			else if(buffer[b]==' ') buffer[b]='-';

		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	t[3].color=4;
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");		 	
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
			else if(buffer[b]==' ') buffer[b]='-';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	t[4].color=4;
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	

	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");			 	
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
		strcpy(t[i].name,"NaftTehran");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='-';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	t[5].color=4;
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;		
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");
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
		strcpy(t[i].name,"FooladKhuzestan");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='-';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	t[6].color=4;
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");	
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
			else if(buffer[b]==' ') buffer[b]='-';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	t[7].color=4;
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");	
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
			else if(buffer[b]==' ') buffer[b]='-';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	t[8].color=6;
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;		
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");
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
		strcpy(t[i].name,"EsteghlalKhuzestan");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='-';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	t[9].color=4;
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;		
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");
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
		strcpy(t[i].name,"GostareshFoolad");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='-';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	t[10].color=4;
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");	
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
		strcpy(t[i].name,"SanatNaft");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=70 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='-';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	t[11].color=4;
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");	
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
		strcpy(t[i].name,"PadidehKhorasan");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='-';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	t[12].color=4;
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;		
		shuffle(t[i].r , t[i].tedad-1);
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");
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
		strcpy(t[i].name,"SiahjameganMashhad");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='-';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	t[13].color=4;
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	//	 printf("\n");
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");	
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
		strcpy(t[i].name,"Saipa");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='-';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	t[14].color=4;
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");	
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
		strcpy(t[i].name,"SabaQom");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='-';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	t[15].color=4;
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");		
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
			strcpy(t[i].name,"Machinesazi");
		while (fgets(buffer, 100, fp) != NULL) {
		for(b=0 ; b<=50 ; b++)
		{
			if(buffer[b]==',') buffer[b]=' ';
			else if(buffer[b]==' ') buffer[b]='-';
		}
	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	t[16].color=4;
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");	
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;			
	}

	}
		
}

int azedame()
{
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
				FILE *fp = fopen("new form Persepolis .txt", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"Persepolis");
		while (fgets(buffer, 100, fp) != NULL) {

		sscanf(buffer, "%d %d %s %d %c %d %d %d",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");		 
		shuffle(t[i].r , t[i].tedad-1);
		i++;
		j=1;
		fclose(fp);
		fp = NULL;	
			
	}

  else if(i==2)
	{
		
				FILE *fp = fopen("new form TractorSazi .txt", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"Tractorsazi");
		while (fgets(buffer, 100, fp) != NULL) {

	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");		 	
		shuffle(t[i].r , t[i].tedad-1);
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}
	

	 else if(i==3)
	{
				FILE *fp = fopen("new form Paykan .txt", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"Paykan");
		while (fgets(buffer, 100, fp) != NULL) {

	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++) t[i].r[c]=c+1;	
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");		 	
		shuffle(t[i].r , t[i].tedad-1);
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}

	
	else	if(i==4)
	{
				FILE *fp = fopen("new form ZobAhan .txt", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"Zobahan");
		while (fgets(buffer, 100, fp) != NULL) {

	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	

	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");			 	
		shuffle(t[i].r , t[i].tedad-1);
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}
	
	
	else	if(i==5)
	{
				FILE *fp = fopen("new form Naft Tehran .txt", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"NaftTehran");
		while (fgets(buffer, 100, fp) != NULL) {

	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;		
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");
		shuffle(t[i].r , t[i].tedad-1);
		i++;
		j=1;
		fclose(fp);
		fp = NULL;			
	}

	
	else	if(i==6)
	{
				FILE *fp = fopen("new form Foolad .txt", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"FooladKhuzestan");
		while (fgets(buffer, 100, fp) != NULL) {

	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");	
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}

	
	else	if(i==7)
	{
				FILE *fp = fopen("new form Esteghlal .txt", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"Esteghlal");
		while (fgets(buffer, 100, fp) != NULL) {

	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");	
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}

	
	else	if(i==8)
	{
				FILE *fp = fopen("new form Sepahan .txt", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"Sepahan");
		while (fgets(buffer, 100, fp) != NULL) {

	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;		
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}

	
	else	if(i==9)
	{
				FILE *fp = fopen("new form Esteghlal Khuzestan .txt", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"EsteghlalKhuzestan");
		while (fgets(buffer, 100, fp) != NULL) {

	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;		
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}

	
	else if(i==10)
	{
				FILE *fp = fopen("new form Gostaresh Foolad .txt", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
		strcpy(t[i].name,"GostareshFoolad");
		while (fgets(buffer, 100, fp) != NULL) {

	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");	
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}

	
	else if(i==11)
	{
				FILE *fp = fopen("new form Sanat Naft .txt", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
	strcpy(t[i].name,"SanatNaft");
	 
		while (fgets(buffer, 100, fp) != NULL) {

	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");	
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;			
	}

	
	else		if(i==12)
	{
				FILE *fp = fopen("new form Padideh Khorasan .txt", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
	strcpy(t[i].name,"Padidehkhorasan");
		while (fgets(buffer, 100, fp) != NULL) {

	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;		
		shuffle(t[i].r , t[i].tedad-1);
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;			
	}

	
			if(i==13)
	{
				FILE *fp = fopen("new form Siahjamegan .txt", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
	strcpy(t[i].name,"Siahjamegan");
		while (fgets(buffer, 100, fp) != NULL) {

	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	//	 printf("\n");
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");	
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;			
	}

	
	else		if(i==14)
	{
				FILE *fp = fopen("new form Saipa .txt", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
	strcpy(t[i].name,"Saipa");
		while (fgets(buffer, 100, fp) != NULL) {

	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");	
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;			
	}

	
	else		if(i==15)
	{
				FILE *fp = fopen("new form Saba Qom .txt", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
	strcpy(t[i].name,"SabaQom");
		while (fgets(buffer, 100, fp) != NULL) {

	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;
	//	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");		
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;		
	}

	
	else		if(i==16)
	{
				FILE *fp = fopen("new form Machine Sazi .txt", "r");
		if (!fp) {
			perror("fopen");
		return 0;
	}
	strcpy(t[i].name,"MachineSazi");
		while (fgets(buffer, 100, fp) != NULL) {

	sscanf(buffer, "%d %d %s %d %c %d %d %d ",&t[i].p[j].shomare,&t[i].p[j].num,t[i].p[j].name,&t[i].p[j].age,&t[i].p[j].post,&t[i].p[j].skill,&t[i].p[j].fitness,&t[i].p[j].form);
		j++;
	}
	
		t[i].tedad=j;
		int c;
		for(c=0 ; c<t[i].tedad-1 ; c++)
		 t[i].r[c]=c+1;	
	///	for(c=0 ; c<t[i].tedad-1 ; c++) printf("%c ",t[i].p[t[i].r[c]].post);	
	//	printf("\n");	
		shuffle(t[i].r , t[i].tedad-1);
		//for(c=0 ; c<t[i].tedad-1 ; c++) printf("%d \n",t[i].r[c]);	
		i++;
		j=1;
		fclose(fp);
		fp = NULL;			
	}

	}
}

int poss[16];
int switcher(int b,int a,int d) //b--->adade m  a--->adade p d---->adade team //rey
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

	


int form_change(int d)// piri
{
	int i,j,k=0;
	for(i=1;i<t[d].tedad;i++)
	{	k=0;
	for(j=1; j<=11 ; j++)
	{
	
	if(t[d].p[i].num==t[d].m[j].num)
		{

		k=1;
	}

	}	
	if(k==1)
		{
		if(t[d].p[i].form<=95)
		{
			t[d].p[i].form += 5;
		}
		else 
		{
			t[d].p[i].form=100; 
		}
		if(t[d].p[i].fitness>=3)
		t[d].p[i].fitness -=3;
		else t[d].p[i].fitness =0;
		
		}
		else
		{
		if(t[d].p[i].form>=5)
		t[d].p[i].form -= 5;
		else t[d].p[i].form=0;			
		}

		
	}
}	
	
int show_team(int i,int a) // rey
{
	int j=0,b;
	printf("    Num       Name                    age   post    skill   fitness  form\n");
	for (j=1; j<=a-1 ; j++)
	{
			for(b=0 ; b<=50 ; b++)
		{
			if(t[i].p[j].name[b]=='-') t[i].p[j].name[b]=' ';

		}
		
			printf("%3d| %3d| %25s | %2d   | %c  |  %4d  | %4d  | %4d\n",t[i].p[j].shomare,t[i].p[j].num,t[i].p[j].name,t[i].p[j].age,t[i].p[j].post,t[i].p[j].skill,t[i].p[j].fitness,t[i].p[j].form);
	
	}

	for (j=1; j<=a-1 ; j++)
	{	
		for(b=0 ; b<=50 ; b++)
		{
			if(t[i].p[j].name[b]==' ') t[i].p[j].name[b]='-';

		}
	}
}
	int change(int d,int a,int b,int c)// piri sepid rey
{
		int x,y;
		for(x=1 ; x<=c ; x++)
		{
			if(t[d].m[x].num - t[d].p[b].num==0) break;
		}	
		for(y=1 ; y<=c ; y++)
		{
			if(t[d].m[y].num - t[d].p[a].num==0) break;
		}
		
	if(t[d].m[x].num!=0 && t[d].m[y].num!=0)
	{
		struct player temp= t[d].m[x];
		t[d].m[x]=t[d].m[y];
		t[d].m[y]=temp;
	}
	else
	{
		int x;
		for(x=1 ; x<=c ; x++)
		{
			if(t[d].m[x].num - t[d].p[b].num==0) break;
		}
	t[d].m[x].num=t[d].p[a].num;
	strcpy(t[d].m[x].name,t[d].p[a].name);
	strcpy(t[d].m[x].esm,t[d].p[a].esm);
	t[d].m[x].age=t[d].p[a].age;
	t[d].m[x].post=t[d].p[a].post;
	t[d].m[x].skill=t[d].p[a].skill;
	t[d].m[x].fitness=t[d].p[a].fitness;
	t[d].m[x].form=t[d].p[a].form;
	poss[d]+= t[d].m[x].skill + t[d].m[x].fitness + t[d].m[x].form;
	poss[d]-= t[d].p[b].skill + t[d].p[b].fitness + t[d].p[b].form;
		
			
	}
	int j=1;
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


int compare(int d,int e,int c) //sepid piri
{
	int j;
	for(j=1; j<=c ; j++)
	{
		
		if(t[d].m[j].num -t[d].m[c].num==0 && j!=c)
		{
			return	0;			
		}

		
	}
	return 1;

}

int comp_team(int i)//rey
{
	int j=0;
	int n[50];
	int d=5,m=9,counter=1;
	//srand(time(0));
	while(t[i].p[t[i].r[j]].post!='D')
			{
			 j++;
			}	
		switcher(counter,t[i].r[j],i);
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

int taghire_form(int m)//sepide
{
  int i;   
	
		
      if(m==1)	{FILE *fp = fopen("new form Persepolis .txt", "w");
		if (!fp) {
			perror("fopen");
		return 0;
                }
    form_change(m);
    for( i=1; i< t[m].tedad ; i++)
    {
          	fprintf(fp,"%d %d %s %d %c %d %d %d\n",t[m].p[i].shomare,t[m].p[i].num,t[m].p[i].name,t[m].p[i].age,t[m].p[i].post,t[m].p[i].skill,t[m].p[i].fitness,t
             [m].p[i].form);
     } 
     	fclose(fp);
		fp = NULL;	}
	
	
		
		
      else  if(m==2)	{FILE *fp = fopen("new form Tractorsazi .txt", "w");
		if (!fp) {
			perror("fopen");
		return 0;
                 }
    form_change(m);
    for( i=1; i< t[m].tedad ; i++)
    {
          	fprintf(fp,"%d %d %s %d %c %d %d %d\n",t[m].p[i].shomare,t[m].p[i].num,t[m].p[i].name,t[m].p[i].age,t[m].p[i].post,t[m].p[i].skill,t[m].p[i].fitness,t
             [m].p[i].form);
     } 
     	fclose(fp);
		fp = NULL;	}
       

	
	
		
      else  if(m==3)	{FILE *fp = fopen("new form Paykan .txt", "w");
		if (!fp) {
			perror("fopen");
		return 0;
                 }
    form_change(m);
    for( i=1; i<t[m].tedad ; i++)
    {
          	fprintf(fp,"%d %d %s %d %c %d %d %d\n",t[m].p[i].shomare,t[m].p[i].num,t[m].p[i].name,t[m].p[i].age,t[m].p[i].post,t[m].p[i].skill,t[m].p[i].fitness,t
             [m].p[i].form);
     } 
     	fclose(fp);
		fp = NULL;	}
       


	
		
      else  if(m==4)	{FILE *fp = fopen("new form Zobahan .txt", "w");
		if (!fp) {
			perror("fopen");
		return 0;
                 }
        form_change(m);
    for( i=1; i<t[m].tedad ; i++)
    {
          	fprintf(fp,"%d %d %s %d %c %d %d %d\n",t[m].p[i].shomare,t[m].p[i].num,t[m].p[i].name,t[m].p[i].age,t[m].p[i].post,t[m].p[i].skill,t[m].p[i].fitness,t
             [m].p[i].form);
     } 
     	fclose(fp);
		fp = NULL;	}
       

	
		
		
      else  if(m==5)	{FILE *fp = fopen("new form Naft Tehran .txt", "w");
		if (!fp) {
			perror("fopen");
		return 0;
                 }
        form_change(m);

    for( i=1; i<t[m].tedad ; i++)
    {
          	fprintf(fp,"%d %d %s %d %c %d %d %d\n",t[m].p[i].shomare,t[m].p[i].num,t[m].p[i].name,t[m].p[i].age,t[m].p[i].post,t[m].p[i].skill,t[m].p[i].fitness,t
             [m].p[i].form);
     } 
     	fclose(fp);
		fp = NULL;	}
       


		
      else  if(m==6)	{FILE *fp = fopen("new form Foolad .txt", "w");
		if (!fp) {
			perror("fopen");
		return 0;
                 }
        form_change(m);

    for( i=1; i<t[m].tedad ; i++)
    {
          	fprintf(fp,"%d %d %s %d %c %d %d %d\n",t[m].p[i].shomare,t[m].p[i].num,t[m].p[i].name,t[m].p[i].age,t[m].p[i].post,t[m].p[i].skill,t[m].p[i].fitness,t
             [m].p[i].form);
     } 
     	fclose(fp);
		fp = NULL;	}
       

		
      else  if(m==7)	{FILE *fp = fopen("new form Esteghlal .txt", "w");
		if (!fp) {
			perror("fopen");
		return 0;
                 }
    form_change(m);

    for( i=1; i<t[m].tedad ; i++)
    {
          	fprintf(fp,"%d %d %s %d %c %d %d %d\n",t[m].p[i].shomare,t[m].p[i].num,t[m].p[i].name,t[m].p[i].age,t[m].p[i].post,t[m].p[i].skill,t[m].p[i].fitness,t
             [m].p[i].form);
     } 
     	fclose(fp);
		fp = NULL;	}
       

		
      else  if(m==8)	{FILE *fp = fopen("new form Sepahan .txt", "w");
		if (!fp) {
			perror("fopen");
		return 0;
                 }
        form_change(m);

    for( i=1; i<t[m].tedad ; i++)
    {
          	fprintf(fp,"%d %d %s %d %c %d %d %d\n",t[m].p[i].shomare,t[m].p[i].num,t[m].p[i].name,t[m].p[i].age,t[m].p[i].post,t[m].p[i].skill,t[m].p[i].fitness,t
             [m].p[i].form);
     } 
     	fclose(fp);
		fp = NULL;	}
       


		
      else  if(m==9)	{FILE *fp = fopen("new form Esteghlal khuzestan .txt", "w");
		if (!fp) {
			perror("fopen");
		return 0;
                 }
        form_change(m);

    for( i=1; i<t[m].tedad ; i++)
    {
          	fprintf(fp,"%d %d %s %d %c %d %d %d\n",t[m].p[i].shomare,t[m].p[i].num,t[m].p[i].name,t[m].p[i].age,t[m].p[i].post,t[m].p[i].skill,t[m].p[i].fitness,t
             [m].p[i].form);
     } 
     	fclose(fp);
		fp = NULL;	}
       

		
      else  if(m==10)	{FILE *fp = fopen("new form Gostaresh Foolad .txt", "w");
		if (!fp) {
			perror("fopen");
		return 0;
                 }
         form_change(m);

    for( i=1; i<t[m].tedad ; i++)
    {
          	fprintf(fp,"%d %d %s %d %c %d %d %d\n",t[m].p[i].shomare,t[m].p[i].num,t[m].p[i].name,t[m].p[i].age,t[m].p[i].post,t[m].p[i].skill,t[m].p[i].fitness,t
             [m].p[i].form);
     } 
     	fclose(fp);
		fp = NULL;	}
       

		
      else  if(m==11)	{FILE *fp = fopen("new form Sanat Naft .txt", "w");
		if (!fp) {
			perror("fopen");
		return 0;
                 }
         form_change(m);

    for( i=1; i<t[m].tedad ; i++)
    {
          	fprintf(fp,"%d %d %s %d %c %d %d %d\n",t[m].p[i].shomare,t[m].p[i].num,t[m].p[i].name,t[m].p[i].age,t[m].p[i].post,t[m].p[i].skill,t[m].p[i].fitness,t
             [m].p[i].form);
     } 
     	fclose(fp);
		fp = NULL;	}
       


		
      else  if(m==12)	{FILE *fp = fopen("new form Padideh Khorasan .txt", "w");
		if (!fp) {
			perror("fopen");
		return 0;
                 }
        form_change(m);

    for( i=1; i<t[m].tedad ; i++)
    {
          	fprintf(fp,"%d %d %s %d %c %d %d %d\n",t[m].p[i].shomare,t[m].p[i].num,t[m].p[i].name,t[m].p[i].age,t[m].p[i].post,t[m].p[i].skill,t[m].p[i].fitness,t
             [m].p[i].form);
     } 
     	fclose(fp);
		fp = NULL;	}
       


		
      else  if(m==13)	{FILE *fp = fopen("new form Siahjamegan .txt", "w");
		if (!fp) {
			perror("fopen");
		return 0;
                 }
       form_change(m);

    for( i=1; i<t[m].tedad ; i++)
    {
          	fprintf(fp,"%d %d %s %d %c %d %d %d\n",t[m].p[i].shomare,t[m].p[i].num,t[m].p[i].name,t[m].p[i].age,t[m].p[i].post,t[m].p[i].skill,t[m].p[i].fitness,t
             [m].p[i].form);
     } 
     	fclose(fp);
		fp = NULL;	}
       

		
      else  if(m==14)	{FILE *fp = fopen("new form Saipa .txt", "w");
		if (!fp) {
			perror("fopen");
		return 0;
                 }
        form_change(m);

    for( i=1; i<t[m].tedad ; i++)
    {
          	fprintf(fp,"%d %d %s %d %c %d %d %d\n",t[m].p[i].shomare,t[m].p[i].num,t[m].p[i].name,t[m].p[i].age,t[m].p[i].post,t[m].p[i].skill,t[m].p[i].fitness,t
             [m].p[i].form);
     } 
     	fclose(fp);
		fp = NULL;	}
       


		
      else  if(m==15)	{FILE *fp = fopen("new form Saba Qom .txt", "w");
		if (!fp) {
			perror("fopen");
		return 0;
                 }
        form_change(m);

    for( i=1; i<t[m].tedad ; i++)
    {
          	fprintf(fp,"%d %d %s %d %c %d %d %d\n",t[m].p[i].shomare,t[m].p[i].num,t[m].p[i].name,t[m].p[i].age,t[m].p[i].post,t[m].p[i].skill,t[m].p[i].fitness,t
             [m].p[i].form);
     } 
     	fclose(fp);
		fp = NULL;	}
       


		
      else  if(m==16)	{FILE *fp = fopen("new form Machine Sazi .txt", "w");
		if (!fp) {
			perror("fopen");
		return 0;
                 }
                     form_change(m);

    for( i=1; i<t[m].tedad ; i++)
    {
          	fprintf(fp,"%d %d %s %d %c %d %d %d\n",t[m].p[i].shomare,t[m].p[i].num,t[m].p[i].name,t[m].p[i].age,t[m].p[i].post,t[m].p[i].skill,t[m].p[i].fitness,t
             [m].p[i].form);
     } 
     	fclose(fp);
		fp = NULL;	}
       

	}

int make_file(int a,int b )//piri
{
	FILE *fp=fopen("zakhire.csv" , "a+");
	if(!fp) {
		perror("fopen");
		return 0;
	}
	fprintf(fp,"%s %d %d %s\n",t[a].name,t[a].goals[b],t[b].goals[a],t[b].name);
	fclose(fp);
	fp=NULL;
	
}

int play(int a,int b,int hafte,int poss[],int d)//rey
{
	int w,l;
	if(hafte <=15) poss[a]+=1000;// vase in ke emkane borde mizban bishtar shavad
	else poss[b]+=1000;
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
		int r1=rand() %100 +1;
		if(r1<=90 && r1>=1)
		{
		 w=rand() % 5;
		 l=rand()% 5;			
		}
		else
		{
		 w=rand() % 9;
		 l=rand()% 9;
		}

		while(w<=l)
		{
				int r1=rand() %100 +1;
				if(r1<=85 && r1>=1)
				{
		 			w=rand() % 5;
		 			l=rand()% 5;			
				}
					else
					{
		 				w=rand() % 9;
		 				l=rand()% 9;
					}	
		}
	}
	else if(r>50 && r<=90)
	{
	//	srand(time(0));
		int r1=rand()%100 +1;
		if(r1<=90 && r1>=1) // tedadd goal beine 0 ta 4 bashe
		{
			 w=rand() % 5;
		 	 l=w;	
		}
		else
		{
		 w=rand() % 9 ;// tedad gol az 0 ta 9 bashe
		 l=w;			
		}
		
	}
	else 
	{
		int r1=rand() %100 +1;
		if(r1<=90 && r1>=1)
		{
		 w=rand() % 5;
		 l=rand()% 5;			
		}
		else
		{
		 w=rand() % 9;
		 l=rand()% 9;
		}

		while(l<=w)
		{
				int r1=rand() %100 +1;
				if(r1<=90 && r1>=1)
				{
		 			w=rand() % 5;
		 			l=rand()% 5;			
				}
					else
					{
		 				w=rand() % 9;
		 				l=rand()% 9;
					}	
		}
	}
	if(poss[a]>poss[b]) 
	{
		t[a].goals[b]=w;
		t[a].goalsum+=w;
		t[b].goals[a]=l;
		t[b].goalsum+=w;
		t[a].khorde+=l;
		t[b].khorde+=w;
		int g;
		if(hafte<=15)
		printf("\n%25s: %d - %d :%s\n",t[a].name,w,l,t[b].name);
		else
		printf("\n%25s: %d - %d :%s\n",t[b].name,l,w,t[a].name);	
	
		if(w>l)
		{
			t[a].scr+=3;
			t[a].win++;
			t[b].lose++;
		 } 
		else if(w<l)
		{
			t[b].scr+=3;
			t[b].win++;
			t[a].lose++;
		 } 
		else 
		{
			t[a].scr+=1;
			t[b].scr+=1;	
			t[a].draw++;
			t[b].draw++;
		}
	}
	else
	{
		t[b].goals[a]=w;
		t[b].goalsum+=w;
		t[a].goals[b]=l;
		t[a].goalsum+=l;
		t[a].khorde+=w;
		t[b].khorde+=l;

		
		if(hafte <= 15)
		printf("\n%25s: %d - %d :%s\n",t[a].name,l,w,t[b].name);
		else 
		printf("\n%25s: %d - %d :%s\n",t[b].name,w,l,t[a].name);	
			
		if(w>l)
		{
			t[b].scr+=3;
			t[b].win++;
			t[a].lose++;
		 } 
		else if(w<l)
		{
			t[a].scr+=3;
			t[a].win++;
			t[b].lose++;
		 } 
		else 
		{
			t[a].scr+=1;
			t[b].scr+=1;
			t[a].draw++;
			t[b].draw++;	
		}
	}
form_change(a);
form_change(b);
//make_file(a,b);
//taghire_form(a);
//taghire_form(b);
if(hafte <=15) poss[a]-=1000;
else poss[b]-=1000;		
/*int tamashachi=rand() % 10000+1000;
printf("%d",tamashachi);*/
}



int arr[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
      
int bubble(struct team t[],int size)// piri rey
{
        	int i,j,temp;
        for(i=0 ;i<size;i++)
        {
        	for(j=0;j<size;j++)
        	{

        		if(t[arr[j]].scr <  t[arr[j+1]].scr )
        		{
        			temp =arr[j];
        			arr[j] = arr[j+1];
        			arr[j+1] = temp;
        		}
        		else if(t[arr[j]].scr == t[arr[j+1]].scr)
        		{
        			if(t[arr[j]].tafazol <  t[arr[j+1]].tafazol )
        			{
         			temp =arr[j];
        			arr[j] = arr[j+1];
        			arr[j+1] = temp;       				
					}
					else if(t[arr[j]].tafazol == t[arr[j+1]].tafazol)
					{
        				if(t[arr[j]].goalsum <  t[arr[j+1]].goalsum )
        				{
         				temp =arr[j];
        				arr[j] = arr[j+1];
        				arr[j+1] = temp;       				
						}
						else if(t[arr[j]].goalsum== t[arr[j+1]].goalsum )
						{
							if(t[arr[j+1]].khorde <  t[arr[j]].khorde)
							{
							temp =arr[j];
        					arr[j] = arr[j+1];
        					arr[j+1] = temp; 	
							}
							else if(t[arr[j+1]].khorde==t[arr[j]].khorde)
							{
							if(t[arr[j]].goals[arr[j+1]] <  t[arr[j+1]].goals[arr[j]])
							{
							temp =arr[j];
        					arr[j] = arr[j+1];
        					arr[j+1] = temp;	
							}
							}
						}
												
					}
				}
        	}
        }
        

        }
void roghaba()
{
t[teams[0]].week[1]= teams[2]; t[teams[0]].week[2]=teams[11]; t[teams[0]].week[3]=teams[7]; t[teams[0]].week[4]=teams[12]; t[teams[0]].week[5]=teams[15]; t[teams[0]].week[6]=teams[10]; t[teams[0]].week[7]=teams[14]; t[teams[0]].week[8]=teams[3];
	t[teams[0]].week[9]=teams[9]; t[teams[0]].week[10]=teams[4]; t[teams[0]].week[11]=teams[1]; t[teams[0]].week[12]=teams[8]; t[teams[0]].week[13]=teams[6]; t[teams[0]].week[14]=teams[13]; t[teams[0]].week[15]=teams[5];
	
	t[teams[1]].week[1]= teams[13]; t[teams[1]].week[2]=teams[2]; t[teams[1]].week[3]=teams[12]; t[teams[1]].week[4]=teams[6]; t[teams[1]].week[5]=teams[5]; t[teams[1]].week[6]=teams[7]; t[teams[1]].week[7]=teams[9]; t[teams[1]].week[8]=teams[11];
	t[teams[1]].week[9]=teams[14]; t[teams[1]].week[10]=teams[15]; t[teams[1]].week[11]=teams[0]; t[teams[1]].week[12]=teams[4]; t[teams[1]].week[13]=teams[10]; t[teams[1]].week[14]=teams[3]; t[teams[1]].week[15]=teams[8];	

	t[teams[2]].week[1]= teams[0]; t[teams[2]].week[2]=teams[1]; t[teams[2]].week[3]=teams[15]; t[teams[2]].week[4]=teams[14]; t[teams[2]].week[5]=teams[9]; t[teams[2]].week[6]=teams[6]; t[teams[2]].week[7]=teams[8]; t[teams[2]].week[8]=teams[5];
	t[teams[2]].week[9]=teams[3]; t[teams[2]].week[10]=teams[12]; t[teams[2]].week[11]=teams[10]; t[teams[2]].week[12]=teams[13]; t[teams[2]].week[13]=teams[4]; t[teams[2]].week[14]=teams[7]; t[teams[2]].week[15]=teams[11];	

	t[teams[3]].week[1]= teams[0]; t[teams[3]].week[2]=teams[1]; t[teams[3]].week[3]=teams[15]; t[teams[3]].week[4]=teams[14]; t[teams[3]].week[5]=teams[9]; t[teams[3]].week[6]=teams[6]; t[teams[3]].week[7]=teams[8]; t[teams[3]].week[8]=teams[5];
	t[teams[3]].week[9]=teams[3]; t[teams[3]].week[10]=teams[12]; t[teams[3]].week[11]=teams[10]; t[teams[3]].week[12]=teams[13]; t[teams[3]].week[13]=teams[4]; t[teams[3]].week[14]=teams[7]; t[teams[3]].week[15]=teams[11];	

	t[teams[4]].week[1]= teams[3]; t[teams[4]].week[2]=teams[9]; t[teams[4]].week[3]=teams[14]; t[teams[4]].week[4]=teams[10]; t[teams[4]].week[5]=teams[8]; t[teams[4]].week[6]=teams[11]; t[teams[4]].week[7]=teams[6]; t[teams[4]].week[8]=teams[7];
	t[teams[4]].week[9]=teams[13]; t[teams[4]].week[10]=teams[0]; t[teams[4]].week[11]=teams[5]; t[teams[4]].week[12]=teams[1]; t[teams[4]].week[13]=teams[2]; t[teams[4]].week[14]=teams[12]; t[teams[4]].week[15]=teams[15];	

	t[teams[5]].week[1]= teams[6]; t[teams[5]].week[2]=teams[10]; t[teams[5]].week[3]=teams[3]; t[teams[5]].week[4]=teams[13]; t[teams[5]].week[5]=teams[1]; t[teams[5]].week[6]=teams[12]; t[teams[5]].week[7]=teams[7]; t[teams[5]].week[8]=teams[2];
	t[teams[5]].week[9]=teams[11]; t[teams[5]].week[10]=teams[8]; t[teams[5]].week[11]=teams[4]; t[teams[5]].week[12]=teams[15]; t[teams[5]].week[13]=teams[14]; t[teams[5]].week[14]=teams[9]; t[teams[5]].week[15]=teams[0];	

	t[teams[6]].week[1]= teams[5]; t[teams[6]].week[2]=teams[3]; t[teams[6]].week[3]=teams[8]; t[teams[6]].week[4]=teams[1]; t[teams[6]].week[5]=teams[13]; t[teams[6]].week[6]=teams[2]; t[teams[6]].week[7]=teams[4]; t[teams[6]].week[8]=teams[15];
	t[teams[6]].week[9]=teams[7]; t[teams[6]].week[10]=teams[10]; t[teams[6]].week[11]=teams[11]; t[teams[6]].week[12]=teams[12]; t[teams[6]].week[13]=teams[0]; t[teams[6]].week[14]=teams[14]; t[teams[6]].week[15]=teams[9];	

	t[teams[7]].week[1]= teams[8]; t[teams[7]].week[2]=teams[14]; t[teams[7]].week[3]=teams[0]; t[teams[7]].week[4]=teams[3]; t[teams[7]].week[5]=teams[10]; t[teams[7]].week[6]=teams[1]; t[teams[7]].week[7]=teams[5]; t[teams[7]].week[8]=teams[4];
	t[teams[7]].week[9]=teams[6]; t[teams[7]].week[10]=teams[9]; t[teams[7]].week[11]=teams[13]; t[teams[7]].week[12]=teams[11]; t[teams[7]].week[13]=teams[15]; t[teams[7]].week[14]=teams[2]; t[teams[7]].week[15]=teams[12];	

	t[teams[8]].week[1]= teams[7]; t[teams[8]].week[2]=teams[13]; t[teams[8]].week[3]=teams[6]; t[teams[8]].week[4]=teams[11]; t[teams[8]].week[5]=teams[4]; t[teams[8]].week[6]=teams[9]; t[teams[8]].week[7]=teams[2]; t[teams[8]].week[8]=teams[14];
	t[teams[8]].week[9]=teams[12]; t[teams[8]].week[10]=teams[5]; t[teams[8]].week[11]=teams[15]; t[teams[8]].week[12]=teams[0]; t[teams[8]].week[13]=teams[3]; t[teams[8]].week[14]=teams[10]; t[teams[8]].week[15]=teams[1];	

	t[teams[9]].week[1]= teams[12]; t[teams[9]].week[2]=teams[4]; t[teams[9]].week[3]=teams[11]; t[teams[9]].week[4]=teams[15]; t[teams[9]].week[5]=teams[2]; t[teams[9]].week[6]=teams[8]; t[teams[9]].week[7]=teams[1]; t[teams[9]].week[8]=teams[10];
	t[teams[9]].week[9]=teams[0]; t[teams[9]].week[10]=teams[7]; t[teams[9]].week[11]=teams[14]; t[teams[9]].week[12]=teams[3]; t[teams[9]].week[13]=teams[13]; t[teams[9]].week[14]=teams[5]; t[teams[9]].week[15]=teams[6];
	
	t[teams[10]].week[1]= teams[11]; t[teams[10]].week[2]=teams[5]; t[teams[10]].week[3]=teams[13]; t[teams[10]].week[4]=teams[4]; t[teams[10]].week[5]=teams[7]; t[teams[10]].week[6]=teams[0]; t[teams[10]].week[7]=teams[12]; t[teams[10]].week[8]=teams[9];
	t[teams[10]].week[9]=teams[15]; t[teams[10]].week[10]=teams[6]; t[teams[10]].week[11]=teams[2]; t[teams[10]].week[12]=teams[14]; t[teams[10]].week[13]=teams[1]; t[teams[10]].week[14]=teams[8]; t[teams[10]].week[15]=teams[3];	
	
	t[teams[11]].week[1]= teams[10]; t[teams[11]].week[2]=teams[0]; t[teams[11]].week[3]=teams[9]; t[teams[11]].week[4]=teams[8]; t[teams[11]].week[5]=teams[3]; t[teams[11]].week[6]=teams[4]; t[teams[11]].week[7]=teams[13]; t[teams[11]].week[8]=teams[1];
	t[teams[11]].week[9]=teams[5]; t[teams[11]].week[10]=teams[14]; t[teams[11]].week[11]=teams[6]; t[teams[11]].week[12]=teams[7]; t[teams[11]].week[13]=teams[12]; t[teams[11]].week[14]=teams[15]; t[teams[11]].week[15]=teams[2];	

	t[teams[12]].week[1]= teams[9]; t[teams[12]].week[2]=teams[15]; t[teams[12]].week[3]=teams[1]; t[teams[12]].week[4]=teams[0]; t[teams[12]].week[5]=teams[14]; t[teams[12]].week[6]=teams[5]; t[teams[12]].week[7]=teams[10]; t[teams[12]].week[8]=teams[13];
	t[teams[12]].week[9]=teams[8]; t[teams[12]].week[10]=teams[2]; t[teams[12]].week[11]=teams[3]; t[teams[12]].week[12]=teams[6]; t[teams[12]].week[13]=teams[11]; t[teams[12]].week[14]=teams[4]; t[teams[12]].week[15]=teams[7];	

	t[teams[13]].week[1]= teams[1]; t[teams[13]].week[2]=teams[8]; t[teams[13]].week[3]=teams[10]; t[teams[13]].week[4]=teams[5]; t[teams[13]].week[5]=teams[6]; t[teams[13]].week[6]=teams[15]; t[teams[13]].week[7]=teams[11]; t[teams[13]].week[8]=teams[12];
	t[teams[13]].week[9]=teams[4]; t[teams[13]].week[10]=teams[3]; t[teams[13]].week[11]=teams[7]; t[teams[13]].week[12]=teams[2]; t[teams[13]].week[13]=teams[9]; t[teams[13]].week[14]=teams[0]; t[teams[13]].week[15]=teams[14];	

	t[teams[14]].week[1]= teams[15]; t[teams[14]].week[2]=teams[7]; t[teams[14]].week[3]=teams[4]; t[teams[14]].week[4]=teams[2]; t[teams[14]].week[5]=teams[12]; t[teams[14]].week[6]=teams[3]; t[teams[14]].week[7]=teams[0]; t[teams[14]].week[8]=teams[8];
	t[teams[14]].week[9]=teams[1]; t[teams[14]].week[10]=teams[11]; t[teams[14]].week[11]=teams[9]; t[teams[14]].week[12]=teams[10]; t[teams[14]].week[13]=teams[5]; t[teams[14]].week[14]=teams[6]; t[teams[14]].week[15]=teams[13];	

	t[teams[15]].week[1]= teams[14]; t[teams[15]].week[2]=teams[12]; t[teams[15]].week[3]=teams[2]; t[teams[15]].week[4]=teams[9]; t[teams[15]].week[5]=teams[0]; t[teams[15]].week[6]=teams[13]; t[teams[15]].week[7]=teams[3]; t[teams[15]].week[8]=teams[6];
	t[teams[15]].week[9]=teams[10]; t[teams[15]].week[10]=teams[1]; t[teams[15]].week[11]=teams[8]; t[teams[15]].week[12]=teams[5]; t[teams[15]].week[13]=teams[7]; t[teams[15]].week[14]=teams[11]; t[teams[15]].week[15]=teams[4];	
	t[teams[0]].week[1+15]= teams[2]; t[teams[0]].week[2+15]=teams[11]; t[teams[0]].week[3+15]=teams[7]; t[teams[0]].week[4+15]=teams[12]; t[teams[0]].week[5+15]=teams[15]; t[teams[0]].week[6+15]=teams[10]; t[teams[0]].week[7+15]=teams[14]; t[teams[0]].week[8+15]=teams[3];
	t[teams[0]].week[9+15]=teams[9]; t[teams[0]].week[10+15]=teams[4]; t[teams[0]].week[11+15]=teams[1]; t[teams[0]].week[12+15]=teams[8]; t[teams[0]].week[13+15]=teams[6]; t[teams[0]].week[14+15]=teams[13]; t[teams[0]].week[15+15]=teams[5];
	
	t[teams[1]].week[1+15]= teams[13]; t[teams[1]].week[2+15]=teams[2]; t[teams[1]].week[3+15]=teams[12]; t[teams[1]].week[4+15]=teams[6]; t[teams[1]].week[5+15]=teams[5]; t[teams[1]].week[6+15]=teams[7]; t[teams[1]].week[7+15]=teams[9]; t[teams[1]].week[8+15]=teams[11];
	t[teams[1]].week[9+15]=teams[14]; t[teams[1]].week[10+15]=teams[15]; t[teams[1]].week[11+15]=teams[0]; t[teams[1]].week[12+15]=teams[4]; t[teams[1]].week[13+15]=teams[10]; t[teams[1]].week[14]=teams[3]; t[teams[1]].week[15+15]=teams[8];	

	t[teams[2]].week[1+15]= teams[0]; t[teams[2]].week[2+15]=teams[1]; t[teams[2]].week[3+15]=teams[15]; t[teams[2]].week[4+15]=teams[14]; t[teams[2]].week[5+15]=teams[9]; t[teams[2]].week[6+15]=teams[6]; t[teams[2]].week[7+15]=teams[8]; t[teams[2]].week[8+15]=teams[5];
	t[teams[2]].week[9+15]=teams[3]; t[teams[2]].week[10+15]=teams[12]; t[teams[2]].week[11+15]=teams[10]; t[teams[2]].week[12+15]=teams[13]; t[teams[2]].week[13+15]=teams[4]; t[teams[2]].week[14+15]=teams[7]; t[teams[2]].week[15+15]=teams[11];	

	t[teams[3]].week[1+15]= teams[0]; t[teams[3]].week[2+15]=teams[1]; t[teams[3]].week[3+15]=teams[15]; t[teams[3]].week[4+15]=teams[14]; t[teams[3]].week[5+15]=teams[9]; t[teams[3]].week[6+15]=teams[6]; t[teams[3]].week[7+15]=teams[8]; t[teams[3]].week[8+15]=teams[5];
	t[teams[3]].week[9+15]=teams[3]; t[teams[3]].week[10+15]=teams[12]; t[teams[3]].week[11+15]=teams[10]; t[teams[3]].week[12+15]=teams[13]; t[teams[3]].week[13+15]=teams[4]; t[teams[3]].week[14+15]=teams[7]; t[teams[3]].week[15+15]=teams[11];	

	t[teams[4]].week[1+15]= teams[3]; t[teams[4]].week[2+15]=teams[9]; t[teams[4]].week[3+15]=teams[14]; t[teams[4]].week[4+15]=teams[10]; t[teams[4]].week[5+15]=teams[8]; t[teams[4]].week[6+15]=teams[11]; t[teams[4]].week[7+15]=teams[6]; t[teams[4]].week[8+15]=teams[7];
	t[teams[4]].week[9+15]=teams[13]; t[teams[4]].week[10+15]=teams[0]; t[teams[4]].week[11+15]=teams[5]; t[teams[4]].week[12+15]=teams[1]; t[teams[4]].week[13+15]=teams[2]; t[teams[4]].week[14+15]=teams[12]; t[teams[4]].week[15+15]=teams[15];	

	t[teams[5]].week[1+15]= teams[6]; t[teams[5]].week[2+15]=teams[10]; t[teams[5]].week[3+15]=teams[3]; t[teams[5]].week[4+15]=teams[13]; t[teams[5]].week[5+15]=teams[1]; t[teams[5]].week[6+15]=teams[12]; t[teams[5]].week[7+15]=teams[7]; t[teams[5]].week[8+15]=teams[2];
	t[teams[5]].week[9+15]=teams[11]; t[teams[5]].week[10+15]=teams[8]; t[teams[5]].week[11+15]=teams[4]; t[teams[5]].week[12+15]=teams[15]; t[teams[5]].week[13+15]=teams[14]; t[teams[5]].week[14+15]=teams[9]; t[teams[5]].week[15+15]=teams[0];	

	t[teams[6]].week[1+15]= teams[5]; t[teams[6]].week[2+15]=teams[3]; t[teams[6]].week[3+15]=teams[8]; t[teams[6]].week[4+15]=teams[1]; t[teams[6]].week[5+15]=teams[13]; t[teams[6]].week[6+15]=teams[2]; t[teams[6]].week[7+15]=teams[4]; t[teams[6]].week[8+15]=teams[15];
	t[teams[6]].week[9+15]=teams[7]; t[teams[6]].week[10+15]=teams[10]; t[teams[6]].week[11+15]=teams[11]; t[teams[6]].week[12+15]=teams[12]; t[teams[6]].week[13+15]=teams[0]; t[teams[6]].week[14+15]=teams[14]; t[teams[6]].week[15+15]=teams[9];	

	t[teams[7]].week[1+15]= teams[8]; t[teams[7]].week[2+15]=teams[14]; t[teams[7]].week[3+15]=teams[0]; t[teams[7]].week[4+15]=teams[3]; t[teams[7]].week[5+15]=teams[10]; t[teams[7]].week[6+15]=teams[1]; t[teams[7]].week[7+15]=teams[5]; t[teams[7]].week[8+15]=teams[4];
	t[teams[7]].week[9+15]=teams[6]; t[teams[7]].week[10+15]=teams[9]; t[teams[7]].week[11+15]=teams[13]; t[teams[7]].week[12+15]=teams[11]; t[teams[7]].week[13+15]=teams[15]; t[teams[7]].week[14+15]=teams[2]; t[teams[7]].week[15+15]=teams[12];	

	t[teams[8]].week[1+15]= teams[7]; t[teams[8]].week[2+15]=teams[13]; t[teams[8]].week[3+15]=teams[6]; t[teams[8]].week[4+15]=teams[11]; t[teams[8]].week[5+15]=teams[4]; t[teams[8]].week[6+15]=teams[9]; t[teams[8]].week[7+15]=teams[2]; t[teams[8]].week[8+15]=teams[14];
	t[teams[8]].week[9+15]=teams[12]; t[teams[8]].week[10+15]=teams[5]; t[teams[8]].week[11+15]=teams[15]; t[teams[8]].week[12+15]=teams[0]; t[teams[8]].week[13+15]=teams[3]; t[teams[8]].week[14+15]=teams[10]; t[teams[8]].week[15+15]=teams[1];	

	t[teams[9]].week[1+15]= teams[12]; t[teams[9]].week[2+15]=teams[4]; t[teams[9]].week[3+15]=teams[11]; t[teams[9]].week[4+15]=teams[15]; t[teams[9]].week[5+15]=teams[2]; t[teams[9]].week[6+15]=teams[8]; t[teams[9]].week[7+15]=teams[1]; t[teams[9]].week[8+15]=teams[10];
	t[teams[9]].week[9+15]=teams[0]; t[teams[9]].week[10+15]=teams[7]; t[teams[9]].week[11+15]=teams[14]; t[teams[9]].week[12+15]=teams[3]; t[teams[9]].week[13+15]=teams[13]; t[teams[9]].week[14+15]=teams[5]; t[teams[9]].week[15+15]=teams[6];
	
	t[teams[10]].week[1+15]= teams[11]; t[teams[10]].week[2+15]=teams[5]; t[teams[10]].week[3+15]=teams[13]; t[teams[10]].week[4+15]=teams[4]; t[teams[10]].week[5+15]=teams[7]; t[teams[10]].week[6+15]=teams[0]; t[teams[10]].week[7+15]=teams[12]; t[teams[10]].week[8+15]=teams[9];
	t[teams[10]].week[9+15]=teams[15]; t[teams[10]].week[10+15]=teams[6]; t[teams[10]].week[11+15]=teams[2]; t[teams[10]].week[12+15]=teams[14]; t[teams[10]].week[13+15]=teams[1]; t[teams[10]].week[14+15]=teams[8]; t[teams[10]].week[15+15]=teams[3];	
	
	t[teams[11]].week[1+15]= teams[10]; t[teams[11]].week[2+15]=teams[0]; t[teams[11]].week[3+15]=teams[9]; t[teams[11]].week[4+15]=teams[8]; t[teams[11]].week[5+15]=teams[3]; t[teams[11]].week[6+15]=teams[4]; t[teams[11]].week[7+15]=teams[13]; t[teams[11]].week[8+15]=teams[1];
	t[teams[11]].week[9+15]=teams[5]; t[teams[11]].week[10+15]=teams[14]; t[teams[11]].week[11+15]=teams[6]; t[teams[11]].week[12+15]=teams[7]; t[teams[11]].week[13+15]=teams[12]; t[teams[11]].week[14+15]=teams[15]; t[teams[11]].week[15+15]=teams[2];	

	t[teams[12]].week[1+15]= teams[9]; t[teams[12]].week[2+15]=teams[15]; t[teams[12]].week[3+15]=teams[1]; t[teams[12]].week[4+15]=teams[0]; t[teams[12]].week[5+15]=teams[14]; t[teams[12]].week[6+15]=teams[5]; t[teams[12]].week[7+15]=teams[10]; t[teams[12]].week[8+15]=teams[13];
	t[teams[12]].week[9+15]=teams[8]; t[teams[12]].week[10+15]=teams[2]; t[teams[12]].week[11+15]=teams[3]; t[teams[12]].week[12+15]=teams[6]; t[teams[12]].week[13+15]=teams[11]; t[teams[12]].week[14+15]=teams[4]; t[teams[12]].week[15+15]=teams[7];	

	t[teams[13]].week[1+15]= teams[1]; t[teams[13]].week[2+15]=teams[8]; t[teams[13]].week[3+15]=teams[10]; t[teams[13]].week[4+15]=teams[5]; t[teams[13]].week[5+15]=teams[6]; t[teams[13]].week[6+15]=teams[15]; t[teams[13]].week[7+15]=teams[11]; t[teams[13]].week[8+15]=teams[12];
	t[teams[13]].week[9+15]=teams[4]; t[teams[13]].week[10+15]=teams[3]; t[teams[13]].week[11+15]=teams[7]; t[teams[13]].week[12+15]=teams[2]; t[teams[13]].week[13+15]=teams[9]; t[teams[13]].week[14+15]=teams[0]; t[teams[13]].week[15+15]=teams[14];	

	t[teams[14]].week[1+15]= teams[15]; t[teams[14]].week[2+15]=teams[7]; t[teams[14]].week[3+15]=teams[4]; t[teams[14]].week[4+15]=teams[2]; t[teams[14]].week[5+15]=teams[12]; t[teams[14]].week[6+15]=teams[3]; t[teams[14]].week[7+15]=teams[0]; t[teams[14]].week[8+15]=teams[8];
	t[teams[14]].week[9+15]=teams[1]; t[teams[14]].week[10+15]=teams[11]; t[teams[14]].week[11+15]=teams[9]; t[teams[14]].week[12+15]=teams[10]; t[teams[14]].week[13+15]=teams[5]; t[teams[14]].week[14+15]=teams[6]; t[teams[14]].week[15+15]=teams[13];	

	t[teams[15]].week[1+15]= teams[14]; t[teams[15]].week[2+15]=teams[12]; t[teams[15]].week[3+15]=teams[2]; t[teams[15]].week[4+15]=teams[9]; t[teams[15]].week[5+15]=teams[0]; t[teams[15]].week[6+15]=teams[13]; t[teams[15]].week[7+15]=teams[3]; t[teams[15]].week[8+15]=teams[6];
	t[teams[15]].week[9+15]=teams[10]; t[teams[15]].week[10+15]=teams[1]; t[teams[15]].week[11+15]=teams[8]; t[teams[15]].week[12+15]=teams[5]; t[teams[15]].week[13+15]=teams[7]; t[teams[15]].week[14+15]=teams[11]; t[teams[15]].week[15+15]=teams[4];	

}
        
int fixture(int d,int hafte)
{
	system("cls");
	roghaba();
	int x,y,c;
		FILE *fop=fopen("goals.csv","r");
		if (!fop) {
		perror("fopen");
		return 0;
	}
		for(y=1 ; y<hafte ; y++)
	{
		fscanf(fop,"%d %d ",&t[t[d].week[y]].goals[d] , &t[d].goals[t[d].week[y]]);
	}
	
	for(y=1 ; y<hafte ; y++)
	{
		printf("\n%25s :%d-%d: %s ",t[t[d].week[y]].name,t[t[d].week[y]].goals[d] , t[d].goals[t[d].week[y]] , t[d].name);
		taghvim(hafte);
		printf("\n");
	}
	for(x=hafte ; x<=30 ;x++)
	{

		printf("\n%25s",t[t[d].week[x]].name);
		taghvim(hafte);
		printf("\n");

	}
}
 
 
 
int lineup(int start,int d)
{
	int c,e,x,y,sys=0,def,mid,hafte=1,k,s;
	system("cls");
	printf("For picking each player enter the number on far left\n");
	printf("Caution: If you pick a player in wrong post, his skill will be decreased");
	if(start==1) show_team(d,t[d].tedad);
	if(start==2) show_team(d,t[d].tedad);
	printf("choose your system \n 1. 4-4-2  2. 4-5-1   3. 4-3-3");
	s=getchar();
	sys=getchar() - 48;
	if(sys>3) sys=1;
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
			printf("choose goalkeeper\n");
			scanf("%d" ,&e);
			while( e > t[d].tedad)
			{
				printf("There is not such a player");
				scanf("%d",&e);
			}
	
			t[d].m[c].num = t[d].p[e].num;
			comper=compare(d,e,c);
			while (comper==0){
			printf("It's taken already.choose an other one.");
			scanf("%d" ,&e);
				while( e > t[d].tedad)
			{
				printf("There is not such a player");
				scanf("%d",&e);
			}
			t[d].m[c].num = t[d].p[e].num;
			comper=compare(d,e,c);
		}
			if(e==0) 
			{
				scanf("%d%d",&x,&y);
				change(d,x,y,c);
				scanf("%d" ,&e);
					while( e > t[d].tedad)
			{
				printf("There is not such a player");
				scanf("%d",&e);
			}
			}
			//t[d].m[c].num = t[d].p[e].num;
		//	strcpy(t[d].m[c].name , t[d].p[e].name);
			switcher(c,e,d);
			printf("G %d %s",t[d].m[c].num,t[d].m[c].name);
			printf("\nchoose defenders\n");
	
			}

		
		if(c>1 && c<=def)
		{	scanf("%d" ,&e);
			while( e > t[d].tedad)
			{
				printf("There is not such a player");
				scanf("%d",&e);
			}
			if(e==0) 
			{
				scanf("%d%d",&x,&y);
				change(d,x,y,c);
				scanf("%d" ,&e);
					while( e > t[d].tedad)
			{
				printf("There is not such a player");
				scanf("%d",&e);
					while( e > t[d].tedad)
			{
				printf("There is not such a player");
				scanf("%d",&e);
			}
			}
				t[d].m[c].num = t[d].p[e].num;			
			}
			t[d].m[c].num = t[d].p[e].num;
		comper=compare(d,e,c);
		while (comper==0){
			printf("It's taken already.choose an other one.");
			scanf("%d",&e);
				while( e > t[d].tedad)
			{
				printf("There is not such a player");
				scanf("%d",&e);
			}
			t[d].m[c].num = t[d].p[e].num;
			comper=compare(d,e,c);
		}
			switcher(c,e,d);
			if(t[d].m[c].post!='D') {t[d].m[c].skill -= 10; }
			printf("D%d %d %s",c-1,t[d].m[c].num,t[d].m[c].name);
			if(c==def) printf("\n choose midfielders.");
			
		}
		
		else if(c>def && c<=mid)
		{
				scanf("%d" ,&e);
					while( e > t[d].tedad)
			{
				printf("There is not such a player");
				scanf("%d",&e);
			}
			while(e==0) 
			{
				scanf("%d%d",&x,&y);
				change(d,x,y,c);
				scanf("%d",&e);
					while( e > t[d].tedad)
			{
				printf("There is not such a player");
				scanf("%d",&e);
			}
			}
			t[d].m[c].num = t[d].p[e].num;
			comper=compare(d,e,c);	
		while (comper==0){
			printf("It's taken already.choose an other one.");
			scanf("%d",&e);
				while( e > t[d].tedad)
			{
				printf("There is not such a player");
				scanf("%d",&e);
			}
			t[d].m[c].num = t[d].p[e].num;
	    	comper=compare( d,e, c);
		}
			switcher(c,e,d);
			if(t[d].m[c].post!='M') {t[d].m[c].skill -= 10; t[d].m[c].fitness -= 10;	}
			printf("M%d %d %s",c-5,t[d].m[c].num,t[d].m[c].name);
			if(c==mid) printf("\n choose forwards.");
		}
		else if(c>mid && c<=11)
		{	scanf("%d",&e);
			while( e > t[d].tedad)
			{
				printf("There is not such a player");
				scanf("%d",&e);
			}
			while(e==0) 
			{
				scanf("%d%d",&x,&y);
				change(d,x,y,c);
				scanf("%d",&e);
					while( e > t[d].tedad)
			{
				printf("There is not such a player");
				scanf("%d",&e);
			}
			}
			t[d].m[c].num = t[d].p[e].num;
			comper=compare(d,e,c);	
		while (comper==0){
			printf("It's taken already.choose an other one.");
			scanf("%d",&e);
				while( e > t[d].tedad)
			{
				printf("There is not such a player");
				scanf("%d",&e);
			}
			t[d].m[c].num = t[d].p[e].num;
	    	comper=compare( d,e, c);
		}
			switcher(c,e,d);		
			if(t[d].m[c].post!='A') {t[d].m[c].skill -= 10; t[d].m[c].fitness -= 10;	}
			if(sys==3) 			printf("A%d %d %s",c-8,t[d].m[c].num,t[d].m[c].name);
			else      printf("A%d %d %s",c-9,t[d].m[c].num,t[d].m[c].name);
			name_team(d);

		}

			
}

if (t[d].m[1].post!='G')
{
t[d].m[1].skill-=5;
printf("\nyour golkeeper skill decreased\n");	
}

//---------defender
if(sys==1){
	
if (t[d].m[2].post!='D')
{
t[d].m[2].skill-=5;
printf("\nyour first defender skill decreased\n");
}
if (t[d].m[3].post!='D')
{
t[d].m[3].skill-=5;
printf("\nyour second defender skill decreased\n");	
}

if (t[d].m[4].post!='D'){
t[d].m[4].skill-=5;
printf("\nyour third defender skill decreased\n");
}
	
if (t[d].m[5].post!='D'){
t[d].m[5].skill-=5;
printf("\nyour 4th defender skill decreased\n");	
}

if (t[d].m[6].post!='M')
{
t[d].m[6].skill-=5;
printf("\nyour first midfielder skill decreased\n");
}

if (t[d].m[7].post!='M')
{
t[d].m[7].skill-=5;
printf("\nyour second midfielder skill decreased\n");
}

if (t[d].m[8].post!='M')
{
t[d].m[8].skill-=5;
printf("\nyour third midfielder skill decreased\n");
}

if (t[d].m[9].post!='M')
{
t[d].m[9].skill-=5;
printf("\nyour 4th midfielder skill decreased\n");
}

//----------attacer
if (t[d].m[10].post!='A')
{
t[d].m[10].skill-=5;
printf("\nyour first mohajem skill decreased\n");
}

if (t[d].m[11].post!='A')
{
t[d].m[11].skill-=5;
printf("\nyour second mohajem skill decreased\n");	
}
}
else if(sys==2){
	
if (t[d].m[2].post!='D')
{
t[d].m[2].skill-=5;
printf("\nyour first defender skill decreased\n");
}
if (t[d].m[3].post!='D')
{
t[d].m[3].skill-=5;
printf("\nyour second defender skill decreased\n");	
}

if (t[d].m[4].post!='D'){
t[d].m[4].skill-=5;
printf("\nyour third defender skill decreased\n");
}
	
if (t[d].m[5].post!='D'){
t[d].m[5].skill-=5;
printf("\nyour 4th defender skill decreased\n");	
}

if (t[d].m[6].post!='M')
{
t[d].m[6].skill-=5;
printf("\nyour first midfielder skill decreased\n");
}

if (t[d].m[7].post!='M')
{
t[d].m[7].skill-=5;
printf("\nyour second midfielder skill decreased\n");
}

if (t[d].m[8].post!='M')
{
t[d].m[8].skill-=5;
printf("\nyour third midfielder skill decreased\n");
}

if (t[d].m[9].post!='M')
{
t[d].m[9].skill-=5;
printf("\nyour 4th midfielder skill decreased\n");
}

if (t[d].m[11].post!='M')
{
t[d].m[11].skill-=5;
printf("\nyour 5th midfielder skill decreased\n");
}

//----------attacer
if (t[d].m[11].post!='A')
{
t[d].m[11].skill-=5;
printf("\nyour first mohajem skill decreased\n");
}
}
else if(sys==3){
if (t[d].m[2].post!='D')
{
t[d].m[2].skill-=5;
printf("\nyour first defender skill decreased\n");
}
if (t[d].m[3].post!='D')
{
t[d].m[3].skill-=5;
printf("\nyour second defender skill decreased\n");	
}

if (t[d].m[4].post!='D'){
t[d].m[4].skill-=5;
printf("\nyour third defender skill decreased\n");
}
	
if (t[d].m[5].post!='D'){
t[d].m[5].skill-=5;
printf("\nyour 4th defender skill decreased\n");	
}

if (t[d].m[6].post!='M'){
t[d].m[6].skill-=5;
printf("\nyour first midfielder skill decreased\n");
}

if (t[d].m[7].post!='M')
{
t[d].m[7].skill-=5;
printf("\nyour second midfielder skill decreased\n");
}

if (t[d].m[8].post!='M')
{
t[d].m[8].skill-=5;
printf("\nyour third midfielder skill decreased\n");
}

if (t[d].m[9].post!='A')
{
t[d].m[9].skill-=5;
printf("\nyour first mohajem skill decreased\n");
}


if (t[d].m[10].post!='A')
{
t[d].m[10].skill-=5;
printf("\nyour second mohajem skill decreased\n");
}

if (t[d].m[11].post!='A')
{
t[d].m[11].skill-=5;
printf("\nyour third  mohajem skill decreased\n");	

}

}
}
 
    
int main()
{
//ClearConsoleToColors(10,2);
	srand(time(0));
	int poss[16];
	int i,j;
	int i1,i2;
	for ( i1 = 0; i1 <= 16; i1++) {
		for(i2=0; i2<=16 ; i2++) t[i1].goals[i2]=0;
		t[i1].win=0;
		t[i1].lose=0;
		t[i1].draw=0;
		
	}




	int d,c,e,x,y,sys,def,mid,hafte=1,k,start;
	printf("Do you want to continue or start a new legue???\n");
	printf("enter 1 to continue and 2 to start a new legue\n");
	scanf("%d",&start);
	if(start>2) start=2;
	if(start==2)
	azno();
	else if(start==1)
	azedame();
if(start==2)	
{
	int x;
	shuffle(teams,15);
	system("cls");
	printf("Enter the number of the team you want to pick");
	for(x=1 ; x<=16 ; x++)
	{
		//SetColor(t[x].color);
		printf("\n%d %s\n",x,t[x].name);
		
	}
//SetColor(10);
	scanf("%d",&d);
	while(d>16 || d<1)
	{
		printf("There is not such a team. Try again");
		scanf("%d",&d);		
	}
	for(k=1 ; k<=16 ; k++) //vase ine ke teami k entekhab kardim ro khodemun bechinim
	{
			t[d].r[k]=0;		
	}
	hafte=1;
}

else if(start==1)
{

		FILE *fp=fopen("saved.csv","r");
		if (!fp) {
		perror("fopen");
		return 0;
	}
	char buffer[100];
	//fgets(buffer, 100, fp);
	fscanf(fp,"%d %d",&hafte,&j);
	fscanf(fp,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&teams[0],&teams[1],&teams[2],&teams[3],&teams[4],&teams[5],&teams[6],&teams[7],&teams[8],&teams[9],&teams[10],&teams[11],&teams[12],&teams[13],&teams[14],&teams[15]);
	printf("your current team is : %s\nyou are on week %d\n",t[teams[j]].name,hafte);

		for ( i = 0; i <= 15; i++) {
		fscanf(fp, "%d %s %d %d %d %d %d %d %d \n",&teams[i], t[teams[i]].name,&t[teams[i]].scr, &t[teams[i]].goalsum, &t[teams[i]].khorde , &t[teams[i]].tafazol,&t[teams[i]].win,&t[teams[i]].draw,&t[teams[i]].lose);
		d=teams[j];
	}	

	fclose(fp);
	fp=NULL;
}
	

	
	
	while(hafte<=30)
	{
		char line;
		if(start==2) 
		{
			int x;
			system("cls");
			for(x=0 ; x<=15 ; x++)
			{
				if(d==arr[x]) break;
			}
			printf("Your current team is :%s\nYou are on week :%d\nYour current position is:%d\n",t[d].name,hafte,x+1);
		}
		printf("\npress l to line up your team\npress f to see to see future matches\nif you arranged your team press enter too continue\n");
		line=getchar();
		line=getchar();
		while(line=='f' || line=='l')
		{
		if(line=='f')
		{
			fixture(d,hafte);
			printf("\npress l to line up your team\n");
				
		}
		
		else if(line=='l')
		{
			lineup(start,d);	
		}
		printf("\npress f to see future matches\npress enter to continue\n");
			line=getchar();
			line=getchar();
}
int weeks;	
printf("how many week do you want to simulate?");
scanf("%d",&weeks);
int temp=hafte;

while(weeks>0)	
{

if(hafte==1 || hafte==16)
{
	if(temp==1 || temp==16)  system("cls");
	//if(hafte==1) system("cls");
//	srand(time(0));
//    SetColor(3);
	printf("\n\t\t\t  Week %d\n",hafte);
//	SetColor(10);
	play(teams[1],teams[13],hafte,poss,d);
	play(teams[2],teams[0],hafte,poss,d);
	play(teams[8],teams[7],hafte,poss,d);
	play(teams[11],teams[10],hafte,poss,d);
	play(teams[14],teams[15],hafte,poss,d);
	play(teams[5],teams[6],hafte,poss,d);	
	play(teams[12],teams[9],hafte,poss,d);
	play(teams[3],teams[4],hafte,poss,d);
//	save_status();
	bubble(t,15);
	int c;
	for(c=0 ; c<=15 ; c++) poss[teams[c]]=0;
//	SetColor(15);
	printf("\n--------------------------------------------------------------------------------\n");
//	SetColor(10);

}

else if(hafte==2 || hafte==17)
{
	if(temp==2 || temp==17)  system("cls");
//	SetColor(3);
	printf("\n\t\t\t  Week %d\n",hafte);
//	SetColor(10);
	play(teams[1],teams[2],hafte,poss,d);
	play(teams[8],teams[13],hafte,poss,d);
	play(teams[11],teams[0],hafte,poss,d);
	play(teams[14],teams[7],hafte,poss,d);
	play(teams[5],teams[10],hafte,poss,d);
	play(teams[12],teams[15],hafte,poss,d);	
	play(teams[3],teams[6],hafte,poss,d);
	play(teams[4],teams[9],hafte,poss,d);
	bubble(t,15);
	int c;
	for(c=0 ; c<=15 ; c++) poss[teams[c]]=0;
//	SetColor(15);
	printf("\n--------------------------------------------------------------------------------\n");
//	SetColor(10);

}
else if(hafte==3 || hafte==18)
{
	if(temp==3 || temp==18)  system("cls");
//	SetColor(3);
	printf("\n\t\t\t  Week %d\n",hafte);
//	SetColor(10);
	play(teams[1],teams[12],hafte,poss,d);
	play(teams[3],teams[5],hafte,poss,d);
	play(teams[4],teams[14],hafte,poss,d);
	play(teams[9],teams[11],hafte,poss,d);
	play(teams[6],teams[8],hafte,poss,d);
	play(teams[15],teams[2],hafte,poss,d);
	play(teams[10],teams[13],hafte,poss,d);
	play(teams[7],teams[0],hafte,poss,d);	
	bubble(t,15);
	int c;
	for(c=0 ; c<=15 ; c++) poss[teams[c]]=0;
//	SetColor(15);
	printf("\n--------------------------------------------------------------------------------\n");
//	SetColor(10);
}

else if(hafte==4 || hafte==19)
{
	if(temp==4 || temp==19)  system("cls");
//	SetColor(3);
	printf("\n\t\t\t  Week %d\n",hafte);
//	SetColor(10);
	play(teams[1],teams[6],hafte,poss,d);
	play(teams[15],teams[9],hafte,poss,d);
	play(teams[10],teams[4],hafte,poss,d);
	play(teams[7],teams[3],hafte,poss,d);
	play(teams[0],teams[12],hafte,poss,d);
	play(teams[13],teams[5],hafte,poss,d);
	play(teams[2],teams[14],hafte,poss,d);
	play(teams[8],teams[11],hafte,poss,d);
	bubble(t,15);
	int c;
	for(c=0 ; c<=15 ;c++) poss[teams[c]]=0;
//	SetColor(15);
	printf("\n--------------------------------------------------------------------------------\n");
//	SetColor(10);
}

else if(hafte==5 || hafte==20)
{
	if(temp==5 || temp==20)  system("cls");
//	SetColor(3);
	printf("\n\t\t\t  Week %d\n",hafte);
//	SetColor(10);
	play(teams[1],teams[5],hafte,poss,d);
	play(teams[12],teams[14],hafte,poss,d);
	play(teams[3],teams[11],hafte,poss,d);
	play(teams[4],teams[8],hafte,poss,d);
	play(teams[9],teams[2],hafte,poss,d);
	play(teams[6],teams[13],hafte,poss,d);
	play(teams[15],teams[0],hafte,poss,d);
	play(teams[10],teams[7],hafte,poss,d);	
	bubble(t,15);
	int c;
	for(c=0 ; c<=15 ; c++) poss[teams[c]]=0;
//	SetColor(15);
	printf("\n--------------------------------------------------------------------------------\n");
//	SetColor(10);
}

else if(hafte==6 || hafte==21)
{
	if(temp==6 || temp==21)  system("cls");
//	SetColor(3);
	printf("\n\t\t\t  Week %d\n",hafte);
//	SetColor(10);
	play(teams[1],teams[7],hafte,poss,d);
	play(teams[0],teams[11],hafte,poss,d);
	play(teams[13],teams[15],hafte,poss,d);
	play(teams[2],teams[6],hafte,poss,d);
	play(teams[8],teams[9],hafte,poss,d);
	play(teams[11],teams[4],hafte,poss,d);
	play(teams[14],teams[3],hafte,poss,d);
	play(teams[5],teams[12],hafte,poss,d);	
	bubble(t,15);
	int c;
	for(c=0 ; c<=15 ; c++) poss[teams[c]]=0;
//	SetColor(15);
	printf("\n--------------------------------------------------------------------------------\n");
//	SetColor(10);
}

else if(hafte==7 || hafte==22)
{
	if(temp==7 || temp==22)  system("cls");
//	SetColor(3);
	printf("\n\t\t\t  Week %d\n",hafte);
//	SetColor(10);
	play(teams[1],teams[9],hafte,poss,d);
	play(teams[6],teams[4],hafte,poss,d);
	play(teams[15],teams[3],hafte,poss,d);
	play(teams[10],teams[12],hafte,poss,d);
	play(teams[7],teams[5],hafte,poss,d);
	play(teams[0],teams[14],hafte,poss,d);
	play(teams[13],teams[11],hafte,poss,d);
	play(teams[2],teams[8],hafte,poss,d);	
	bubble(t,15);
	int c;
	for(c=0 ; c<=15 ; c++) poss[teams[c]]=0;
//	SetColor(15);
	printf("\n--------------------------------------------------------------------------------\n");
//	SetColor(10);
}

else if(hafte==8 || hafte==23)
{
	if(temp==8 || temp==23)  system("cls");
//	SetColor(3);
	printf("\n\t\t\t  Week %d\n",hafte);
//	SetColor(10);
	play(teams[1],teams[11],hafte,poss,d);
	play(teams[14],teams[8],hafte,poss,d);
	play(teams[5],teams[2],hafte,poss,d);
	play(teams[12],teams[13],hafte,poss,d);
	play(teams[3],teams[0],hafte,poss,d);
	play(teams[4],teams[7],hafte,poss,d);
	play(teams[9],teams[10],hafte,poss,d);
	play(teams[6],teams[15],hafte,poss,d);	
	bubble(t,15);
	int c;
	for(c=0 ; c<=15 ; c++) poss[teams[c]]=0;
//	SetColor(15);
	printf("\n--------------------------------------------------------------------------------\n");
//	SetColor(10);
}

else if(hafte==9 || hafte==24)
{
	if(temp==9 || temp==24)  system("cls");
//	SetColor(3);
	printf("\n\t\t\t  Week %d\n",hafte);
//	SetColor(10);
	play(teams[1],teams[14],hafte,poss,d);
	play(teams[5],teams[11],hafte,poss,d);
	play(teams[12],teams[8],hafte,poss,d);
	play(teams[3],teams[2],hafte,poss,d);
	play(teams[4],teams[13],hafte,poss,d);
	play(teams[9],teams[0],hafte,poss,d);
	play(teams[6],teams[7],hafte,poss,d);
	play(teams[15],teams[10],hafte,poss,d);	
	bubble(t,15);
	int c;
	for(c=0 ; c<=15 ; c++) poss[c]=0;
//	SetColor(15);
	printf("\n--------------------------------------------------------------------------------\n");
//	SetColor(10);
}

else if(hafte==10 || hafte==25)
{
	if(temp==10 || temp==25)  system("cls");
//	SetColor(3);
	printf("\n\t\t\t  Week %d\n",hafte);
//	SetColor(10);
	play(teams[0],teams[4],hafte,poss,d);
	play(teams[13],teams[3],hafte,poss,d);
	play(teams[2],teams[12],hafte,poss,d);
	play(teams[8],teams[5],hafte,poss,d);
	play(teams[11],teams[14],hafte,poss,d);
	play(teams[1],teams[15],hafte,poss,d);
	play(teams[10],teams[6],hafte,poss,d);
	play(teams[7],teams[9],hafte,poss,d);
	bubble(t,15);
	int c;
	for(c=0 ; c<=15 ; c++) poss[teams[c]]=0;
//	SetColor(15);
	printf("\n--------------------------------------------------------------------------------\n");
//    SetColor(10);	
}

else if(hafte==11 || hafte==26)
{
	if(temp==11 || temp==26)  system("cls");
//	SetColor(3);
	printf("\n\t\t\t  Week %d\n",hafte);
//	SetColor(10);
	play(teams[1],teams[0],hafte,poss,d);
	play(teams[13],teams[7],hafte,poss,d);
	play(teams[2],teams[10],hafte,poss,d);
	play(teams[8],teams[15],hafte,poss,d);
	play(teams[11],teams[6],hafte,poss,d);
	play(teams[14],teams[9],hafte,poss,d);
	play(teams[5],teams[4],hafte,poss,d);
	play(teams[12],teams[3],hafte,poss,d);	
	bubble(t,15);
	int c;
	for(c=0 ; c<=15 ; c++) poss[teams[c]]=0;
//	SetColor(15);
	printf("\n--------------------------------------------------------------------------------\n");
//	SetColor(10);
}

else if(hafte==12 || hafte==27)
{
	if(temp==12 || temp==27)  system("cls");
//	SetColor(3);
	printf("\n\t\t\t  Week %d\n",hafte);
//	SetColor(10);
	play(teams[1],teams[4],hafte,poss,d);
	play(teams[9],teams[3],hafte,poss,d);
	play(teams[6],teams[12],hafte,poss,d);
	play(teams[15],teams[5],hafte,poss,d);
	play(teams[10],teams[14],hafte,poss,d);
	play(teams[7],teams[11],hafte,poss,d);
	play(teams[0],teams[8],hafte,poss,d);
	play(teams[13],teams[2],hafte,poss,d);	
	bubble(t,15);
	int c;
	for(c=0 ; c<=15 ; c++) poss[teams[c]]=0;
//	SetColor(15);
	printf("\n--------------------------------------------------------------------------------\n");
//	SetColor(10);
}

else if(hafte==13 || hafte==28)
{
	if(temp==13 || temp==28)  system("cls");
//	SetColor(3);
	printf("\n\t\t\t  Week %d\n",hafte);
//	SetColor(10);
	play(teams[1],teams[10],hafte,poss,d);
	play(teams[7],teams[15],hafte,poss,d);
	play(teams[0],teams[6],hafte,poss,d);
	play(teams[13],teams[9],hafte,poss,d);
	play(teams[2],teams[4],hafte,poss,d);
	play(teams[8],teams[3],hafte,poss,d);
	play(teams[11],teams[12],hafte,poss,d);
	play(teams[14],teams[5],hafte,poss,d);
	bubble(t,15);
	int c;
	for(c=0 ; c<=15 ; c++) poss[teams[c]]=0;
//	SetColor(15);
	printf("\n--------------------------------------------------------------------------------\n");
//	SetColor(10);
}

else if(hafte==14 || hafte==29)
{
	if(temp==14 || temp==29)  system("cls");
//	SetColor(3);
	printf("\n\t\t\t  Week %d\n",hafte);
//	SetColor(10);
	play(teams[1],teams[3],hafte,poss,d);
	play(teams[4],teams[12],hafte,poss,d);
	play(teams[9],teams[5],hafte,poss,d);
	play(teams[6],teams[14],hafte,poss,d);
	play(teams[15],teams[11],hafte,poss,d);
	play(teams[10],teams[8],hafte,poss,d);
	play(teams[7],teams[2],hafte,poss,d);
	play(teams[0],teams[13],hafte,poss,d);	
	bubble(t,15);
	int c;
	for(c=0 ; c<=15 ; c++) poss[teams[c]]=0;
//	SetColor(15);
	printf("\n--------------------------------------------------------------------------------\n");
//	SetColor(10);
}

else if(hafte==15 || hafte==30)
{
	if(temp==15 || temp==30)  system("cls");
//	SetColor(3);
	printf("\n\t\t\t  Week %d\n",hafte);
//	SetColor(10);
	play(teams[1],teams[8],hafte,poss,d);
	play(teams[11],teams[2],hafte,poss,d);
	play(teams[14],teams[13],hafte,poss,d);
	play(teams[5],teams[0],hafte,poss,d);
	play(teams[12],teams[7],hafte,poss,d);
	play(teams[3],teams[10],hafte,poss,d);
	play(teams[4],teams[15],hafte,poss,d);
	play(teams[9],teams[6],hafte,poss,d);	
	bubble(t,15);
	int c;
	for(c=0 ; c<=15 ; c++) poss[teams[c]]=0;
//	SetColor(15);
	printf("\n--------------------------------------------------------------------------------\n");
//	SetColor(10);
}
weeks--;
hafte++;	
}
int counter;
for(counter=0 ; counter<=15 ; counter++)
{
	t[teams[counter]].tafazol= t[teams[counter]].goalsum - t[teams[counter]].khorde;
}
printf("To see table press t\nTo save press s\npress any other letter to continue");



char b=getchar();
b=getchar();

while(b!='e')
{
 if(b=='s')
{
		FILE *fp=fopen("saved.csv","w");
		if (!fp) {
		perror("fopen");
		return 0;
	}
	int i,j,c;
	for(j=0 ; j<=15 ;j++)
	{
		if(d==teams[j]) break;
	}

	fprintf(fp,"%d %d\n",hafte,j);
	fprintf(fp,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",teams[0],teams[1],teams[2],teams[3],teams[4],teams[5],teams[6],teams[7],teams[8],teams[9],teams[10],teams[11],teams[12],teams[13],teams[14],teams[15]);
	for ( i = 0; i <= 15; i++) {
		fprintf(fp, "%d %s %d %d %d %d %d %d %d \n",teams[i], t[teams[i]].name,t[teams[i]].scr, t[teams[i]].goalsum, t[teams[i]].khorde , t[teams[i]].tafazol,t[teams[i]].win,t[teams[i]].draw,t[teams[i]].lose);
		t[arr[i]].goalsum=0;
	}
	for(c=1 ; c<=16 ;c++)	taghire_form(c);
	fclose(fp);
	fp=NULL;
	
	FILE *fop=fopen("goals.csv","w");
		if (!fop) {
		perror("fopen");
		return 0;
	}
	for(c=1 ; c<=hafte-1 ; c++)
	{
		fprintf(fop,"%d %d\n ",t[t[d].week[c]].goals[d],t[d].goals[t[d].week[c]]);
	}
	fclose(fop);
	fop=NULL;
}	

else if(b=='t')
{
	int i;
	system("cls");
	printf("Position   Club\t\tPoints      GF       GA      GD     Won    Drawn    Lost" );
    for(i=0 ; i<=15 ; i++)
    {
//    	SetColor(t[arr[i]].color);
    	 printf("\n%d  %18s\t   %4d    %4d    %4d    %4d    %4d    %4d    %4d",i+1,t[arr[i]].name,t[arr[i]].scr, t[arr[i]].goalsum, t[arr[i]].khorde , t[arr[i]].tafazol,t[arr[i]].win,t[arr[i]].draw,t[arr[i]].lose);
	}
}
else  break;
b=getchar();
b=getchar();
}
if(b=='e') break;

}
if(hafte>30)
{
	for(i=0 ; i<16 ;i++)
	{
		if(arr[i]==d) break;
	}
	printf("\nThis league is over and your teams position is %d",i+1);
} 




	return 0;
}



