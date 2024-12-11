#include <iostream>
#include <vector>
#include<string>


void one();
void two();



int main()
{
    setlocale(LC_ALL, "ru");

    std::string dz;
    while (true)
    {
        do
        {
            std::cout << "______________________";
            std::cout << "\nВыберите задания: ";
            std::cout << "\n______________________";
            std::cout << "\n1. задания";
            std::cout << "\n2. задания";
            std::cout << "\n0. выход";
            std::cout << "\n______________________";
            std::cout << "\nВвод: ";
            std::getline(std::cin, dz, '\n');

        } while (dz.size() > 5 || dz[0] < 48 || dz[0] > 56);

        if (dz == "1")
        {
            one();
        }
        if (dz == "2")
        {
            two();
        }
        if (dz == "0")
        {
            break;
        }
    }

}

void one()
{
    int rows, cols;


    std::cout << "Введите кол-во строк: ";
    std::cin >> rows;
    std::cout << "Введите кол-во столбцов: ";
    std::cin >> cols;


    std::vector<std::vector<int>> array(rows, std::vector<int>(cols));


    int firstElement;
    std::cout << "Введите первый элемент: ";
    std::cin >> firstElement;


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 0 && j == 0)
            {
                array[i][j] = firstElement;
            }
            else

            {
                array[i][j] = array[i][j - 1] * 6;
            }
        }
    }


    std::cout << "Созданный массив:" << std::endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << array[i][j] << "\t";
        }
        std::cout << std::endl;
    }


}

void two()
{
    int hols, tols;
    std::cout << "Введите кол-во строк: ";
    std::cin >> hols;
    std::cout << "Ввдеите кол-во столбцов: ";
    std::cin >> tols;

    std::vector<std::vector<int>> arr(hols, std::vector<int>(tols));

    int Elements;
    std::cout << "Введите первый элемент: ";
    std::cin >> Elements;

    for (int i = 0; i < hols; i++)
    {
        for (int j = 0; j < tols; j++)
        {
            if (i == 0 && j == 0)
            {
                arr[i][j] = Elements;
            }
            else

            {
                arr[i][j] = arr[i][j - 1] + 1;
            }
        }
    }

    std::cout << "Созданный массив:" << std::endl;
    for (int i = 0; i < hols; i++)
    {
        for (int j = 0; j < tols; j++)
        {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }


}