/**
 *1.rename
2,remove
3,file zie
4,check existence 
 *
 *
 *
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

unsigned long long int fileSize(const char * aFileName){
	FILE *fh = fopen( aFileName,"rb");
	fseek ( fh ,0, SEEK_END);
	unsigned long long int size = ftell(fh);
	fclose(fh);
	return (size);

}	

bool fileExists(const char* aFileName){
	FILE* file;
	if(file = fopen(aFileName,"r"))
	{
		fclose(file);
		return true;
	}
	return false;

}

//Driver Program to test above functions
//


int main()

{
	printf("%llu Bytes\n",fileSize("password.txt"));
	printf("%llu Byres\n",fileSize("notes.txt"));

	if(fileExists("olddata.txt")==true)
	{
		printf("the file exists\n");

	}else
	{
		printf("the file doen't exist\n");
	}
	return 0;
}
