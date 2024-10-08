#include <stdio.h>

int main(void)
{
	int price, input_price, change;   //물건값, 투입금액, 거스름돈 변수 설정
	int c_100, c_500, c_1000;    //거스름돈 100원,500원,1000원 변수 설정

	printf("Enter the item price:");   //물건 가격 입력 안내 메세지 출력
	scanf_s("%d", &price);      //물건 가격 입력

	printf("The price of the item is %dwon\nPlease enter the amount:", price);  //물건 가격 확인 후 금액 투입 메세지 출력
	scanf_s("%d", &input_price);   //투입 금액 입력

	change = price-input_price;    //거스름돈 공식 선언
	c_1000 = change / 1000;        //1000원 주는 갯수 공식 선언
	c_500 = (change - (c_1000 * 1000)) / 500;   //500원 주는 갯수 공식 선언
	c_100 = (change - (c_1000 * 1000) - (c_500 * 500)) / 100;   //100원 주는 갯수 공식 선어

	printf("Change money: %d\n", change);    //거스름돈 금액 출력
	printf("Change 1000won: %d\n", c_1000);  //거스름돈 1000원짜리 갯수 출력 
	printf("Change 500won: %d\n", c_500);    //거스름돈 500원짜리 갯수 출력
	printf("Change 100won: %d\n", c_100);    //거스름돈 100원짜리 갯수 출력
	return 0;
}