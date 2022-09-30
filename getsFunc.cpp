#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char *name;
	char *command;
	name = (char *) malloc(10);
	command = (char *) malloc(128);
	printf("Dia chi bien name: %d \n", name);
	printf("Dia chi bien command: %d \n", command);
	printf("Khoang cach bo nho: %d \n", command - name);
	
	printf("Nhap:");
	gets(name);
	printf("Hello %s\n", name);
	system(command);
	return 0;
}
