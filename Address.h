#pragma once
#include<iostream>
using namespace std;
class Address
{
	int houseNumber;
	int street;
	int apartmentNumber;
	char *city;
	char *state;
	int postalCode;
public:
	Address(int h_no,int strt,int apt_no,char *C,char *S,int pCode);//constructor with Appartment number:
	Address(int h_no,int strt,char *C,char *state,int pCode);//constructor without appartment number
	void setHouseNuber(int h_no);
	int getHouseNumber();
	void setStreet(int strt);
	int getStreet();
	void setAppartmentNumber(int AptNum);
	int getAptNmuber();
	void setCity(char *C);
	char *getCity();
	void setPostalCode(int pCode);
	int getPostalCode();
	void compare(const Address &address_2);
	void printAdress();
	~Address();
};

