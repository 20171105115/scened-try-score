

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Stu{
 char Number[20];
 char Name[20];
 char Sex[20];
 char Birth[20];
 char Class[30];
 char Phone[30];
 char judge1[10];
 char judge2[10];
 char judge3[10];
 char judge4[10];
 char judge5[10];
 int Judge1;
 int Judge2;
 int Judge3;
 int Judge4;
 int Judge5;
 int average;
 struct Stu *next;
 };
int main(){
int average=0;
int i=0,n,t=0,j=0;
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
        fscanf(s,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s",&a[i].Number,&a[i].Name,&a[i].Sex,&a[i].Birth,&a[i].Class,&a[i].Phone,&a[i].judge1,&a[i].judge2,&a[i].judge3,&a[i].judge4,&a[i].judge5);
        printf("numbers,name,sex,dateofbirth,class,phoneNo,judge1,judge2,judge3,judge4,judge5,average\n");
        fprintf(b,"numbers,name,sex,dateofbirth,class,phoneNo,judge1,judge2,judge3,judge4,judge5,average\n");
        p=p->next;
        for(i=0;i<n;i++){
            while(p!=0){
                   fscanf(s,"%s ,%s ,%s ,%s ,%s ,%s ,%d ,%d ,%d ,%d ,%d",&a[i].Number,&a[i].Name,&a[i].Sex,&a[i].Birth,&a[i].Class,&a[i].Phone,&a[i].Judge1,&a[i].Judge2,&a[i].Judge3,&a[i].Judge4,&a[i].Judge5);
                   p=p->next;
                   break;
            }
        }
    }
    int max[20],min[20];
    for(i=0;i<n;i++)
    {
        max[i]=min[i]=a[i].Judge1;
        if(a[i].Judge2>max[i])
            max[i]=a[i].Judge2;
        if(a[i].Judge3>max[i])
            max[i]=a[i].Judge3;
        if(a[i].Judge4>max[i])
            max[i]=a[i].Judge4;
        if(a[i].Judge5>max[i])
            max[i]=a[i].Judge5;
        if(a[i].Judge2<min[i])
            min[i]=a[i].Judge2;
        if(a[i].Judge3<min[i])
            min[i]=a[i].Judge3;
        if(a[i].Judge4<min[i])
            min[i]=a[i].Judge4;
        if(a[i].Judge5<min[i])
            min[i]=a[i].Judge5;
    }
    for(i=0;i<n;i++)
    {
        a[i].average=(a[i].Judge1+a[i].Judge2+a[i].Judge3+a[i].Judge4+a[i].Judge5-max[i]-min[i])/3;
    }
    i=0;
    while(i<n)
    {
        printf("%s/%s/%s/%s/%s/%s/%d/%d/%d/%d/%d/%d\n",a[i].Number,a[i].Name,a[i].Sex,a[i].Birth,a[i].Class,a[i].Phone,a[i].Judge1,a[i].Judge2,a[i].Judge3,a[i].Judge4,a[i].Judge5,a[i].average);
        fprintf(b,"%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%d,%d\n",
                a[i].Number,a[i].Name,a[i].Sex,a[i].Birth,a[i].Class,a[i].Phone,a[i].Judge1,a[i].Judge2,a[i].Judge3,a[i].Judge4,a[i].Judge5,a[i].average);
        i++;
    }

}
