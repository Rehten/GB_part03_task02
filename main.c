#include <stdio.h>

struct square_form {
    int width;
    int length;
    int perimeter;
    int area;
};

typedef struct square_form SquareForm;

void square_calc(SquareForm* figure) {
    // вычисление ширины, и запись в структуру
    figure->perimeter = figure->width * 2 + figure->length * 2;
    figure->area = figure->width * figure->length;
}

int main() {
    SquareForm user_figure;

    printf("Добро пожаловать в мой Прямоугольнико-Сосчитатор.\n");
    printf("Введите длину и ширину прямоугольника, и получите его периметр и площадь. В этой версии поддерживаются только целые числа:\n");

    printf("Длина треугольника равна: ");
    scanf("%d", &user_figure.length);

    printf("Ширина треугольника равна: ");
    scanf("%d", &user_figure.width);

    square_calc(&user_figure);

    printf(
            "При длине %d, и ширине %d периметр равен %d, а площадь %d.",
            user_figure.length,
            user_figure.width,
            user_figure.perimeter,
            user_figure.area
    );

    return 0;
}