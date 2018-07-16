#include<iostream>
#include<ctime>//or<time.h>
int main()
{
	clock_t start=clock();
	for(int i=1;i<=100;i++)
		std::cout<<i*i<<" ";
	std::cout<<"\nTotal time="<<(double)(clock()-start)/CLOCKS_PER_SEC<<"s\n";
	//edit;
	return 0;
}
//Also we can add 'time' before any command in terminal to get its execution time
//So simply run 'time ./a.out' and we will get the total execution time :-)
