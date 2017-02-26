#include <stdio.h>

int main()
{	
	int s,d;
	
	printf ("Vvedite summy vklada:");
	scanf ("%d",&s);
	printf ("Vvedite srok vklada:");
	scanf ("%d",&d); 
	

	if (((s>9999)&&(s<100001))&&((d>0)&&(d<366)))
    {
       if (s<100001)
          {
            if((d>0)&&(d<31))
	          {
	            s=s*0.90;	
              }
	        if((d>30)&&(d<121))
	          {
	            s=s*1.02;	
              }  
	        if((d>120)&&(d<241))
	          {
	            s=s*1.06;	
              }  
	        if((d>240)&&(d<366))
	          {
	            s=s*1.12;	
              }
	      }
		else
		  {
		    if((d>0)&&(d<31))
	          {
	            s=s*0.90;	
              }
	        if((d>30)&&(d<121))
	          {
	            s=s*1.03;	
              }  
	        if((d>120)&&(d<241))
	          {
	            s=s*1.08;	
              }  
	        if((d>240)&&(d<366))
	          {
	            s=s*1.15;	
              }	
		  }
	  printf ("Itog:%d",s);  	    	
	}
	else
	  printf ("Nekorektno vvedeni znacheniya!!");
	  	
	
	
	
	return 0;
}
