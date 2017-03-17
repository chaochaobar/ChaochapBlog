#select_sort
##code 
//#include<stdio.h>
int main(){
    int a[10]={87,22,44,1,42,556,24,20,13,16};
    int i,j;
    int min,temp;
    for(i=0;i<9;i++){
            min=i;
        for(j=i+1;j<10;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        if(min!=i){
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    for(i=0;i<10;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
