#include <stdio.h>

long file_size(FILE *f){
	fseek(f,0,SEEK_END);
	long size= ftell(f);
	fseek(f,0,SEEK_SET);
	return (size);
}

void main()
{
	FILE *in_file=fopen("test.txt","r");
	FILE *out_file=fopen("t.txt","w");
	long in_file_size = file_size(in_file);
	int i;
	printf("File size is %ld",in_file_size);
	
	fseek(in_file,-1,SEEK_END);
	printf("\n Got char: ");
	for(i=in_file_size;i>0;i--)
	{
		char c = fgetc(in_file);
		if(c=='\n')
		{
			fseek(in_file,-3,SEEK_CUR);
			fputc(c,out_file);
			continue;
		}
		printf(" %c ",c);
		fputc(c,out_file);
		fseek(in_file,-2,SEEK_CUR);
	}
	printf("\nDone");
	fclose(in_file);
}
