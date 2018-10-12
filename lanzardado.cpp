#include <iostream>
#include <ctime>
#include <cstdlib>
int lanzardado();
void histograma (int n);
using namespace std;
int main()
{
	int a[12]={0};
	srand(time(NULL));
	for(int i=1;i<=100;i++)
	{
		
		int x=(lanzardado()+lanzardado());
		a[x-1]++;
	}
	for(int i=1;i<=11;i++)
	{
		if(i+1<10)
		{
			cout<<i+1<<" ]";histograma(a[i]);
		}
		else
		{
			cout<<i+1<<"]";histograma(a[i]);
		}
	}
	return 0;
}
int lanzardado()
{	
	return (1+rand()%6);
}
void histograma(int n)
{
	for(int i=1;i<=n;i++)
	cout<< "*";
	cout<<endl;
}
