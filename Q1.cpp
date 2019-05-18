#include"Address.h"

int main()
{
	Address address_1(8, 45, "lahore", "pakistan", 54400);//without apartment number:
	address_1.printAdress();
	Address address_2(34, 11, 89, "bahawalnager", "pakistan", 62100); //with apartment number:
	address_2.printAdress();
	address_1.compare(address_2);
	system("PAUSE");
	return EXIT_SUCCESS;
}