#include <iostream>

int utopianTree(int n)
{
	int total = 1;
	for(int i=1; i<=n; ++i)
	{
		if(i%2==1)
			total*=2;
		else
			total+=1;
	}
	return total;
}

int main() {
	int t;
	std::cin >> t;
	for(int i=0;i<t;++i)
	{
		int n;
		std::cin >> n;
		std::cout << utopianTree(n) << std::endl;
	}
}