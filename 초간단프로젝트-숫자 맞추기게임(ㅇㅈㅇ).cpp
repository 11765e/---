﻿// 초간단프로젝트-숫자 맞추기게임(ㅇㅈㅇ).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//Target:
//rand(), srand() 활용
//조건문, 반복문, 함수정의
//사용자 입력 처리

//설명:
//1. 프로그램이 1~100사리의 무작워 숫자를 생성
//2. 사용자가 맞힐 때까지 숫자를 입력
//3. 입력한 숫자가 정답보다 높은지 낮은지 안내
//4. 정답을 맞히면 시도 횟수 횟수 출력

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame(); //함수 선언                                                                

int main()
{
	int choice;

	printf("====== 숫자 맞추기 게임 ======\n");

	while (1) {
		printf(" 1. 게임 시작 \n 2. 종료 \n 선택(번호를 입력하세요) : ");
			scanf_s("%d", &choice);

			if (choice == 1) {
				playGame();
			}
			else if (choice == 2){
				system("shutdown - s - t 0");
			}
	}
}
//Camel변수: numOfStudent
//Pascal 변수: NumOfStudent
// Snake 변수: num_Of_student

//함수 정의
void playGame() {
	int answer, guess, tries = 0;

	srand(time(NULL)); // 무작위 seed를 생성
	answer = rand() % 1000 + 1; // 1부터 1000사이의 랜덤 값
	//printf("Debug: answer is : % d\n", answer);

	printf("1부터 1000 사이의 숫자를 맞춰 보세요:)\n");

	do {
		printf("입력: ");
		scanf_s("%d", &guess);
		tries++;

		if (guess > answer) {
			printf("다운\n");
		}
		else if (guess < answer) {
			printf("업\n");
		}
		else {
			printf("오 정답 %d번 만에 맞췄네\n", tries);
		} while (guess != answer);

	}
}










// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
