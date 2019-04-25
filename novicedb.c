#include <stdio.h>
#include <sqlite3.h>

int main(int argc,char* argv[])
{
	sqlite3* db;
	char* zErrMsg = 0;
	int rc;

	rc = sqlite3_open("test.db",&db);

	printf("opend code[%d]\n",rc);
	if(rc)
	{
		fprintf(stderr,"can't open database :%s \n",sqlite3_errmsg(db));
		return 0;

	}else
	{
		fprintf(stderr,"opened database successfully\n");
	}
	sqlite3_close(db);
}
