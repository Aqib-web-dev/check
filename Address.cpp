#include "Address.h"


int findLength(char *str)
{
	int size = 0;
	for (int i = 0; str[i] != 0; i++)
	{
		size++;
	}
	return size;
}
void myCopy(char*str1, char *&str2)
{
	int i = 0;
	while (str1[i] != 0)
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
}
Address::Address(int h_no, int strt, int apt_no, char *C, char *S,int pCode)//constructor with Appartment number:
{
	if (h_no > 0 && strt > 0 && apt_no > 0 && C != NULL && S!=NULL && pCode>0)
	{
		
		houseNumber = h_no;
		street = strt;
		apartmentNumber = apt_no;
		int size = findLength(C);
		city = new char[size];
		myCopy(C, city);
		int size2 = findLength(S);
		state = new char[size2];
		myCopy(S, state);
		postalCode = pCode;
	}
	else
	{
		cout << "adress entered was not correct:" << endl;
		houseNumber=0;
		street = 0;
		apartmentNumber = 0;
		city = '\0';
		state = '\0';
		postalCode = 0;
	}
	
}
Address::Address(int h_no, int strt, char *C, char *S, int pCode)     //constructor without appartment number
{
	if (h_no > 0 && strt > 0 &&  C != NULL && S != NULL && pCode>0)
	{

		houseNumber = h_no;
		street = strt;
		int size = findLength(C);
		city = new char[size];
		myCopy(C, city);
		int size2 = findLength(S);
		state = new char[size2];
		myCopy(S, state);
		postalCode = pCode;
	}
	else
	{
		cout << "adress entered was not correct:" << endl;
		houseNumber = 0;
		street = 0;
		apartmentNumber = 0;
		city = '\0';
		state = '\0';
		postalCode = 0;
	}
}
void Address::setHouseNuber(int h_no)
{
	if (h_no > 0)
	{
		houseNumber = h_no;
	}
	else
	{
		cout << "wrong Adress No:" << endl;
		houseNumber = 0;
	}

}
int Address::getHouseNumber()
{
	return houseNumber;
}
void Address::setStreet(int strt)
{
	if (strt > 0)
	{
		street = strt;
	}
	else
	{
		cout << "wrong street number enterd:" << endl;
		street = 0;
	}
}
int  Address::getStreet()
{
	return street;
}
void Address::setAppartmentNumber(int AptNum)
{
	if (AptNum>0)
	apartmentNumber = AptNum;
	else
	{
		cout << "wrong apt number:" << endl;
		apartmentNumber = 0;
	}
}
void Address::setCity(char *C)
{
	if (C != '\0')
	{
		int size = findLength(C);
		city = new char[size];
		myCopy(C, city);
	}
	

}
char *Address:: getCity()
{
	return city;
}
void Address::setPostalCode(int pCode)
{
	if (pCode>0)
	postalCode = pCode;
	else
	{
		cout << "postal code is not correct" << endl;
		postalCode = 0;
	}
}
int Address::getPostalCode()
{
	return postalCode;
}
void Address::printAdress()
{
	if (houseNumber > 0 && street > 0 && city != NULL && state != NULL && postalCode > 0)
	{

		cout << "streer no#" << street << endl;
		cout << "city:" << city << "  state:" << state << "  postal code:" << postalCode << endl;
	}
}
void Address::compare(const Address & address_2)
{
	if (houseNumber > 0 && street > 0 && city != NULL && state != NULL && postalCode > 0)
	{
		if (postalCode > address_2.postalCode)
		{
			cout << "this Address is smaller " << endl;
			cout << "streer no#" << address_2.street << endl;
			cout << "city: " << address_2.city << "  state: " << address_2.state << "  postal code:" << address_2.postalCode << endl;

		}
		cout << "this Address is smaller " << endl;
		cout << "streer no#" << street << endl;
		cout << "city: " << city << "  state: " << state << "  postal code:" << postalCode << endl;
	}
	cout << "enetered address are not correct:" << endl;
}
Address::~Address()
{
	delete[]state;
	delete[]city;
}
