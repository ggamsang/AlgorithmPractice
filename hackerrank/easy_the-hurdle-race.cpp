#include <iostream>
#include <vector>

int hurdleRace(int k, std::vector<int> heights)
{
	int max_h = 0;
	for(int i=0; i<heights.size();++i)
	{
		if(max_h<heights[i])
			max_h = heights[i];
	}

	if(k < max_h) return max_h - k;
	return 0;
}

int main() {
	int n, k;
	std::cin >> n >> k;
	std::vector<int> heights(n);
	for(int height_i = 0; height_i <n; height_i++)
	{
		std::cin >> heights[height_i];
	}
	int result = hurdleRace(k, heights);
	std::cout << result << std::endl;
	return 0;
}