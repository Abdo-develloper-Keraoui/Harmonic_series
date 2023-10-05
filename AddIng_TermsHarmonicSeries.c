/*How many calculations would it take for the harmonic series sum to reach the value 20.00*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
                int i=1;
                double sum=0;
                while(sum<20.0)
                {
                                sum = sum + (1/(float)i);
                                i++;
                }
                printf("%lf and number k is %d", sum, i);
}
