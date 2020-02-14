#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAXNAME 10//---------------------------------------------------------
#define MAXDAY 20
int main(){
    char name[MAXNAME];
    char birthday[MAXDAY] ;
    int age, number;
    printf("#################################################################\n");
    printf("\t\t: Name: ");
    gets(name);
    printf("\t\t: age: ");
    scanf("%d",&age);
    printf("\t\t: Mobile number: ");
    scanf("%f",&number);//----------------------------
    printf("\t\t: Birthday(d/m/y): ");
    //fflush(stdin);
    scanf("%c",&birthday);
    printf("#################################################################\n");
    printf("%d %s old Birthday is %s Mobile number: %s", age, name, number, birthday);//------------dep biet lam sao fix luôn
    getch();
    return 0;
}