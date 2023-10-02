#include <iostream>
using namespace std;

//1) Используя два указателя на массив целых чисел, скопировать один массив в другой.
//Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
#include <iostream>
using namespace std;

void X(int* arr, int* arr1, int size) {

    for (int i = 0; i < size; i++) {

        *(arr + i) = *(arr1 + i);
        cout << *(arr + i) << " ";
    }
}

int main() {
    const int SIZE = 5;
    int arr[SIZE] = { 1, 2, 3, 4, 5 };
    int arr1[SIZE] = { 11, 12, 13, 14, 15 };

    X(arr, arr1, SIZE);

    return 0;
}


//2)---------------------------------------------------------------------------------------------------------------
//Используя указатель на массив целых чисел, изменить порядок следования элементов массива на противоположный.
//Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.

/*
#include <iostream>
using namespace std;

void X(int* arr, int size) {

    for (int i = size - 1; i >= 0; i--) {

        cout << *(arr + i) << " ";
    }
}

int main() {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};

    X(arr, SIZE);

    return 0;
}
*/



//3)-------------------------------------------------------------------------------------------------------------
// Используя два указателя на массивы целых чисел, скопировать один массив в другой так, чтобы во втором
//массиве элементы находились в обратном порядке.
//Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.

/*
#include <iostream>
using namespace std;

void X(int* arr, int* arr1, int size) {

    for (int i = size - 1; i >= 0; i--) {

        *(arr + i) = *(arr1 + i);
        cout << *(arr + i) << " ";
    }
}

int main() {
    const int SIZE = 5;
    int arr[SIZE] = { 1, 2, 3, 4, 5 };
    int arr1[SIZE] = { 11, 12, 13, 14, 15 };

    X(arr, arr1, SIZE);

    return 0;
}
*/



/*
//4)-------------------------------------------------------------------------------------------------------------
//Написать функцию, которая получает указатель на массив и его размер и возвращает сумму
//и произведение его элементов в двух параметрах-указателях.

void Result(int arr[], int SIZE, int* sum, int* multiplication) {
    *sum = 0;
    *multiplication = 1;

    for (int i = 0; i < SIZE; i++) {
        *sum += arr[i];
        *multiplication *= arr[i];
    }
}

int main() {
    const int SIZE = 5;
    int arr[SIZE] = { 1, 2, 3, 4, 5 };

    int sum = 0;
    int multiplication = 1;

    Result(arr, SIZE, &sum, &multiplication);

    cout << "Sum: " << sum << ", Multiplication: " << multiplication << endl;

    return 0;
}
*/

/*
//5) -------------------------------------------------------------------------------------------------------------------
//Написать функцию, которая получает указатель на массив и его размер
//и возвращает количество отрицательных, положительных и нулевых элементов массива с помощью параметров-указателей.


void Result(int arr[], int SIZE, int* positive, int* negative, int* zero) {

    for (int i = 0; i < SIZE; i++) {

        if (arr[i] > 0) {

            (*positive)++;
        }
        else if (arr[i] < 0) {

            (*negative)++;
        }
        else {

            (*zero)++;
        }
    }
}

int main() {
    const int SIZE = 5;
    int arr[SIZE] = { 1, 2, 3, 0, -5 };

    int positive = 0, negative = 0, zero = 0;

    Result(arr, SIZE, &positive, &negative, &zero);

    cout << "Positive: " << positive << "\nNegative: " << negative << "\nZero: " << zero;

    return 0;
}

*/



//6)--------------------------------------------------------------------------------------------------------------------
// Написать функцию, которая принимает массив и с помощью 
//параметров-указателей возвращает 2 результата - индекс максимального элемента и его значение
/*
void Result(int arr[], int SIZE, int* max, int* maxI) {

    *max = arr[0];
    *maxI = 0;

    for (int i = 0; i < SIZE; i++) {


        if (arr[i] > *max) {

            *max = arr[i];
            *maxI = i;
        }
    }
}

int main() {
    const int SIZE = 5;
    int arr[SIZE] = { 1, 2, 3, 4, 5 };
    
    int max = 0;
    int maxI = 0;

    Result(arr, SIZE, &max, &maxI);

    cout << "Max: " << max << "\nMax Index: " << maxI;

    return 0;
}
*/






