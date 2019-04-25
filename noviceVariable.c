#include <stdarg.h>

void minprinf(char* format,...)
{
va_list ap;//points to each unnamed arg in turn
char *p,*sval;
int ival;

va_start(ap,format);//make ap point to 1st unammed arg
for (p = format,*p,++p){
	if(*p!='%'){
		putchar(*p);
		continue;
	}
	switch(*++p){
		case 'd':
			ival = va_arg(ap,int);
			printf("%d",ival);
			break;
		case 's':
			for(sval = va_arg(ap,char *);*sval;++sval){
				puchar(*sval);

			}
			break;
		default:
			putchar(*p);
	}
}
	va_end(ap);//clean up when done
}


int main(int argc,char** argv)
{
FILE *fp;
int i,n;
float value[3];

fp = fopen(argv[1],"rb");
fread(&n,sizeof(int),1,fp);
//fscan(fp,"%d",&n);
for (i=0;i<n;++i)
{
	fread(value,sizeof(fload),3,fp);
//	fscanf(fp,"%f",&value);
	printf("%f\t%f\t%f\t\n",value[0],value[1],value[2]);
}
	return 0;

}
