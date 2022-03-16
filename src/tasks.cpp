#include <iostream>
#include <cstring>

using namespace std;

bool check_polindrom(string word)
{
	int len = word.length();
	for(int i = 0; i < len/2; ++i)
	{
		if(word[i] != word[len-i-1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
  int n = 0;
  int ha = 0;
  cout << "Enter the n: ";
  cin >> n;
  for(int i =0; i < n; i++)
    {
      string num;
    	cout << "Enter the num: ";
    	cin >> num;
    	if(check_polindrom(num))
    	{
    		ha++;
    	}
    }
  cout << "polin is: " << ha << endl;
	return 0;
}