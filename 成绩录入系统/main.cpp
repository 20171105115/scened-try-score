

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Stu{
 char Number;
 char Name;
 char Sex;
 int Birth;
 char Class;
 int Phone;
 int Judge1;
 int Judge2;
 int Judge3;
 int Judge4;
 int Judge5;
    struct Stu *next;
 };
int main(){
int min,max,average=0;
int i,n,t=0;
    
scanf("%d",&n);
struct Stu a[n];
struct Stu *head,*p;
    head=&a[t];
    a[t].next=&a[t+1];
    p=head;
    FILE *s;
    FILE *b;
    b=fopen("//Users/s20171105115/Desktop/test.csv","a");
    if((s=fopen("/Users/s20171105115/Desktop/studentdata.csv","r"))==0)
    {
        printf("文件不存在\n");
    }
    else{
        for(i=0;i<n;i++){
            while(p!=0){
            fscanf(s,"%s ,%s ,%s ,%d ,%s ,%d ,%d ,%d ,%d ,%d ,%d",&a[i].Number,&a[i].Name,&a[i].Sex,&a[i].Birth,&a[i].Class,&a[i].Phone,&a[i].Judge1,&a[i].Judge2,&a[i].Judge3,&a[i].Judge4,&a[i].Judge5);
            fprintf(b,"%s ,%s ,%s ,%d ,%s ,%d ,%d ,%d ,%d ,%d ,%d",p->Number,p->Name,p->Sex,p->Birth,p->Class,p->Phone,p->Judge1,p->Judge2,p->Judge3,p->Judge4,p->Judge5);
            printf("%s %s %s %s %s %s %s %s %s %s %s\n",p->Number,p->Name,p->Sex,p->Birth,p->Class,p->Phone,p->Judge1,p->Judge2,p->Judge3,p->Judge4,p->Judge5);
                p=p->next;
            }
        }
    }
 
 

 /*max=a[i].Judge1;
 min=0;
 if(max<a[i].Judge)
 {
 max=a[i].Judge2;
 }
 if(min>a[i].Judge[j])
 {
 a[i].Judge[min]=a[i].Judge[j];
 }
 average=(a[i].Judge[1]+ a[i].Judge[2]+a[i].Judge[3]+a[i].Judge[4]+a[i].Judge[5]-a[i].Judge[max]-a[i].Judge[min])/3.0;
 
 }

/*int main(int argc,const char * argv[])
{
    FILE *a;
    FILE *b;
    b=fopen("//Users/s20171105115/Desktop/test.csv","a");
    char s1[50];
    char s2[50];
    char s3[50];
    char s4[50];
    char s5[50];
    char s6[50];
    char s7[50];
    char s8[50];
    char s9[50];
    char s10[50];
    char s11[50];
    if((a=fopen("/Users/s20171105115/Desktop/studentdata.csv","r"))==0)
    {
        printf("文件不存在\n");
    }
    else{
        
        fscanf(a,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11);
        fprintf(b,"%s %s %s %s %s %s %s %s %s %s %s\n",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11);
        printf("%s %s %s %s %s %s %s %s %s %s %s\n",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11);
    }
    
}*/
}
