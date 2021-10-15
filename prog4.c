#include <stdio.h>
int main (void){
    int iCount1;
    float fMax,fMin,fTemp;
    
    fMax = -99999.0;
    fMin = 99999.0;
    for(iCount1 = 0;iCount1 < 10;iCount1++){
        scanf("%f",&fTemp);
        if (fTemp > fMax) fMax = fTemp;
        if (fTemp < fMin) fMin = fTemp;
    }
    printf("max:%4.2f\n",fMax);
    printf("min:%4.2f\n",fMin);
}