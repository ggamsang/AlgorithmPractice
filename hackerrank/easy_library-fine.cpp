#include <iostream>
typedef struct _date{
    int dd; int mm; int year;
}DATE;
int fine(DATE returned, DATE expected){
    int hackos = 0;
    //std::cout << "expected date:" << expected.dd << std::endl;
    //std::cout << "returned date:" << returned.dd << std::endl;
    if(expected.year < returned.year) hackos = 10000;
    if(expected.mm < returned.mm && expected.year==returned.year) hackos = 500*(returned.mm-expected.mm);
    if(expected.dd < returned.dd && expected.mm == returned.mm && expected.year == returned.year) hackos = 15*(returned.dd-expected.dd);
    return hackos;
}
int main(){
    DATE e, r;
    
    std::cin >> r.dd >> r.mm >> r.year;
    std::cin >> e.dd >> e.mm >> e.year;
    
    std::cout << fine(r, e) << std::endl;
    
    return 0;
}
