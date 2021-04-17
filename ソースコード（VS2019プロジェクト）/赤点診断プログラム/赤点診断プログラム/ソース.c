#include <stdio.h>

int main() {

    double a, b, d, e, g, h, i, j, Answer, y, n;
    int f;

    y = 0;
    n = 0;
    g = 0;
    j = 0;

        printf("課題評定割合は？\n");
        scanf_s("%lf", &a);

    d = a / 100;

        printf("試験評価割合は？\n");
        scanf_s("%lf", &b);

    e = b / 100;

        printf("評定割合の入力が完了しました。\n");

        printf("課題点を満点と仮定して計算しますか？\n1（はい）\n0（いいえ）\n");
        scanf_s("%d", &f);

    if (f == 1) {
        g = a;
        printf("試験の点数（の平均）の入力\n");
        scanf_s("%lf", &j);

        i = j * e;
        Answer = g + i;

    }
    else {
        printf("課題点を入力\n");
        scanf_s("%lf", &h);

        g = h * d;
        printf("試験の点数（の平均）を入力\n");
        scanf_s("%lf", &i);

        j = i * e;
        Answer = g + j;
    }
    printf("合計点は%lfだよ\n", Answer);

    if (Answer <60) {
            printf("【！警告！】赤点です！！\n");
    }

    system("pause");
    return 0;
}
