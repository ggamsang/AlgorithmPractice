#include <iostream>
#include <cmath>
#include <string>
#include <vector>
std::string Catch(int catA, int catB, int mouseC){
  int a = abs(catA - mouseC);
  int b = abs(catB - mouseC);

  if(a > b) return "Cat A";
  if(a < b) return "Cat B";
  //if(a==b)
  return "Mouse C";
 }
typedef struct _loc
{
  int catA;
  int catB;
  int mouseC;
}Locations;

int main(int argc, char* argv[])
{
  int n = 0;
  std::vector<Locations> locations;
  int x = 0, y = 0, z = 0;

  std::cin >> n;
  Locations tmp = {0,};
  for(int i=0; i<n; i++)
    {
      std::cin >> tmp.catA >> tmp.catB >> tmp.mouseC;
      locations.push_back(tmp);
    }
  
  for(int i=0; i<n; i++)
    std::cout << Catch(locations[i].catA,
		       locations[i].catB,
		       locations[i].mouseC) << std::endl;

  return 0;
}
