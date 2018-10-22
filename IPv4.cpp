#ifndef IPV4
#define IPV4

#define MAX_BITS 31
#define MAX_HEX 8

#include <iostream>

struct ip
{
	unsigned char a, b, c, d;
	unsigned char mask; // CIDR notation

	ip();
	ip(const ip& adress);
	ip(unsigned char _a, unsigned char _b, unsigned char _c, unsigned char _d, unsigned char _mask);
	~ip();


	bool bit(unsigned int n);
	unsigned char hex(unsigned int n);


	ip subnet();
	ip& operator ++ ();
	ip& operator -- ();

	ip& operator = (const ip& adress);

	ip& operator |= (const ip& adress);
	ip& operator &= (const ip& adress);
	ip& operator ^= (const ip& adress);

	ip& operator ~ ();

};


ip& operator & (ip l_adress, ip& r_adress);
ip& operator | (ip l_adress, ip& r_adress);
ip& operator ^ (ip l_adress, ip& r_adress);


std::istream& operator >> (std::istream & is, ip& adress);
std::ostream& operator << (std::ostream & os, const ip& adress);

#endif // !IPV4