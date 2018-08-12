/*Program in C to print a vertical histogram of the frequencies of different characters in its input*/
 
#include<stdio.h> 
int main(){ 
int j,t,flag; 
char text[1000]; 
char collector[128]; 
int i=0; 
for(;i<=127;++i){collector[i]=0;} 
 
printf("Enter the text hither : \n"); 
scanf("%[^\n]",text); 
i=0; 
while(text[i]!='\0'){ 
j=text[i]; 
collector[j]=collector[j]+1; 
    ++i; 
                 } 
t=0; 
int q=0;
for(;q<=127;++q){if(collector[q]>0){++t;}} 
char cart[t]; 
char ascii[t]; 
 
i=0; 
q=0; 
for(;q<127;++q){if(collector[q]>0){ 
                   cart[i]=collector[q]; 
                             ascii[i]=q; 
                                    ++i; 
                                  } 
               } 
 
printf("\n\nThe frequency distribution Histogram of characters :\n"); 
printf("\nfrequency\n"); 
 
int y = t+5;
for(;y>=1;--y){ 
 
if(y%2==0){    
 
        if(y>8){ 
 
                printf("        %d|",y); 
             
               } 
            else{           
               printf("        %d |",y); 
                } 
int r=0;             
for(;r<t;++r){ 
 
if(cart[r]==y){ 
 
if(r==0){ 
 
printf("^"); 
 
        }else{ 
 
              printf(" ^"); 
 
             } 
 
cart[r]=cart[r]-1; 
              }else{ 
 
                  printf("  "); 
 
                   } 
                    }printf("\n"); 
 
          } else{ 
                printf("          |"); 
 
flag=0; 
int r=0;
for(;r<t;++r){ 
 
if(cart[r]==y){ 
 
if(r==0){ 
 
printf("^"); 
 
        }else{ 
 
              printf(" ^"); 
 
             } 
 
cart[r]=cart[r]-1; 
              }else{ 
 
                  printf("  "); 
 
                   } 
                    } 
printf("\n"); 
 
               } 
                       } 
printf("          -------------------------------------------\n"); 
 
printf("          "); 
 
int a=0;
for(;a<t;++a){ 
 
printf(" %c",ascii[a]); 
                     } 
 
printf("\n"); 
return 0; 
} 
