// e1.c 
#include<sys/types.h> 
#include<unistd.h>

int main(void) {
	int pid, status;
	pid = fork();
	if(pid == -1) { // erro na chamada de sistema
		perror("erro no fork!");
		exit(-1);
	} else if(pid == 0) {  //processo filho 
		printf("processo: filho\t pid: %d\t ppid: %d\n", getpid(), getppid());
		_exit(0);
	} else { // processo pai
		wait(&status);
		printf("processo: pai\t pid: %d\t ppid: %d\n", getpid(), getppid()); exit(0);
	}
	return 0;
}

/* e2.c 
#include<sys/types.h> 
#include<unistd.h> 
#include<stdio.h> 
#include<stdlib.h>

int main(void) {

	int pid, status, k = 0;
	
	printf("processo: ?\t pid: %d\t antes do fork\n", getpid()); 

	pid = fork();

	printf("processo: ?\t pid: %d\t depois do fork\n", getpid()); 

	if (pid == -1) { / erro na chamada de sistema /
		perror("erro no fork!");
		exit(-1);
	} else if (pid == 0) { / processo filho 
		k += 1000;
		printf("processo: filho\t pid: %d\t k: %d\n", getpid(), k); 
		_exit(0);
	} else { / processo pai  
		wait(&status);
		k += 10;
		printf("processo: pai\t pid: %d\t k: %d\n", getpid(), k); 
		exit(0);
	}

	k += 10;
	printf("processo: ?\t pid: %d\t k: %d\n", getpid(), k);

}*/