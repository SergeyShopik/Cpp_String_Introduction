#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>

void _2_changeDotToExclMark(char*);
size_t _3_countSymbols(char*, int);
void _4_countDoubles(char*);
char* _6_swapSubstrings(char*, char*, char*);

char* _2_2_deleteWord(char*, char*);
int _2_3_sumOfNums(char*);
int* _2_4_defineNums(char*);
char* _2_4_defineOperations(char*);
void _2_4_result(char*);


int main()
{
	/*size_t count = 0;
	char sub[20];
	char* sptr = new char[100];*/

	//count num of substring in the string
	/*std::cout << "Enter the string\n";
	std::cin.getline(sptr, 100);
	std::cout << "Enter the substring\n";
	std::cin.getline(sub, 20);
	for (char *s = strstr(sptr, sub); s!= nullptr; s = strstr(s + strlen(sub), sub))
	{
		count++;
	}
	std::cout << count << std::endl;*/

	//strtok visualisation
	//char** words = new char* [20]; // words array
	//for (size_t i = 0; i < 20; i++)
	//{
	//	words[i] = new char[15];
	//}
	//char* sptr = new char[200];
	//char copySptr[200];
	//std::cout << "Enter the string\n";
	//std::cin.getline(sptr, 200);
	//strcpy(copySptr, sptr);
	//size_t N = 0;
	//char* s = strtok(copySptr, " ,.-!?");
	//while (s)
	//{
	//	strcpy(words[N++], s);
	//	s = strtok(nullptr, " ,.-!?");
	//}
	//for (size_t i = 0; i < N; i++)
	//{
	//	std::cout << words[i] << std::endl;
	//}
	////bubble sort
	//for (size_t i = N - 1; i >= 1; i--)
	//{
	//	for (size_t j = 0; j < i; j++)
	//	{
	//		if (strcmp(words[j], words[j + 1]) > 0)
	//			std::swap(words[j], words[j + 1]);
	//	}
	//}
	//for (size_t i = 0; i < N; i++)
	//{
	//	std::cout << words[i] << std::endl;
	//}

	// 1. strlen
	/*char str[20];
	strcpy(str, "strlen testing.");
	std::cout << "Length: " << strlen(str) << std::endl;*/

	// 2. Change all dots '.' to exclamation marks '!'.
	/*char dots[100];
	std::cout << "Enter string: ";
	std::cin.getline(dots, 100);
	_2_changeDotToExclMark(dots);
	std::cout << dots << std::endl;*/

	// 3. Count number of times symbol encounters in string.
	/*char symbols[100];
	char target;
	std::cout << "Enter string: ";
	std::cin.getline(symbols, 100);
	std::cout << "Enter target symbol: ";
	std::cin >> target;
	std::cout << _3_countSymbols(symbols, target) << std::endl;*/

	// 4. Find all double-letter combinations and number of their appearances.
	//char str[50] = "Oh no, baby, no what's up yo no up up yo";
	/*std::cout << "Enter string: ";
	std::cin.getline(str, 50);*/
	//_4_countDoubles(str);

	// 5. Reverse string.
	//strtok -> strrev
	/*char str5[100], copyStr5[100];
	std::cout << "Enter string: ";
	std::cin.getline(str5, 100);
	strcpy(copyStr5, str5);
	_strrev(copyStr5);
	std::cout << copyStr5 << std::endl;*/

	// 6. Change all str1 inclusions to str2.
	/*char str6[100], str6_1[20], str6_2[20];
	std::cout << "Enter string: ";
	std::cin.getline(str6, 100);
	std::cout << "Enter substring 1: ";
	std::cin.getline(str6_1, 20);
	std::cout << "Enter substring 2: ";
	std::cin.getline(str6_2, 20);
	std::cout << _6_swapSubstrings(str6, str6_1, str6_2) << std::endl;*/

	// 2-2. Delete word.
	/*char *str = new char[100];
	char *word = new char[10];
	std::cout << "Enter string: ";
	std::cin.getline(str, 100);
	std::cout << "Enter word: ";
	std::cin.getline(word, 10);
	std::cout << _2_2_deleteWord(str, word) << std::endl;*/

	// 2-3. String contains intergers split by backspaces or commas. Calculate sum.
	/*char* str = new char[100];
	std::cout << "Enter numbers: ";
	std::cin.getline(str, 100);
	std::cout << _2_3_sumOfNums(str) << std::endl;*/

	// 2-4. String contains arithmetic expression without parentheses. Print operations (+, -,*, /).
	// Print operands. Evaluate expression.
	char* str = new char[100];
	std::cout << "Enter arith expression: ";
	std::cin.getline(str, 100);
	_2_4_result(str);
	std::cout << _2_4_defineOperations(str) << std::endl;
	std::cout << _2_4_defineNums(str) << std::endl;
	std::cout << str << std::endl;

	system("pause");
	return 0;
}
void _2_changeDotToExclMark(char *initialString)
{
	size_t i = 0;
	while (initialString[i++])
	{
		if (initialString[i] == '.') initialString[i] = '!';
	}
}
size_t _3_countSymbols(char* string, int target)
{
	size_t count = 0;
	for (char *s = strchr(string, target); s != nullptr; s = strchr(s + 1, target))
	{
		count++;
	}
	return count;
}
void _4_countDoubles(char* str)
{
	char** newStr = new char *[50];
	for (size_t i = 0; i < 50; i++)
	{
		newStr[i] = new char[50];
	}
	char *s = strtok(str, " ,.-?!");
	size_t n = 0;
	while (s)
	{
		strcpy(newStr[n++], s);
		s = strtok(nullptr, " ,.-?!");
	}
	char** twoCharWords = new char *[50];
	for (size_t i = 0; i < 50; i++)
	{
		twoCharWords[i] = new char[50];
	}
	size_t q = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (strlen(newStr[i]) == 2)
			strcpy(twoCharWords[q++], newStr[i]);
	}
	size_t j = 0;
	for (size_t i = q - 1; i >= 1; i--)
	{
		for (j; j < i; j++)
		{
			if (strcmp(twoCharWords[j], twoCharWords[j + 1]) == 0)
				std::swap(twoCharWords[j], twoCharWords[j + 1]);
		}
	}
	for (size_t i = 0; i < j; i++)
	{
		std::cout << twoCharWords[i] << " ";
	}
	/*size_t count = 1;
	for (size_t i = 0; i < j - 1; i++)
	{
		std::cout << twoCharWords[i] << " - ";
		if (twoCharWords[i] == twoCharWords[i + 1]) count++;
		else
		{
			std::cout << count << std::endl;
			count = 1;
		}
	}*/
}
char* _6_swapSubstrings(char* str, char* sub1, char* sub2)
{
	int sub1Size = strlen(sub1);
	int sub2Size = strlen(sub2);
	int strSize = strlen(str);
	char* newStr = new char[strSize];
	*newStr = '\0';
	for (size_t i = 0; i < strSize; i++)
	{
		int temp = i;
		for (size_t j = 0; j < sub1Size, temp < i + sub1Size; j++, temp++)
		{
			int count = 0;
			if (str[i] == sub1[j]) count++;
		}
		/*if (sub1[0] == str[i])
		{
			for (size_t j = 1; j < sub1Size; j++)
			{
				if (sub2[j] == sub1[j]) continue;
				else if (j == sub1Size - 1)
				{
					strcat(newStr, sub2);
					i += sub1Size;
				}
				else break;
			}
		}
		else newStr[i] = str[i];*/
	}
	return newStr;
}


