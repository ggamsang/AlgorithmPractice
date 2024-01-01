#include <iostream>
#include <cmath>

int advertise(int day)
{
  int total_like_people = 0;
  int like_people = 0;
  int receive_people = 5;
  for(int i=0; i<day; i++)
    {
      like_people = floor(receive_people/2);
      //delete_people = receive_people-like_people;
      receive_people = like_people*3;
      total_like_people += like_people;
    }
  return total_like_people;
}
int main(int argc, char* argv[])
{
  int n;
  std::cin >> n;
  std::cout << advertise(n) << std::endl;
  return 0;
}
