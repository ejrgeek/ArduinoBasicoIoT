#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int v[5],maior=0,segmaior=0,i;

    for (i=1; i<=5;i++)
    {
     scanf("%i",&v[i]);
     if (v[i]>maior)
     {
     maior=v[i];
     }
    }
     printf("\n\n");
  for (i=1; i<=5;i++)
    {
      if (v[i]!=maior)
       {
         if (v[i]>segmaior)
         {segmaior=v[i];}
         }
    }



    printf("\nO maior e:%i\n",maior);
    printf("\nO segundo maior e:%i\n",segmaior);

  system("PAUSE");	
  return 0;
}
