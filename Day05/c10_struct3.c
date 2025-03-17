#include <stdio.h>


struct profile {
	int age;
	double height;
	double weight;
};
// 구조체 안에 구조체를 넣는 것도 가능
struct student {
	struct profile pf;
	int id;
	double grade;
};

int main() {

	struct student s;
	s.grade = 99.9;
	s.id = 20201143;
	s.pf.age = 25;
	s.pf.height = 165.2;
	s.pf.weight = 57.2;

	printf("키: %.1lf\n", s.pf.height);
	printf("몸무게: %.1lf\n", s.pf.weight);
	printf("나이: %d", s.pf.age);

	return 0;
}