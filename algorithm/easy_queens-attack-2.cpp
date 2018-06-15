//#include <bits/stdc++.h>
#include "/Users/ggamsang/lib/stdc++.h"
using namespace std;
vector<string> split_string(string);

typedef struct cell{
  int y, x;
  cell(){x=0;y=0;};
  cell(int _y, int _x){y=_y; x=_x;};
}CELL;

int queensAttack(int n, int k, int r_q, int c_q,
		 vector<vector<int>> obstacles){
  CELL queen = {r_q, c_q};
  CELL dirs[]={{-1,-1},{-1,0},{-1,1},
	       { 0,-1},{0,1},
	       { 1,-1}, {1,0},{1,1}};
  vector<CELL> obs;
  for(int i=0; i<obstacles.size(); i++){
    if(obstacles[i][0] == queen.y ||
       obstacles[i][1] == queen.x ||
       abs(obstacles[i][0]-queen.y)==abs(obstacles[i][1]-queen.x))
      {
	CELL tmp(obstacles[i][0], obstacles[i][1]);
	obs.push_back(tmp);
      }
  }
    int cells = 0;
    for(int i=0; i<8; i++){
      while(true){
	//move//
	queen.x += dirs[i].x;
	queen.y += dirs[i].y;

	// check bouding //
	if(queen.x < 1 || queen.x > n) break;
	if(queen.y < 1 || queen.y > n) break;

	// check collision //
	int collision = 0;
	for(int o=0;o<obs.size();o++){
	  if(queen.x==obs[o].x && queen.y == obs[o].y){
	    collision = 1;
	    break;
	  }
	}
	if(collision) break;
	cells++;
      }
      queen.x = c_q;
      queen.y = r_q;
    }
  return cells;
}

int main(){
  ofstream fout(getenv("OUTPUT_PATH"));
  string nk_temp;
  getline(cin, nk_temp);

  vector<string> nk = split_string(nk_temp);
  int n = stoi(nk[0]);
  int k = stoi(nk[1]);

  string r_qC_q_temp;
  getline(cin, r_qC_q_temp);
  vector<string> r_qC_q = split_string(r_qC_q_temp);

  int r_q = stoi(r_qC_q[0]);
  int c_q = stoi(r_qC_q[1]);

  vector<vector<int>> obstacles(k);
  for(int i=0; i<k; i++){
    obstacles[i].resize(2);
    for(int j=0; j<2; j++){
      cin >> obstacles[i][j];
    }
    cin.ignore(numeric_limits<streamsize>::max(),
	       '\n');
  }
  int result = queensAttack(n, k, r_q, c_q, obstacles);
  fout << result << "\n";
  fout.close();
  return 0;
}

vector<string> split_string(string input_string){
  string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y){ return x==y and ' ';});

  input_string.erase(new_end, input_string.end());

  while(input_string[input_string.length()-1]==' '){
    input_string.pop_back();
  }

  vector<string> splits;
  char delimiter = ' ';

  size_t i = 0;
  size_t pos = input_string.find(delimiter);

  while(pos != string::npos){
    splits.push_back(input_string.substr(i, pos-i));
    i=pos+1;
    pos=input_string.find(delimiter, i);
  }

  splits.push_back(input_string.substr(i, min(pos, input_string.length())-i +1));

  return splits;
}
