//�����ַ���ƥ��
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char str1[30]="";
    char str2[10]="";
    scanf("%s",str1);
    scanf("%s",str2);
    if(BruteForceStringMatch(str1,str2))
        printf("ģʽƥ��ɹ���\n");
    else printf("ģʽƥ��ʧ�ܣ�\n");
    return 0;
}
int BruteForceStringMatch(char str1[],char str2[])
{
    int i,j;
    int len1,len2;
    len1=strlen(str1);
    len2=strlen(str2);
    for(i=0;i<len1-len2;i++)
    {
        j=0;
        while(j<len2&&str1[i+j]==str2[j])
            j++;
        if(j==len2)
        {
            printf("ģʽƥ���״γɹ�λ�ã�%d\n",i);
            return 1;
        }
    }
    return 0;
}
