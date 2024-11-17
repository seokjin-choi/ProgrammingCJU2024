#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



unsigned int GenRandSeed()       //���� �� ����   100���� ����
{
    // generating the random number using the time seed
    unsigned int RanNum = (unsigned int)(time(NULL));
    srand(RanNum);
    return rand()%100;
}


// main function loop
int main(void)
{

    // assigning seed
    unsigned int RanNum = GenRandSeed();
    unsigned int NumGuess=0;
    
    for(int i=0;i<10;i++)              //10�� �ݺ�
    {
        printf("Guess the number: ");  
        scanf_s("%u", &NumGuess);      
        

        if (NumGuess < RanNum)         //�Է��� ���� ���������� ���� �� Up���
        {
            printf("Up\n");
           
        }
        else if (NumGuess > RanNum)    //�Է��� ���� ���������� Ŭ �� Down ���
        {
            printf("Down\n");
            
        }
        else                            //�Է��� ���� �������� ���� �� ���ٴ� ���� ���
        {
            printf("Your number is the same as the random number\n");
            break;
        }
        
    }


    printf("%u", RanNum);      //�������� ������ �� ���

    return 0;
}
