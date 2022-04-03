//if - else 구문을 활용할 때 꼭 둘다 복합문, 단일문일 필요는 X , 하나는 복합문,하나는 단일문이여도 상관 X

//조건 수식 연산자 = 연산자이기 때문에 값을 반환함.
//결과 값 = (조건 수식) ? 수식1 : 수식2; (참 일때 1, 거짓일때 2) 
// 올바른 예시 point = (value >= 10000)?value*0.1:value*0.5;
// 잘못된 예시 (value >= 10000)?point=value*0.1:value*0.5;  , 오류는 나지 않는다 
//단점 : 결과 값 반환 구조이기에 단일문으로 표현 해야함, 단순한 수식만 가능함.

//if 문이 비효율 적일때 -> switch 로 변환하여 활용 가능 
//switch 조건문의 기본구조
/*상수와 직접적으로 비교하는 조건 형식에 유리한 문법구조 
* 수식을 처리하여 얻은 결과 값을 각 case문에 있는 상수 값과 비교하여 명령문 수행
* 비교 대상이 상수가 아닌경우 사용 불가 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROCK        0
#define PAPER       1
#define SCISSORS    2





int main() {

    int winner;
    unsigned A, B;
    printf("0은 주먹,1은 보자기,2는 가위 입니다\n");
    printf("첫번째는 A, 두번째는 B 입니다\n");
    scanf("%d %d", &A, &B);
    
    winner = A - B;

    if (winner == 1 or winner == -2) winner = 0;
    else if (winner == 0) winner = -1;
    else winner = 1;

    if (A < 3 && B < 3) {
        switch (winner) {
        case 0: printf("A wins.\n"); break;
        case 1: printf("B wins.\n"); break;
        default: printf("Game drew.\n"); break;
        }
    }
}