int make_file(int a,int b )
{
	FILE *fp=fopen("zakhire.cvs" , "a+");
	if(!fp) {
		perror("fopen");
		return 0;
	}
	fprintf(fp,"%s %d %d %s\n",t[a].name,t[a].goals[b],t[b].goals[a],t[b].name);
	fclose(fp);
	fp=NULL;
	
}
