 #include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int i,j=0, len1,len2;
	char a[101]; char b[101];
	cin >> a;
	len1 = strlen(a);

	 for (i =0; i < len1; i++){

		if (a[i] >= 'A'&& a[i] <= 'Z')
		{
			a[i] += 32;
		}
	}

	 for (i = 0; i < len1; i++)
	{
		 if (a[i] != 'a' && a[i] != 'o' && a[i] != 'y' &&a[i]!='e'&& a[i] != 'u' && a[i] != 'i')
			b[j++] = a[i];
	}
	b[j] = '\0';

	len2 = strlen(b);
	 for (i = 0; i < len2; i++)
			cout << "." << b[i];
			return 0;
	}


