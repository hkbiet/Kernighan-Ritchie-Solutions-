/*Program in C to print a horizontal histogram of the frequencies of different characters(except 'space') in its input*/
#include<stdio.h> 
int main(){ 
int j; 
char text[1000]; 
char characters[128]; 
int i=0;
for(;i<=127;++i){characters[i]=0;} 
printf("Enter the text hither : \n"); 
scanf("%[^\n]",text); 
i=0; 
while(text[i]!='\0'){ 
j=text[i]; 
characters[j]=characters[j]+1; 
    ++i; 
                   } 
printf("THe frequency distribution Histogram of alphabats :\n"); 
i=0; 
printf("Alphabat\n"); 
for(;i<=127;++i){ 
if((characters[i]!=0)&&(i!=32)){ 
printf("     %c | ",i);
int k=1; 
for(;k<=characters[i];++k){printf("#");} 
printf("\n"); 
                               } 
                } 
printf("        --------------------------------\n"); 
printf("         1   5    10   15    20         30 \n"); 
return 0; 
}
