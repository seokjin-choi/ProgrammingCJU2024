#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define INITSTATUS 100.0        
#define COUNT 10.0


// generating the seed number using the time clock information
void GenRandSeed()
{
    // generating the random number using the time seed
    srand((unsigned int)(time(NULL)));
    return;
}

// generating the random number
double GenRanNumAndCalStdVar (unsigned int nRange,unsigned int Num_1,unsigned int Num_2, unsigned int Num_3,
                              unsigned int Num_4, unsigned int Num_5, unsigned int Num_6, unsigned int Num_7, unsigned int Num_8, unsigned int Num_9, unsigned int Num_10)


{
 
    for (int i = 1; i <= 10; i++)       //10개의 수 랜덤 지정 
    {

        switch (i)
        {
        case 1:Num_1= rand() % nRange;
            break;
        case 2:Num_2 = rand() % nRange;
            break;
        case 3:Num_3 = rand() % nRange;
            break;
        case 4:Num_4 = rand() % nRange;
            break;
        case 5:Num_5 = rand() % nRange;
            break;
        case 6:Num_6 = rand() % nRange;
            break;
        case 7:Num_7 = rand() % nRange;
            break;
        case 8:Num_8 = rand() % nRange;
            break;
        case 9:Num_9 = rand() % nRange;
            break;
        case 10:Num_10 = rand() % nRange;
            break;
        default:
            printf("Check number one more time");

        }
    }
     double sum = Num_1 + Num_2 + Num_3 + Num_4 + Num_5 + Num_6 + Num_7 + Num_8 + Num_9 + Num_10;    //전체 수 합산
     double average = sum / COUNT;      //평균 구하는 식 

    printf("%u %u %u %u %u %u %u %u %u %u\n", Num_1, Num_2, Num_3, Num_4, Num_5, Num_6, Num_7, Num_8, Num_9, Num_10);    //전체 수 출력
    printf("Sum: %.1lf, Average:%.2lf\n", sum, average);                    //합산, 평균 출력



    double variance = ((Num_1 - average) * (Num_1 - average) +              //분산 구하는 식
        (Num_2 - average) * (Num_2 - average) +
        (Num_3 - average) * (Num_3 - average) +
        (Num_4 - average) * (Num_4 - average) +
        (Num_5 - average) * (Num_5 - average) +
        (Num_6 - average) * (Num_6 - average) +
        (Num_7 - average) * (Num_7 - average) +
        (Num_8 - average) * (Num_8 - average) +
        (Num_9 - average) * (Num_9 - average) +
        (Num_10 - average) * (Num_10 - average)) / COUNT;

    double std = sqrt(variance);                        //표준 편차 구하는 식

    printf("Variance: %.1lf, Standard deviation: %.1lf", variance, std);                    //분산,표준편차 출력

    return average;
    
}
/*
void CalStdVar(double average, unsigned int Num_1, unsigned int Num_2, unsigned int Num_3,
                unsigned int Num_4, unsigned int Num_5, unsigned int Num_6, unsigned int Num_7, unsigned int Num_8, unsigned int Num_9, unsigned int Num_10)
{
    double variance = ((Num_1 - average) * (Num_1 - average) +
           (Num_2 - average) * (Num_2 - average) +
           (Num_3 - average) * (Num_3 - average) +
           (Num_4 - average) * (Num_4 - average) +
           (Num_5 - average) * (Num_5 - average) +
           (Num_6 - average) * (Num_6 - average) +
           (Num_7 - average) * (Num_7 - average) +
           (Num_8 - average) * (Num_8 - average) +
           (Num_9 - average) * (Num_9 - average) +
           (Num_10 - average) * (Num_10 - average)) / COUNT;

    double std = sqrt(variance);

    printf("Variance: %.1lf, Standard deviation: %.1lf", variance, std);
}
*/

// main function loop
int main(void)
{
    // assigning seed
    GenRandSeed();

    
    unsigned int Num_1=0, Num_2=0, Num_3=0, Num_4=0, Num_5=0, Num_6=0, Num_7=0, Num_8=0, Num_9=0, Num_10=0;
    
    double average = GenRanNumAndCalStdVar(INITSTATUS, Num_1, Num_2, Num_3, Num_4, Num_5, Num_6, Num_7, Num_8, Num_9, Num_10);

  //  CalStdVar(average, Num_1, Num_2, Num_3, Num_4, Num_5, Num_6, Num_7, Num_8, Num_9, Num_10);
    


    return 0;
}
