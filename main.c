#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b,c,choix;
    int r=0;
    int r1;
    int r2;
    int r3;
    int vrai=1;
    int faux=0;
    int choix2;
   printf("welcome in my application\n");
   printf("Are u ready !!!\n");
   printf("la question N 1 est : quel est la somme de 4 et 16 \n");
   printf("a: 10 \n");
   printf("b: 20 \n");
   printf("c: 12 \n");
   printf("saisi votre choix \n");
   scanf("%c",&choix);
   if(choix=='a'){
    printf("false\n");
    r-=1;
   }
   else if (choix=='b'){
    printf("true\n");
    r1=r+4;

   }
   else if(choix=='c'){
    printf("false\n");
    r-=1;
   }
   else {
    printf("error!! please write the true character\n");
   }
   printf("la question N 2 est : quel est le produit de 4 et 6 \n");
   printf("a: 10 \n");
   printf("b: 20 \n");
   printf("c: 24 \n");
   printf("saisi votre choix \n");
   scanf("%s",&choix);
   if(choix=='a'){
    printf("false\n");
    r1-=1;
   }
   else if (choix=='c'){
    printf("true\n");
    r2=r1+4;

   }
   else if(choix=='b'){
    printf("false\n");
    r1-=1;
   }
   else {
    printf("error!! please write the true character\n");

   }
   printf("la question N 3 est : quel est la difference entre  4 et 6 \n");
   printf("a: 2 \n");
   printf("b: -2 \n");
   printf("c: 3 \n");
   printf("saisi votre choix \n");
   scanf("%s",&choix);
   if(choix=='c'){
    printf("false\n");
    r2-=1;
   }
   else if (choix=='b'){
    printf("true\n");
    r3=r2+4;

   }
   else if(choix=='a'){
    printf("false\n");
    r2-=1;
   }
   else {
    printf("error!! please write the true character\n");

   }
   printf("the score is %d \n ",r3);

   if ( r3 >=10){
    printf ( " resulta is valide \n");
    }
    else {
        printf("est ce que voulez vous ressayer\n");
        printf("d: oui\n");
        printf("e: faux\n");
        printf("entrer voter choix\n");
        scanf("%s",&choix2);
    }
  /* while(choix=='d'){

 printf("la question N 1 est : quel est la somme de 4 et 16 \n");
   printf("a: 10 \n");
   printf("b: 20 \n");
   printf("c: 12 \n");
   printf("saisi votre choix \n");
   scanf("%c",&choix);
   if(choix=='a'){
    printf("false\n");
    r-=1;
   }
   else if (choix=='b'){
    printf("true\n");
    r1=r+2;

   }
   else if(choix=='c'){
    printf("false\n");
    r-=1;
   }
   else {
    printf("error!! please write the true character\n");
   }
   printf("la question N 2 est : quel est le produit de 4 et 6 \n");
   printf("a: 10 \n");
   printf("b: 20 \n");
   printf("c: 24 \n");
   printf("saisi votre choix \n");
   scanf("%s",&choix);
   if(choix=='a'){
    printf("false\n");
    r1-=1;
   }
   else if (choix=='c'){
    printf("true\n");
    r2=r1+2;

   }
   else if(choix=='b'){
    printf("false\n");
    r1-=1;
   }
   else {
    printf("error!! please write the true character\n");

   }
   printf("la question N 3 est : quel est la difference entre  4 et 6 \n");
   printf("a: 2 \n");
   printf("b: -2 \n");
   printf("c: 3 \n");
   printf("saisi votre choix \n");
   scanf("%s",&choix);
   if(choix=='c'){
    printf("false\n");
    r2-=1;
   }
   else if (choix=='b'){
    printf("true\n");
    r3=r2+2;

   }
   else if(choix=='a'){
    printf("false\n");
    r2-=1;
   }
   else {
    printf("error!! please write the true character\n");

   }

       choix2++;

        }


           printf("the score is %d \n ",r3);*/












    return 0;
}
