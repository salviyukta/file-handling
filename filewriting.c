#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    fp = fopen("fresh.txt","w");
    fprintf(fp,"My Captian");
    fclose(fp);
    return 0;
}
