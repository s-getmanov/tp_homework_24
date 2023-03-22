#include <stdio.h>

/*Репозиторий к задаче*/
/*https://github.com/s-getmanov/tp_homework_24.git*/

main()
{
    int day;

    printf("Введите номер дня недели (от 1 до 7):");
    scanf("%i", &day);

    switch (day)
    {
    case 1:
        {
            printf("Понедельник");
        }
        break;
    case 2:
        {
            printf("Вторник");
        }
        break;
    case 3:
        {
            printf("Среда");
        }
        break;
    case 4:
        {
            printf("Четверг");
        }
        break;
    case 5:
        {
            printf("Пятница");
        }
        break;
    case 6:
        {
            printf("Суббота");
        }
        break;
    case 7:
        {
            printf("Воскресенье");
        }
        break;
    
    default:
        {
            printf("Error");
        }
    };
}
