#include <iostream>

template<class T>
class Stack
{
private:
	int LenghtArr = 0;
	T* pArray = new T[LenghtArr];

public:
	void push(T x)
	{
		++LenghtArr;

		//создание нового массива и копирование элементов со старого
		T* newArray = new T[LenghtArr];
		for (int i = 0; i < LenghtArr-1; i++)
		{
			newArray[i] = pArray[i];
		}
		newArray[LenghtArr - 1] = x;

		//обмен динамическими массивами и удаление 
		delete [] pArray;
		pArray = newArray;
		newArray = nullptr;
	}
	T pop() 
	{
		//если из пустого массива пытаются достать значение
		if(LenghtArr < 1) 
		{
			std::cout << "Arrey lenght is ";
			return NULL;
		}


		T x = pArray[LenghtArr - 1];
		--LenghtArr;

		//создание нового массива и копирование элементов со старого
		T* newArray = new T[LenghtArr];
		for (int i = 0; i < LenghtArr; i++)
		{
			newArray[i] = pArray[i];
		}

		//обмен динамическими массивами и удаление 
		delete [] pArray;
		pArray = newArray;
		newArray = nullptr;

		return x;
	}
	void Delete() 
	{
		delete [] pArray;
		pArray = nullptr;
	}
};


int main()
{
	Stack<double> temp;
	temp.push(5.27);
	temp.push(7.7);
	temp.push(9);
	std::cout << temp.pop() << '\n';
	std::cout << temp.pop() << '\n';
	std::cout << temp.pop() << '\n';
	std::cout << temp.pop() << '\n';
	temp.Delete();
	return 0;
}