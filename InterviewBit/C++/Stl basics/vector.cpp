#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int size;
    cin >> size;
    vector <int> data(size);
    for (int i = 0; i < size; i++)
	{
		cin >> data[i];
	}
	
    int deleteElement;
    cin >> deleteElement;
    
    for (int i = 0; i < size-1; i++)
	{
		if (data[i] == deleteElement){
			data.erase(data.begin()+i);
		}

	}

	sort(data.begin(), data.end());
	for (int i = 0; i < size-1; i++)
	{
		cout << data[i]<<endl;
	}
    return 0;
}
