#include <stdio.h>

int main()
{
    int tab[8][8];

    
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            tab[i][j] = 0;
        }
    }

    
    tab[0][0] = tab[0][7] = 5;  
    tab[7][0] = tab[7][7] = 5;  

    
    tab[0][1] = tab[0][6] = 4;  
    tab[7][1] = tab[7][6] = 4;  

    
    tab[0][2] = tab[0][5] = 3;  
    tab[7][2] = tab[7][5] = 3;  

 
    tab[0][3] = 2;  
    tab[7][3] = 2; 

    
    tab[0][4] = 1;  
    tab[7][4] = 1;  

   
    for (int j = 0; j < 8; j++)
    {
       tab[1][j] = 6;  
       tab[6][j] = 6;  
    }

   
    printf("Tabuleiro de Xadrez:\n");
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            printf("%d ", tab[i][j]);  
        }
        printf("\n");
    }
   
    return 0;
}
