/*Program in C to replace each string of one or more blanks by a single blank.*/
#include<stdio.h>
int main(){
char s[200];
int t=0;
int i=0;
printf("Enter your text :\n");
scanf("%[^\n]s",s);
while(s[i]!='\0'){
if(s[i]==' '){
   ++t;
          }else{
          if(t>0){
              t=0; 
              printf(" ");
              printf("%c",s[i]);
                 }else{
                    printf("%c",s[i]);
                      }
               }
++i;
               }
return 0;
}
