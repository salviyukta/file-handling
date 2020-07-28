#include<stdio.h>
#include<conio.h>
int main()
{
	//1. Pointer to the file
    FILE *fp,*fnew;
    char buff[30],ch,i=0,count=0;
    //2. Opening file through pointer in writing mode
    fp = fopen("fresh.txt","w");
    //3. Input from user(eg:- My Captain)
    printf("\n\n\t\tInput : ");
    
    //4. Writing input to the file
    fgets(buff, sizeof(buff), stdin);
    fprintf(fp, "%s", buff);
    //fputs(buff,fp);
    //5. Closing file
    fclose(fp);
    //6. Open both files in reading(to copy from) or writing modes(to copy to)
    fnew = fopen("new.txt","w");
    fp = fopen("fresh.txt","r");
    //7. Count the number of characters in file
    while(ch!=EOF)
    {
    	ch = getc(fp);
    	count++; 	
	}
	//8. Copy contents in other file in reverse order
	for(i=count-3;i>=0;i--)
	{
		fseek(fp,i,SEEK_SET);
		//printf("\n%d",ftell(fp));
		ch = fgetc(fp);
		fputc(ch,fnew);
	}
	//9. Close both the files
	fclose(fp);
	fclose(fnew);  
	return 0;
}
