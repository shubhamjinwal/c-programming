#include <stdlib.h>
#include <stdio.h>

struct _retire_info
{
  int months;
  double contribution;
  double rate_of_return;
};
typedef struct _retire_info retire_info;

void retirement( int startAge, double initial, retire_info working, retire_info retired)
{
  for(int i=0;i<489;i++)
    {
      if (working.months == 12)
	{
	
	startAge = startAge + 1;
	
	working.months = 0;

	}
      
      printf("Age %3d month %2d you have $%.2lf\n", startAge, working.months, initial);
      
      double bal_rat_wor = initial * working.rate_of_return / 12;
      
      initial = initial + bal_rat_wor;
      
      initial = initial + working.contribution;
      
      working.months = working.months + 1;

    }
  
  startAge = startAge + 1;
  

  
  for (int j = 0; j < 384; j++)
    {
    
    if (retired.months == 12)
      {
      
      startAge = startAge + 1;
      
      retired.months = 0;

      }
    
    printf("Age %3d month %2d you have $%.2lf\n", startAge, retired.months, initial);
    
    double bal_rat_ret = initial * retired.rate_of_return / 12;
    
    initial = initial + bal_rat_ret;
    
    initial = initial + retired.contribution;
    
    retired.months = retired.months + 1;

    }

}


int main(void)
{
  
  retire_info retired;
  
  retire_info working;
  
  int startAge = 27;
  
  double initial = 21345.00;
  
  working.months = 3;
  
  working.contribution = 1000;
  
  working.rate_of_return = 0.045;
  
  retired.months = 0;
  
  retired.contribution = -4000;
  
  retired.rate_of_return = 0.01;
  

  
  retirement (startAge, initial, working, retired);
  

  
  return EXIT_SUCCESS;
  
}
