//À≥–Ú≤È’“
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char ch[20]="jfuekfiej";
    char key='e';
    printf("%s\n",ch);
    printf("%c\n",key);
    int temp=0;
    temp=strlen(ch);
    ch[temp]=key;
    int i=0;
    for(i=0;i<temp+1;i++)
    {
        if(ch[i]==key&&i<temp)
            printf("%d\n",i);
    }
    return 0;
}
