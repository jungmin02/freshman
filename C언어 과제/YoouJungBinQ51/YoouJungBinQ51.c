﻿// YoouJungBinQ51.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{

    int i , score  , mean;
    int total = 0;
    char Grade;

    printf("0: English, 1: Mathematics, 2: C Program, 3: Computer\n");
    for (i = 0; i < 4; i++)
    {
        printf("%d 점수 입력 : " , i);
        scanf_s("%d", &score);
        total += score;
    }

    mean = total / 4;
        
    switch (mean / 5)
    {
    case 19:
        printf("학점은 A+ 입니다\n");
        break;
    case 18:
        printf("학점은 A 입니다\n");
        break;
    case 17:
        printf("학점은 B+ 입니다\n");
        break;
    case 16:
        printf("학점은 B 입니다\n");
        break;
    case 15:
        printf("학점은 C+ 입니다\n");
        break;
    case 14:
        printf("학점은 C 입니다\n");
        break;
    case 13:
        printf("학점은 D+ 입니다\n");
        break;
    case 12:
        printf("학점은 D 입니다\n");
        break;
    default: 
        printf("학점은 F 입니다\n");    
    }
    return 0;
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
