#include <stdio.h>

#define		TEN		10


int division(int v1, int v2){
	if(v2 == 0){// ������ ���� 0�̶�� �Ʒ� �ڵ带 �����մϴ�. 
		printf("0���� ���� �������� �� �����ϴ�.");
		return 0; //  0�� ����մϴ�. 
	}else{ //������ ���� 0�� �ƴ϶�� �Ʒ� �ڵ带 �����մϴ�.
		int val = v1/v2;
		return val;// ������ ���� ����մϴ�. 
	}
}


int Remainder(int v1, int v2){
	if(v2 == 0){// ������ ���� 0�̶�� �Ʒ� �ڵ带 �����մϴ�. 
		printf("0���� ���� �������� �� �����ϴ�.");
		return 0; //  0�� ����մϴ�. 
	}else{ //������ ���� 0�� �ƴ϶�� �Ʒ� �ڵ带 �����մϴ�.
		int val = v1%v2;
		return val;// ������ ���� ����մϴ�. 
	}
}



int main() {
	int input;
	int dig = 0, sumDig[2] = { 0, 0 };
	int quot, remain;
	int isMult11;
	
	printf("11�� ������� �˰� ���� ������ �Է��ϼ��� >> ");
	scanf_s("%d", &input);
		
	quot = input;
	do {
		remain = Remainder(quot, TEN);
		quot = division(quot, TEN);

		sumDig[dig] += remain;
		dig = !dig;
	} while (quot != 0);
	isMult11 = Remainder((sumDig[0] - sumDig[1]), 11) == 0;
	
	printf("�Է��Ͻ� %d�� 11�� ���%s�ϴ�.\n", input, (isMult11?"��":"�� �ƴ�"));

	system("pause");
	return 0;
}
