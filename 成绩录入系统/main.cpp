

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
 struct Stu *next;
 };
int main(){
int min,max,average=0;
int i,n,t=0,n1;
    scanf("%d",&n);
struct Stu a[n];
struct Stu *head,*p;
    head=&a[t];
    a[t].next=&a[t+1];
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
            while(p!=0){
            fscanf(s,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ",a[i].Number,a[i].Name,a[i].Sex,a[i].Birth,a[i].Class,a[i].Phone,a[i].Judge1,a[i].Judge2,a[i].Judge3,a[i].Judge4,a[i].Judge5);
                 printf("%s/%s/%s/%s/%s/%s/%s/%s/%s/%s/%s",p->Number,p->Name,p->Sex,p->Birth,p->Class,p->Phone,p->Judge1,p->Judge2,p->Judge3,p->Judge4,p->Judge5);
                printf("\n");
                fprintf(b,"%s ,%s ,%s ,%s ,%s ,%s ,%d ,%d ,%d ,%d ,%d\n",p->Number,p->Name,p->Sex,p->Birth,p->Class,p->Phone
                ,p->Judge1,p->Judge2,p->Judge3,p->Judge4,p->Judge5);
                p=p->next;
                break;
            }
        }
    }
}
