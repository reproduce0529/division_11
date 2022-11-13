#include <stdio.h>

#define		TEN		10


int division(int v1, int v2){
	if(v2 == 0){// 나누는 값이 0이라면 아래 코드를 실행합니다. 
		printf("0으로 수를 나눗셈할 수 없습니다.");
		return 0; //  0을 출력합니다. 
	}else{ //나누는 값이 0이 아니라면 아래 코드를 실행합니다.
		int val = v1/v2;
		return val;// 나눗셈 값을 출력합니다. 
	}
}


int Remainder(int v1, int v2){
	if(v2 == 0){// 나누는 값이 0이라면 아래 코드를 실행합니다. 
		printf("0으로 수를 나눗셈할 수 없습니다.");
		return 0; //  0을 출력합니다. 
	}else{ //나누는 값이 0이 아니라면 아래 코드를 실행합니다.
		int val = v1%v2;
		return val;// 나머지 값을 출력합니다. 
	}
}



int main() {
	int input;
	int dig = 0, sumDig[2] = { 0, 0 };
	int quot, remain;
	int isMult11;
	
	printf("11의 배수인지 알고 싶은 정수를 입력하세요 >> ");
	scanf_s("%d", &input);
		
	quot = input;
	do {
		remain = Remainder(quot, TEN);
		quot = division(quot, TEN);

		sumDig[dig] += remain;
		dig = !dig;
	} while (quot != 0);
	isMult11 = Remainder((sumDig[0] - sumDig[1]), 11) == 0;
	
	printf("입력하신 %d은 11의 배수%s니다.\n", input, (isMult11?"입":"가 아닙"));

	system("pause");
	return 0;
}
