#include <stdio.h>
#include <string.h>
//#include <windows.h>

int main()
{
    FILE *file = fopen("./hello.c", "r+");
    char buf[1000];
    buf[0]='\0';
    char buff[200];
    if(file==NULL){
    	printf("can't open file");
    	return 0;
    }
    while(fgets(buff,200,file)){
	strcat(buf,buff);
    }
    fclose(file);
    int len = strlen(buf);

    for(int i = 0; i < len; i++){
        if(buf[i] == '\n') printf("   \\n");
        else if(buf[i] < 0) printf("%5o",buf[i]+256);
        else if(buf[i] > 127) printf("%5o",buf[i]);
        else printf("%5c",buf[i]);
        if((i + 1) % 16 == 0)
        {
            printf("\n");
            for(int j = i - 15;j <= i;j++){
                if(buf[j] < 0) printf("%5.2x",buf[j]+256);
                else printf("%5.2x",buf[j]);
            }
            printf("\n");
        }
        else if(i == len - 1)
        {
            printf("\n");
            for(int j = i / 16 * 16;j < len;j++){
                if(buf[j] < 0) printf("%5.2x",buf[j]+256);
                else printf("%5.2x",buf[j]);
            }
            printf("\n");
        }
    }
    //system("pause");
    return 0;
}
