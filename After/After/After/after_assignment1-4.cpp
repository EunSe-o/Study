#include <iostream>
using namespace std;

int main(void)
{
	char text[1000];
	cin >> text;	 // 띄어쓰기는 없다고 가정

	int t = strlen(text);
	for (int i = 0; i < t; i++)
	{
		if (64 < text[i] && text[i] < 91)
			text[i] += 32;

		else if (!(96 < text[i] && text[i] < 123))
		{
			if (text[i] != '\0')
				text[i] = 0;
		}
	}

	for (int i = 0; i < t; i++)
	{
		if (text[i] != 0)
			cout << text[i];
	}

	return 0;
}