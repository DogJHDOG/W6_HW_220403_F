//if - else ������ Ȱ���� �� �� �Ѵ� ���չ�, ���Ϲ��� �ʿ�� X , �ϳ��� ���չ�,�ϳ��� ���Ϲ��̿��� ��� X

//���� ���� ������ = �������̱� ������ ���� ��ȯ��.
//��� �� = (���� ����) ? ����1 : ����2; (�� �϶� 1, �����϶� 2) 
// �ùٸ� ���� point = (value >= 10000)?value*0.1:value*0.5;
// �߸��� ���� (value >= 10000)?point=value*0.1:value*0.5;  , ������ ���� �ʴ´� 
//���� : ��� �� ��ȯ �����̱⿡ ���Ϲ����� ǥ�� �ؾ���, �ܼ��� ���ĸ� ������.

//if ���� ��ȿ�� ���϶� -> switch �� ��ȯ�Ͽ� Ȱ�� ���� 
//switch ���ǹ��� �⺻����
/*����� ���������� ���ϴ� ���� ���Ŀ� ������ �������� 
* ������ ó���Ͽ� ���� ��� ���� �� case���� �ִ� ��� ���� ���Ͽ� ��ɹ� ����
* �� ����� ����� �ƴѰ�� ��� �Ұ� 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROCK        0
#define PAPER       1
#define SCISSORS    2





int main() {

    int winner;
    unsigned A, B;
    printf("0�� �ָ�,1�� ���ڱ�,2�� ���� �Դϴ�\n");
    printf("ù��°�� A, �ι�°�� B �Դϴ�\n");
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