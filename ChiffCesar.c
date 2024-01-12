#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void caesarEnc(char *mesg , int key , char *cipher){
    int i=0;
    int tour;
    //int l = strlen(mesg);
    //cipher = malloc(l+1);
    while(mesg[i] != '\0'){
            if(mesg[i] >= 'a' && mesg[i] <= 'z'){
                    tour = (mesg[i]-'a'+key)%26;
                    if(tour<0)
                        tour += 26;
                    cipher[i] = 'a'+tour;

            }else if(mesg[i] >= 'A' && mesg[i] <= 'Z'){
                    tour = (mesg[i]-'A'+key)%26;
                    if(tour<0)
                        tour += 26;
                    cipher[i] = 'A'+tour;
            }else{
                cipher[i] = mesg[i];
            }
            i++;
    }
    //cipher[l] = '\0';
}
int main(){
    char msg[200] = "AbcD abc  10 xyz XyZ" ;
    char cipher[200];
    int key = 3;
    caesarEnc(msg,key,cipher);
    //printf("votre message %s apres chifferement devient %s",msg,cipher);
    printf("cipher %s ",cipher);
    return 0;
}
