#include <stdio.h>


struct profile {
	int age;
	double height;
	double weight;
};
// ����ü �ȿ� ����ü�� �ִ� �͵� ����
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

	printf("Ű: %.1lf\n", s.pf.height);
	printf("������: %.1lf\n", s.pf.weight);
	printf("����: %d", s.pf.age);

	return 0;
}