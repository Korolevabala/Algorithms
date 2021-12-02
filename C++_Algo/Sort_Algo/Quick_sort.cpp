#include <iostream>

using namespace std;

void ft_swap_mass(size_t*	mass, size_t i, size_t	j)
{
	size_t	digit;

	mass[i] = digit;
	mass[i] = mass[j];
	mass[j] = digit;
}
// рекусривная сортировка по возрастанию 

void	ft_quicksort_mass(size_t*	mas, int left, int right)
{
	int base;
	int i;
	int	j;

	i = left;
	j = right;
	base = mas[(i + j) / 2];
	do
	{
		while (mas[i] < base) i++;
		while (mas[j] > base) j--;
		if (i <= j)
		{
			ft_swap_mass(mas, i, j);
			i++;
			j--;
		}
	} while (i < j);
	if (left < j) ft_quicksort_mass(mas, left, j);
	if (i < right) ft_quicksort_mass(mas, i, right);
}

// int main()
// {
// 	size_t* mas = new size_t[5];
// 	mas[0] = 13;
// 	mas[1] = -5;
// 	mas[2] = 9;
// 	mas[3] = 999;
// 	mas[4] = -1125;
// 	ft_quicksort_mass(mas, 0, 4);
// 	cout << mas[0] <<", " << mas[3] << ", " << mas[4];
// }