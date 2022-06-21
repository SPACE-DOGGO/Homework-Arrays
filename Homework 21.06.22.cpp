#include <iostream>
#include <time.h>
using namespace std;

int main()
{
//	setlocale(0, "UKR");
//
//	const int size = 5;
//
//	int numbers[size];
//
//	cout << "По очереди введите 5 чисел" << "\n";
//
//	for (int i = 0; i < size; i++)
//	{
//		cin >> numbers[i];
//	}
//
//	cout << "\n";
//
//	for (int j = size - 1; j >= 0; j--)
//	{
//		cout << numbers[j] << "\n";
//	}

    //const int size = 20;

    //int numbers[size];

    //srand(time(NULL));

    //for (int i = 0; i < size; i++)
    //{
    //    numbers[i] = rand(); 
    //}

    //for (int j = 0; j < size; j++)
    //{
    //    if (numbers[j] % 2 == 0)
    //    {
    //        cout << numbers[j] << "\n";
    //    }
    //}

    //setlocale(0, "UKR");

    //const int size = 10;

    //int numbers[size];

    //int min = -20;
    //int max = 20;

    //int counter = 0;
    //int sum = 0;
    //float average = 0;

    //srand(time(NULL));

    //for (int i = 0; i < size; i++)
    //{
    //    int num = min + (rand() % (max - min + 1));
    //    numbers[i] = num;
    //}

    //for (int i = 0; i < size; i++)
    //{
    //    if (numbers[i] > 0)
    //    {
    //        counter++;
    //        sum += numbers[i];
    //        average += numbers[i];
    //    }
    //    cout << numbers[i] << "\n";
    //}

    //cout << "\nКоличество положительных элементов: " << counter << "\nСумма положительных элементов: " << sum << "\nСреднее арифметическое положительных элементов: " << average / counter << "\n";;

    //setlocale(0, "UKR");

    //srand(time(0));

    //const int size = 100;
    //char chars[size] = {};

    //int digit = 0;
    //int letter = 0;
    //int punctuation = 0;

    //int symbol = 0;

    //for (int i = 0; i < size; i++)
    //{
    //    chars[i] = rand() % 255;

    //    cout << chars[i] << " \n";

    //    if (chars[i] >= 48 && chars[i] <= 57)
    //    {
    //        digit++;
    //    }
    //    else if (chars[i] >= 44 && chars[i] <= 46)
    //    {
    //        punctuation++;
    //    }
    //    else if (chars[i] >= 65 && chars[i] <= 90 or chars[i] >= 97 && chars[i] <= 122)
    //    {
    //        letter++;
    //    }
    //    else
    //    {
    //        symbol++;
    //    }
    //}

    //cout << "\n";
    //cout << "Количество цифр: " << digit << "\n" << "Количество букв: " << letter << "\n" << "Количество знаков пунктуации: " << punctuation << "\n\n" << "Количество прочих символов: " << symbol << "\n";

    //setlocale(0, "UKR");

    //srand(time(0));

    //const int size = 100;

    //int digit;
    //int index = 0;

    //cout << "Введите число: ";
    //cin >> digit;

    //cout << "\n";

    //int numbers[size];

    //for (int i = 0; i < size; i++)
    //{
    //    numbers[i] = rand() / 101;

    //    cout << numbers[i] << "\t";
    //}

    //cout << "\n";

    //for (int j = 0; j < size; j++)
    //{
    //    if (numbers[j] == digit)
    //    {
    //        index++;
    //    }
    //}

    //if (index)
    //{
    //    cout << "\nЧисло встречается в массиве раз: " << index << "\n";
    //}

    //else
    //{
    //    cout << "\nЧисло отсутствует в массиве." << "\n";
    //}

    //setlocale(0, "UKR");

    //const int size = 20;

    //int numbers[size];

    //int min = -10;
    //int max = 30;

    //int sum = 0;

    //srand(time(NULL));

    //for (int i = 0; i < size; i++)
    //{
    //    int num = min + (rand() % (max - min + 1));

    //    numbers[i] = num;
    //}

    //for (int i = 0; i < size; i++)
    //{
    //    cout << numbers[i] << "\n";
    //}

    //for (int i = 0; i < size; ++i)
    //{
    //    if (numbers[i] < 0)
    //    {
    //        for (int j = i + 1; j < size; j++)
    //        {
    //            sum += numbers[j];
    //        }

    //        break;
    //    }
    //}

    //cout << "\nCумма элементов, находящихся в массиве после первого отрицательного элемента: " << sum << "\n";

    //setlocale(0, "UKR");

    //srand(time(0));

    //const int size = 20;

    //int numbers[size];

    //for (int i = 0; i < size; i++)
    //{
    //    numbers[i] = rand() % 101;
    //    cout << numbers[i] << " ";
    //}

    //cout << "\n";

    //int min = numbers[0];
    //int max = numbers[0];

    //int index_min = 0;
    //int index_max = 0;

    //for (int i = 0; i < size; i++)
    //{
    //    if (numbers[i] < min)
    //    {
    //        min = numbers[i];
    //        index_min = i + 1;
    //    }
    //    else if (numbers[i] > max)
    //    {
    //        max = numbers[i];
    //        index_max = i + 1;
    //    }
    //}

    //cout << "\n";

    //cout << "Минимальный элемент массива: " << min << "\nПорядковый номер: " << index_min << "\n\n";

    //cout << "Максимальный элемент массива: " << max << "\nПорядковый номер: " << index_max << "\n";

    //setlocale(0, "UKR");

    //srand(time(0));

    //const int size = 200;

    //int numbers[size];

    //for (int i = 0; i < size; i++)
    //{
    //    numbers[i] = rand() % 201;
    //    cout << numbers[i] << " ";
    //}

    //cout << "\t";

    //float onedigit = 0;
    //float twodigit = 0;
    //float threedigit = 0;

    //for (int i = 0; i < size; i++)
    //{
    //    if (numbers[i] > 99)
    //    {
    //        threedigit++;
    //    }
    //    else if (numbers[i] > 9 && numbers[i] < 100)
    //    {
    //        twodigit++;
    //    }
    //    else
    //    {
    //        onedigit++;
    //    }
    //}

    //cout << "\n\nОдноразрядные числа: " << (onedigit / size) * 100 << "%\n" << "Двухразрядные числа: " << (twodigit / size) * 100 << "%\n" << "Трёхразрядные числа: " << (threedigit / size) * 100 << "%\n";

    //srand(time(0));

    //const int size = 10;

    //int numbers[size];

    //for (int i = 0; i < size; i++)
    //{
    //    numbers[i] = rand() % 101;
    //    cout << numbers[i] << " ";
    //}

    //cout << "\n\n";

    //for (int i = 0; i < size / 2; i++)
    //{
    //    numbers[i] += numbers[size - i - 1];
    //    numbers[size - i - 1] = numbers[i] - numbers[size - i - 1];
    //    numbers[i] = numbers[i] - numbers[size - i - 1];
    //}

    //for (int i = 0; i < size; i++)
    //{
    //    cout << numbers[i] << " ";
    //}

    //cout << "\n";

    srand(time(0));

    const int a = 5;

    const int b = 5;

    const int c = a + b;

    int A[a];
    int B[b];
    int C[c];

    for (int i = 0; i < a; i++)
    {
        A[i] = rand() % 101;
        cout << A[i] << " ";
    }

    cout << "\n";

    for (int i = 0; i < b; i++)
    {
        B[i] = rand() % 101;
        cout << B[i] << " ";
    }

    cout << "\n";

    int index_a = 0;
    int index_b = 0;

    for (int i = 0; i < c;)
    {
        if (index_a < a)
        {
            C[i] = A[index_a];
            index_a++;
            i++;
        }

        if (index_b < b)
        {
            C[i] = B[index_b];
            index_b++;
            i++;
        }
    }

    cout << "\n";

    for (int i = 0; i < c; i++)
    {
        cout << C[i] << " ";
    }

    cout << "\n";
}
