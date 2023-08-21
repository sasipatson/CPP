#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
	int num ,score ,max = 0 ,sum = 0;
	float Avg;
	srand(time(NULL));
	num = 1+rand() % 10;
	cout <<"Random number of studens(1-10)"<<num<<endl;
	for( int i=1;i<=num;i++)
	{	
		cout <<"Input Score"<<i<<" : ";
		cin >>score;
		if(score>max)
		{	max = score;
		}
		sum = sum+score;
	}
	Avg = sum/num;
	cout <<"Max score ="<<max<<endl;
	cout <<"Sum score ="<<sum<<endl;
	cout <<"Avg score ="<<fixed<<setprecision(2)<<Avg<<endl;


	system("pause");
	return (0);
}