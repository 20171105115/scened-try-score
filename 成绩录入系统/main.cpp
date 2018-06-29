

#include<stdio.h>
//#include<string>
#include<stdlib.h>
using namespace std;
/*struct Stu{
 string Number;
 string Name;
 string Sex;
 int Birth;
 string Class;
 int Phone;
 int Judge[5];
 };*/
//int main(){
/*int min,max,average=0;
 int i,j,n,t=0;
 cin>>n;
 struct Stu a[10];
 for(i=0;i<n;i++){
 scanf("%s,%s,%s,%d,%s,%d",&a[i].Number,&a[i].Name,&a[i].Sex,&a[i].Birth,&a[i].Class,&a[i].Phone);
 for(j=0;j<5;j++){
 scanf("%d",&a[i].Judge[j]);
 max=0;
 min=0;
 
 if(max<a[i].Judge[j])
 {
 a[i].Judge[max]=a[i].Judge[j];
 }
 if(min>a[i].Judge[j])
 {
 a[i].Judge[min]=a[i].Judge[j];
 }
 average=(a[i].Judge[1]+ a[i].Judge[2]+a[i].Judge[3]+a[i].Judge[4]+a[i].Judge[5]-a[i].Judge[max]-a[i].Judge[min])/3.0;
 }
 }*/

int main(int argc,const char * argv[])
{
    FILE *a;
    FILE *b;
    int n;
    b=fopen("/Users/s20171105115/Desktop/test.csv","a");
    scanf("%d",&n);
    char s1[n+1];
    char s2[n+1];
    char s3[n+1];
    char s4[n+1];
    char s5[n+1];
    char s6[n+1];
    char s7[n+1];
    char s8[n+1];
    char s9[n+1];
    char s10[n+1];
    char s11[n+1];
    char s12[n+1];
    int i;
    
    if((a=fopen("/Users/s20171105115/Desktop/studentdata.csv","r"))==0)
    {
        printf("文件不存在\n");
    }
    else{
        for(i=0;s12[i]!='\n';i++){
            fscanf(a,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s",s1[i],s2[i],s3[i],s4[i],s5[i],s6[i],s7[i],s8[i],s9[i],s10[i],s11[i],s12[i]);
            fprintf(b,"%s %s %s %s %s %s %s %s %s %s %s \n",s1[i],s2[i],s3[i],s4[i],s5[i],s6[i],s7[i],s8[i],s9[i],s10[i],s11[i],s12[i]);
            printf("%s %s %s %s %s %s %s %s %s %s %s \n",s1[i],s2[i],s3[i],s4[i],s5[i],s6[i],s7[i],s8[i],s9[i],s10[i],s11[i],s12[i]);
        }
    }
}
//}
