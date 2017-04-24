#include <stdio.h> 
#include "deposit.h"

int main() {
	int s,d;
	
	printf ("Vvedite summy vklada:");
	scanf ("%d",&s);
	printf ("Vvedite srok vklada:");
	scanf ("%d",&d); 
	

	if ((s>9999)&&((d>0)&&(d<366)))
        {
          s=itog (s,d);
	}
	else
	  printf ("Nekorektno vvedeni znacheniya!!");
}
