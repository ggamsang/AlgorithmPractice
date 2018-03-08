#include <iostream>
#include <vector>
#include <string>
int designerPdfViewer(std::vector<int> h, std::string word) {
	int big_alphabet = 0;

	for(int i=0; i<word.size(); ++i){
		if(h[big_alphabet] < h[abs(word[i]-'a')]){
			big_alphabet = abs(word[i]-'a');
		}
	}

	return word.size() * h[big_alphabet] * 1;
}

int main(int argc, char* argv[]){
	
	std::vector<int> h(26);
	std::string word;
	
	for(int i=0;i<h.size();i++)
		std::cin >> h[i];
	std::cin >> word;
	
	std::cout << designerPdfViewer(h, word) << std::endl;
	
	return 0;
}