/*Program to count the number of words in an inputted text.*/
 
#include<stdio.h>
 
int main(){
 
int words=0;
 
int space=0;
 
int i=0;
 
char s[200];
 
printf("ENTER YOUR TEXT , TO END THE INPUT HIT ENTER KEY \n");
 
scanf("%[^\n]s",s);
 
while(s[i]!='\0'){
 
if(s[i]==' ' && space==0){
 
      ++space;     
 
     ++words;
 
          }else{
 
          if(s[i]==' '){;}else{
 
          space=0;
 
          }
 
++i;
 
          }
 
          }
 
if(s[i-1]==' '){--words;}          
 
printf("THE NUMBER OF WORDS IS : %d",words+1);
 
return 0;
 
}
