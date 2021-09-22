#include<stdio.h>
#include<conio.h>
void main(){
	char s[100]; int i;
	clrscr();
	printf("Write a program to check whether the string start with ab or not\n");
	printf("\nRajat Gupta\n1901330100214\n\n\nEnter the string:\n");
	scanf("%s", &s);
	if((s[0]=='a') && (s[1]=='b'))
	printf("Yes, string starts with ab");
	else
	printf("No, string doesnt start with ab");
	getch();
}
