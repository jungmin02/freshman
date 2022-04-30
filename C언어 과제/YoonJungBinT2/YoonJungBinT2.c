
#include <stdio.h>

int main()
{
    char name[20], phonenum[20], place[20], startday[20], eat[20], bar[20];
    int room, stay, price = 0;
    printf("------------------------------------------\n");
    printf("        숙박 예약 프로그램 입니다. \n");
    printf("------------------------------------------\n");
    printf("이름을 입력하세요:");
    scanf("%s", name);
    printf("전화번호를 입력해주세요:");
    scanf("%s", phonenum);
    printf("여행장소를 입력해주세요:");
    scanf("%s", place);
    printf("출발날짜를 입력해 주세요(xxxx/xx/xx):");
    scanf("%s", startday);
    printf("총 숙박일을  입력해주세요:");
    scanf("%d", &stay);
    printf("예약 하실 방수를 입력해주세요:");
    scanf("%d", &room);
    printf("조식신청을 입력해주세요[O,X]:");
    scanf("%s", eat);
    printf("바베큐신청을 입력해주세요[O,X]:");
    scanf("%s", bar);

    price = 10000 + stay * room * 100000;

    printf("------------------------------------------\n");
    printf("이름 : %s\n", name);
    printf("전화번호 : %s\n", phonenum );
    printf("여행장소 : %s\n", place);
    printf("출발날짜 : %s\n", startday);
    printf("총 숙박일 : %d\n", stay);
    printf("방수 : %d개의 방이 예약 되었습니다\n", room);
    printf("조식신청 : %s\n", eat);
    printf("바베큐신청 : %s\n", bar);
    printf("총 가격 : %d\n", price);
    printf("(가격 = 여행비 10만 + 방수 X 숙박일 X 10만)\n");
    
    printf("------------------------------------------\n");
    printf("        이용해 주셔서 감사합니다\n");
    printf("            즐거운 여행되십시오\n");
    printf("------------------------------------------\n");

    return 0;
}
