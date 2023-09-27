#include<iostream>
#include<ctime>
#include<cstdlib>

template<typename T> void fill_arr(T arr[], int const size, T left, T right)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++) arr[i] = rand() % (right - left) + left;
}
template<typename T> void print_arr(T arr[], int const size)
{
	std::cout << "{  ";
	for (int i = 0; i < size; i++) std::cout << arr[i] << "  ";
	std::cout << "}\n";
}
void three_max(int &a, int &b, int &c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	a = max;
	b = max;
	c = max;
}
int foo(int arr[], int const size)
{
	for (int i = 0; i < size; i++)
		if (arr[i] < 0) return arr[i];
	return arr[0];
}

void foo2(int arr1[], int const size1, int arr2[], int const size2)
{
	for(int i=0;i<size2;i++)
		for (int j = 0; j < size1; j++)
		{
			if ((*(arr2 + i)) == (*(arr1+j)))
			{
				arr2[i] = 0;
				break;
			}
		}
}



int main()
{
	
	std::cout << "Task 1 \n";
	std::cout << "Enter three numbers A,B,C - ";
	int a, b, c;
	std::cin >> a>> b>> c;
	three_max(a, b, c);
	std::cout << a << " " << b << " " << c << "\n";
	
	std::cout << "Task 2 \n";
	int const size = 10;
	int arr[size];
	fill_arr(arr, size, -10, 10);
	print_arr(arr, size);
	std::cout << foo(arr, size);
	

	std::cout << "\nTask 3 \n";
	int const size1 = 6, size2 = 5;
	int arr1[size1], arr2[size2];
	fill_arr(arr1, size1, 0, 10);
	print_arr(arr1, size1);
	fill_arr(arr2, size2, 0, 9);
	print_arr(arr2, size2);
	foo2(arr1, size1, arr2, size2);
	print_arr(arr2, size2);



	return 0;
}