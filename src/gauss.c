#include "gauss.h"
#include <stdio.h>
#include <math.h>

/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */
#include <math.h>
#include <stdio.h>

int eliminate(Matrix *mat, Matrix *b)
{
    if (mat->c!= mat->r)
    {
        printf("Podana Macierze NIE JEST kwadratowa\n");
        return 1; // Niepoprawny rozmiar macierzy
    }

    else{
    	for (int x = 0; x < mat->c - 1; x++)
    	   {
        // Sprawdzanie osobliwości
        	if (mat->data[x][x]==0)
        	{
            printf("Macierz osobliwa! Zerowy pivot w wierszu %d\n", x + 2);
            return 1;
       		}
		else

        	{
			for(int i=x+1;i<mat->r;i++)
			{
                		double sumka=0;
            			double wsp = mat->data[i][x] / mat->data[x][x];


            			for (int j = x; j <mat->c; j++)
            			{
				mat->data[i][j] -= wsp * mat->data[x][j];
				sumka+=mat->data[i][j];
            			}
					if(sumka!=0)
					{
            				b->data[i][0] -= wsp * b->data[x][0];
					}
					else
                			{
            				printf("Macierz osobliwa! Zerowy wiersz %d\n", i + 1);
           				 return 1;
                			}

			}
		}
	   }
    }    
    return 0; // Sukces
}
         
	

