#include <stdio.h>

int main(void)
{
	int price, input_price, change;   //���ǰ�, ���Աݾ�, �Ž����� ���� ����
	int c_100, c_500, c_1000;    //�Ž����� 100��,500��,1000�� ���� ����

	printf("Enter the item price:");   //���� ���� �Է� �ȳ� �޼��� ���
	scanf_s("%d", &price);      //���� ���� �Է�

	printf("The price of the item is %dwon\nPlease enter the amount:", price);  //���� ���� Ȯ�� �� �ݾ� ���� �޼��� ���
	scanf_s("%d", &input_price);   //���� �ݾ� �Է�

	change = price-input_price;    //�Ž����� ���� ����
	c_1000 = change / 1000;        //1000�� �ִ� ���� ���� ����
	c_500 = (change - (c_1000 * 1000)) / 500;   //500�� �ִ� ���� ���� ����
	c_100 = (change - (c_1000 * 1000) - (c_500 * 500)) / 100;   //100�� �ִ� ���� ���� ����

	printf("Change money: %d\n", change);    //�Ž����� �ݾ� ���
	printf("Change 1000won: %d\n", c_1000);  //�Ž����� 1000��¥�� ���� ��� 
	printf("Change 500won: %d\n", c_500);    //�Ž����� 500��¥�� ���� ���
	printf("Change 100won: %d\n", c_100);    //�Ž����� 100��¥�� ���� ���
	return 0;
}