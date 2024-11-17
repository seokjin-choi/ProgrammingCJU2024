#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



unsigned int GenRandSeed()       //랜덤 수 설정   100까지 정수
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
    
    for(int i=0;i<10;i++)              //10번 반복
    {
        printf("Guess the number: ");  
        scanf_s("%u", &NumGuess);      
        

        if (NumGuess < RanNum)         //입력한 수가 랜덤수보다 작을 때 Up출력
        {
            printf("Up\n");
           
        }
        else if (NumGuess > RanNum)    //입력한 수가 랜덤수보다 클 때 Down 출력
        {
            printf("Down\n");
            
        }
        else                            //입력한 수와 랜덤수가 같을 때 같다는 문장 출력
        {
            printf("Your number is the same as the random number\n");
            break;
        }
        
    }


    printf("%u", RanNum);      //랜덤으로 정해진 값 출력

    return 0;
}
