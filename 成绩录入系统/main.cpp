

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Stu{
 char Number[20];
 char Name[20];
 char Sex[20];
 char Birth[20];
 char Class[30];
 char Phone[20];
 int Judge1[5];
 int Judge2[5];
 int Judge3[5];
 int Judge4[5];
 int Judge5[5];
 int *p;
 struct Stu *next;
 };
int main(){
int min,max,average=0;
int i,n,t=0,n1,m,j=0;
    scanf("%d %d",&n,&m);
struct Stu a[n][m];
struct Stu *head,*p;
    head=&a[t][0];
    a[t][0].next=&a[t+1][0];
    p=head;
    FILE *s;
    FILE *b;
    b=fopen("/Users/s20171105115/Desktop/test.csv","a");
    if((s=fopen("/Users/s20171105115/Desktop/studentdata.csv","r"))==0)
    {
        printf("文件不存在\n");
    }
    else{
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(p!=0){
                   fscanf(s,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s",&a[i][j].Number,&a[i][j].Name,&a[i][j].Sex,&a[i][j].Birth,&a[i][j].Class,&a[i][j].Phone,&a[i][j].Judge1,&a[i][j].Judge2,&a[i][j].Judge3,&a[i][j].Judge4,&a[i][j].Judge5);
                   printf("%s/%s/%s/%s/%s/%s/%s/%s/%s/%s/%s",a[i][j].Number,a[i][j].Name,a[i][j].Sex,a[i][j].Birth,a[i][j].Class,a[i][j].Phone,a[i][j].Judge1,a[i][j].Judge2,a[i][j].Judge3,a[i][j].Judge4,a[i][j].Judge5);
                   printf("\n");
                   printf("%s\n",a[i][j].Judge1);
                   fprintf(b,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s\n",a[i][j].Number,a[i][j].Name,a[i][j].Sex,a[i][j].Birth,a[i][j].Class,a[i][j].Phone,a[i][j].Judge1,a[i][j].Judge2,a[i][j].Judge3,a[i][j].Judge4,a[i][j].Judge5);
                   p=p->next;
                   break;
                }
            }
        }
    }
}
