#include <stdio.h>

int main() {
	// ������(pointer) :: "����Ű�� ��"
	// ������ ������, ����Ű���� �ϴ� ������ �ּҰ��� ���´�.
	// *, &

	// ������ ���� ����, �ʱ�ȭ
	int n = 10;
	int* num = &n;
	// *num ������ ���ؼ�, n�� �ּҰ��� �������� ���� ȣ��O
	printf("n�� ���Ұ� :: %d\n", num);
	printf("n�� �� :: %d\n\n", *num);
	// * :: ���� �ִ� �ּҰ����� �ٸ� ������ ����Ŵ

	// ���ڿ��� ����Ű�� ������ ����(char) ���
	char name[] = "Kim_huijin";
	printf("ù��° ���� :: %c\n", name[0]);
	printf("�̸� :: %s\n\n", name);

	char* ptName = name;
	printf("ù��° ���� :: %c\n", *(ptName + 0));
	printf("ù��° ���� :: %c\n", ptName[0]);
	printf("�̸� :: %s\n", ptName);
}