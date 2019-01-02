//============================================================================
// Name        : Sortowanie.cpp
// Author      : Tomasz Wasacz
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void bubble_sort(int *table, int table_size)
{
	for(int i=1; i<table_size; i++)
	{
		for(int j=table_size; j>=i; j--)
		{
			if(table[j]<table[j-1])
			{
				int temp=table[j-1];
				table[j-1]=table[j];
				table[j]=temp;
			}
		}
	}
}

void show_table(int *table, int table_size)
{
	for(int i=0;i<table_size;i++)
		cout << table[i] << ' ';
}

int main() {
	srand(time(NULL));
	int table_size=500;
	int *table = new int[table_size];

	for(int i=0; i<table_size; i++)
		table[i]=rand() % table_size;

	cout << "Before sort: " << endl;
	show_table(table, table_size);
	bubble_sort(table, table_size);

	cout << "After sort: " << endl;
	show_table(table, table_size);
	return 0;
}
