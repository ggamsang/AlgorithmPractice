#include <iostream>
#include <vector>
#include <string>

std::string angryProfessor(std::vector<int> s, int t)
{
	t = s.size() -t +1;
	for(int i=0; i<s.size(); ++i) 
	{
		if(s[i] > 0) t--;
		if(t == 0) return "YES";
	}
	return "NO";
}

int main(int argc, char* argv[])
{
	int n;
	std::cin >> n;

	for(int i=0; i<n; ++i)
	{
		int num, t;
		std::cin >> num >> t;
		std::vector<int > s(num);

		for(int j=0; j<num; j++)
		{
			std::cin >> s[j];
		}
		std::cout << angryProfessor(s, t) << std::endl;
	}
	return 0;
}