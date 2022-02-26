#include <iostream> //библиотека ввода-вывода iostream


//Пространства имён нужны, чтобы логически связывать части программы.
// это указатель на то, где находится функция, к чему она относится
// //Для вызова функции sum нужно сначала указать пространство имён (если в станд. библ. уже есть функция с таким же названием)
//   int a = mynames::sum(5, 12);

int main(int argc, char **argv)
{
	int i;
	size_t j;

	i = 1;
	j = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
    	while (i < argc)
		{
			j = 0;
			while (j < strlen(argv[i]))
			{
				std::cout << (char)toupper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}

//>>  получить из входного потока
//<<  поместить в выходной поток

