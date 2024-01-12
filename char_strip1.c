/*Ecrire une fonction « char_strip » qui prend une chaine de caractères « src » en paramètre et un caractère « c ». La fonction prend un troisième paramètre en sortie « dest ».
La fonction doit parcourir la chaine « src » et retirer toutes les occurrences du caractère « c » et mettre le résultat dans « dest ».
La fonction doit renvoyer un entier non signé représentant le nombre de caractères retirés.
Prototype:
unsigned int char_strip (const char * src, char c, char * dest);*/
/*Ecrire une fonction « str_strip » qui prend trois chaines de caractères en paramètres : « src », « listChar », et « dest ».
La fonction doit parcourir la chaine « src » et retirer toutes les occurrences des caractères qui se trouvent dans « listChar », et mettre le résultat dans « dest ».
La fonction doit renvoyer un entier non signé représentant le nombre de caractères retirés.
Prototype:
unsigned int str_strip (const char * src, const char * listChar, char * dest);*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*1*///travaillant sur une seul chaine en temp
unsigned int char_strip (const char * src, char c, char * dest){
    int i=0,j=0,nb=0;
    //int n = strlen(src);
    while(src[i] != '\0'){
        if(src[i] != c){
            dest[j++] = src[i];
        }else{
            nb++;
        }
        i++;
    }
    dest[j] = '\0';
    return nb;
}

/**/
void char_strip22(char * src , char c , char *dest){
    int i=0,j=0;
    while(src[i] != '\0'){
            if(src[i] != c){
                dest[j++] = src[i];
            }
            i++;
    }
}
/*supprimeer toutes les occurences apres la premiere occurence*/
void char_strip1(char *src ,char c , int *n , char *dest){
    int i, j=0,nb=0,r=0;
    *n = strlen(src);
    for(i=0;i<*n ;i++){
        if(src[i] == c && !r){
            dest[j++] = src[i];
            r=1;
        }else if(src[i] != c){
            dest[j++] = src[i];
        }else{
            nb++;
        }
    }
    //*n -= nb;
    dest[j] = '\0';
}
/*2*///travaillant sur deux chaine en parallele


int main(){
    char *src = "abcdabcdefaabcde";
    char c = 'a';
    char *dest = malloc(strlen(src)+1);
    int m;
    unsigned int n = char_strip(src,c,dest);
    //char_strip1(src,c,&m,dest);
    //char_strip12(src,c,&m);
    //char_strip22(src,c,dest);
    printf("la chaine src = %s  apres qu'on retiree le caractere %c",src,c);
    //printf("le nombre de caracteres retirees est : %d et la nouvelle chaine est : %s",n,dest);

    return 0;

}
