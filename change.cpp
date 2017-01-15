int form_change(int d)
{	int i;
	for(i=1;i<=t[d].tedad;i++)
	{	if(t[d].p[i].num==t[d].m[i].num)
		t[d].p[i].form += 5;
		else
		t[d].p[i].form -= 5;
		
	}
}	
	
