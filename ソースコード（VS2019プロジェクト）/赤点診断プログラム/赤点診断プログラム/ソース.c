#include <stdio.h>

int main() {

    double a, b, d, e, g, h, i, j, Answer, y, n;
    int f;

    y = 0;
    n = 0;
    g = 0;
    j = 0;

        printf("�ۑ�]�芄���́H\n");
        scanf_s("%lf", &a);

    d = a / 100;

        printf("�����]�������́H\n");
        scanf_s("%lf", &b);

    e = b / 100;

        printf("�]�芄���̓��͂��������܂����B\n");

        printf("�ۑ�_�𖞓_�Ɖ��肵�Čv�Z���܂����H\n1�i�͂��j\n0�i�������j\n");
        scanf_s("%d", &f);

    if (f == 1) {
        g = a;
        printf("�����̓_���i�̕��ρj�̓���\n");
        scanf_s("%lf", &j);

        i = j * e;
        Answer = g + i;

    }
    else {
        printf("�ۑ�_�����\n");
        scanf_s("%lf", &h);

        g = h * d;
        printf("�����̓_���i�̕��ρj�����\n");
        scanf_s("%lf", &i);

        j = i * e;
        Answer = g + j;
    }
    printf("���v�_��%lf����\n", Answer);

    if (Answer <60) {
            printf("�y�I�x���I�z�ԓ_�ł��I�I\n");
    }

    system("pause");
    return 0;
}
