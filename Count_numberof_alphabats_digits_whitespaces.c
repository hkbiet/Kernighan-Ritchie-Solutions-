#include<stdio.h>
int main(){
/*Program in C to count the number of whitespaces ,  number of respective alphabats and the number of repective digits */
int i =0;
char s[1000];
int d[10];
int sp=0;
int alpha[128];
 
for(;i<10;++i){d[i]=0;}
for(i=0;i<=127;++i){alpha[i]=0;}
 
printf("Enter thy text hither : ");
for(i=0;i<1000;++i){
                scanf("%[^\n]s",s);
                    }
i=0;
 
while(s[i]!='\0'){
 
if(s[i]==' '){
          ++sp;
             }else{
 
if(s[i]>='0' && s[i]<='9'){
  
 ++d[s[i]-'0'];
                        }else{
int j=0;
 
if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ){
      
     j=s[i];
      
     ++alpha[j];
      
          }
                               } }  
++i;
}
 
printf("THE TOTAL NUMBER OF WHITESPACES ARE : %d\n\n",sp);
printf("THE TOTAL NUMBER OF RESPECTIVE DIGITS ARE :  \n\n");
for(i=0;i<=9;++i){
printf("DIGIT %d occured %d times \n\n",i,d[i]);
                 }
printf("THE TOTAL NUMBER OF REPECTIVE ALPHABATS ARE : \n\n");
for(i=65;i<=90;++i){
 
printf("THE ALPHABAT %c OCCURED %d TIMES. \n",i,alpha[i]);
 
                  }
 
 
for(i=97;i<=122;++i){
 
printf("THE ALPHABAT %c OCCURED %d TIMES. \n",i,alpha[i]);
 
                  }
 
return 0;
}
