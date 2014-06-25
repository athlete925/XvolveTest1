#include <iostream>
#include <stdlib.h>
#include<string.h>

using namespace std;

int list[100];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,K,x;

	cout << "Please enter two numbers seperated by a space: ";

	if(std::cin >> N >> K)
	{

		cout << "Please enter " << N << " numbers of the set seperated by a space: ";

		while(std::cin>>x)
		{
			for(int i = 0; i<N; i++)
			{
				list[i] = x;
			}
		}
	}
	

    return 0;
}
