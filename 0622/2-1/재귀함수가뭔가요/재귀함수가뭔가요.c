#include <stdio.h>

void space(int c) {
    for (int i = 0; i < c; i++)
        printf("____");
}

void solution(int n, int c) {
    space(c);
    printf("\"����Լ��� ������?\"\n");

    if (n == 0) {
        space(c);
        printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");

        space(c);
        printf("��� �亯�Ͽ���.\n");

        return;
    }

    space(c);
    printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");

    space(c);
    printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");

    space(c);
    printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");

    solution(--n, ++c);

    space(--c);
    printf("��� �亯�Ͽ���.\n");
}

int main() {
    int N;
    scanf_s("%d", &N);

    printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
    solution(N, 0);
    return 0;
}