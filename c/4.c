#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAXNAME 10//---------------------------------------------------------
#define MAXDAY 20
int main(){
    char name[MAXNAME],birthday[MAXDAY] ;
    int age, number;
    printf("#################################################################\n");
    printf("\t\t: Name: ");
    gets(name);
    printf("\t\t: age: ");
    scanf("%d",&age);
    printf("\t\t: Mobile number: ");
    scanf("%f",&number);//----------------------------
    printf("\t\t: Birthday(d/m/y): ");
    scanf("%s",&birthday);//--------------------------
    printf("#################################################################\n");
    printf("%s %d old Birthday is %s Mobile number: %d", age, name, number, birthday);//------------------------------
    getch();
    return 0;
}