char* _2_2_deleteWord(char*initialString, char*word)
{
	char* newStr = new char[strlen(initialString)];
	*newStr = '\0';
	char* temp = strtok(initialString, " ,.!?");
	while (temp)
	{
		if (strcmp(temp, word))
		{
			strcat(newStr, temp);
			strcat(newStr, " ");
		}
		temp = strtok(nullptr, " ,.!?");
	}
	return newStr;
}
int _2_3_sumOfNums(char*str)
{
	int* nums = new int[50];
	char* s = nullptr;
	int Nnum = 0;
	s = strtok(str, " ,");
	while (s != nullptr)
	{
		nums[Nnum++] = atoi(s);
		s = strtok(nullptr, " ,");
	}
	int sum = 0;
	for (size_t i = 0; i < Nnum; i++)
	{
		sum += nums[i];
	}
	return sum;
}
int* _2_4_defineNums(char*str)
{
	int* nums = new int[50];
	char* s = nullptr;
	int Nnum = 0;
	s = strtok(str, "+-/*");
	while (s != nullptr)
	{
		nums[Nnum++] = atoi(s);
		s = strtok(nullptr, "+-/*");
	}
	return nums;
}
char* _2_4_defineOperations(char*str)
{
	char* operation = new char[50];
	char* s = nullptr;
	int Nop = 0;
	while (s = strpbrk(str, "+-/*"))
	{
		operation[Nop++] = *s;
		*s = ' ';
	}
	return operation;
}
void _2_4_result(char*str)
{
	int* numbers = _2_4_defineNums(str);
	char* operations = _2_4_defineOperations(str);
	int Nnum = sizeof(numbers);
	int Nop = sizeof(operations);
	for (int i = 0; i < strlen(operations); i++)
	{
		if (operations[i] == '*')
		{
			numbers[i] = numbers[i] * numbers[i + 1];
			memcpy(numbers + i + 1, numbers + i + 2, sizeof(int) * (Nnum - (i + 2)));
			Nnum--;
			memcpy(operations + i, operations + i + 1, sizeof(char) * (Nop - (i + 1)));
			Nop--;
			i--;
		}
		if (operations[i] == '/')
		{
			numbers[i] = numbers[i] * numbers[i + 1];
			memcpy(numbers + i + 1, numbers + i + 2, sizeof(int) * (Nnum - (i + 2)));
			Nnum--;
			memcpy(operations + i, operations + i + 1, sizeof(char) * (Nop - (i + 1)));
			Nop--;
			i--;
		}
	}
	for (size_t i = 0; i < Nop; i++)
	{
		if (operations[i] == '+')
		{
			numbers[i + 1] += numbers[i];
		}
		if (operations[i] == '-')
		{
			numbers[i + 1] = numbers[i] - numbers[i + 1];
		}
	}
}