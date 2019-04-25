#define _OPEN_THREADS
#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *thread(void*  arg){
	char* ret;
	printf("thread entered with argument '%s'\n",arg);
	if((ret = (char*)malloc(20)) ==NULL){
		perror("malloc error!");
		exit(2);
	}
	strcpy(ret,"this is a test!");
	pthread_exit(ret);
			
}

main(){
	pthread_t thid;
	void *ret;

	if(pthread_create(&thid,NULL,thread,"thread 1")!=0){
		perror("pthread_creat error!");
		exit(1);
	}

	if(pthread_join(thid,&ret)!=0){
		perror("pthread_join() error!");
		exit(3);
	}

	printf("thread exited whith '%s'.\n",ret);
}

