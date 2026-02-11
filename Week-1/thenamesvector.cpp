#include <iostream>
#include <vector>

int main() {

std::vector<double> grades = {85, 90, 78, 92};

std::cout << grades.at(0) << '\n';
std::cout << grades.at(1) << '\n';
std::cout << grades.at(2) << '\n';
std::cout << grades.at(3) << '\n';

double average = (grades[0] + grades[1] + grades[2] + grades[3]) / 4.0;

std::cout << "Average: " << average << '\n';

return 0;

}
