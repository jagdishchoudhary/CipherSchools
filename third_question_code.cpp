
#include <iostream>
using namespace std;

// calculate the maximum money value
int maxMoney(int *hval, int n)
{
	if (n == 0)
		return 0;

	int value1 = hval[0];
	if (n == 1)
		return value1;

	int value2 = max(hval[0], hval[1]);
	if (n == 2)
		return value2;

	// contains maximum stolen value at the end
	int max_val;

	// Fill remaining positions
	for (int i=2; i<n; i++)
	{
		max_val = max(hval[i]+value1, value2);
		value1 = value2;
		value2 = max_val;
	}

	return max_val;
}

int main()
{
	int houses;
	cout<<"Enter number of houses:"<<endl;
	cin>>houses;
	int Money_At_house[houses];
	cout<<"Enter monet at each house"<<endl;
	for(int i=0;i<houses;i++)
	{
	    cin>>Money_At_house[i];
	}
	cout << "Maximum money possible : "
		<< maxMoney(Money_At_house, houses);
	return 0;
}

