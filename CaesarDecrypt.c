#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void caesarEnc(char *cipher , int key , char *text){
    int i=0;
    int tour;
    //int l = strlen(mesg);
    //cipher = malloc(l+1);
    while(cipher[i] != '\0'){
            if(cipher[i] >= 'a' && cipher[i] <= 'z'){
                    tour = (cipher[i]-'a'-key)%26;
                    if(tour<0)
                        tour += 26;
                    text[i] = 'a'+tour;

            }else if(cipher[i] >= 'A' && cipher[i] <= 'Z'){
                    tour = (cipher[i]-'A'-key)%26;
                    if(tour<0)
                        tour += 26;
                    text[i] = 'A'+tour;
            }else{
                text[i] = cipher[i];
            }
            i++;
    }
    //cipher[l] = '\0';
}
int main(){
    char cipher[200] = "abc" ;
    char text[200];
    int key = 3;
    caesarEnc(cipher,key,text);
    //printf("votre message %s apres chifferement devient %s",msg,cipher);
    printf("cipher %s ",text);
    return 0;
}




