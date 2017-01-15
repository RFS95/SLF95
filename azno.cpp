



int azno()
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
		
}
