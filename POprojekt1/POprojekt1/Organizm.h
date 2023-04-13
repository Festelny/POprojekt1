#pragma once
#include "Define.h"

class Organizm
{
public:
	int sila;
	int inicjatywa;
	POZYCJA polozenie;

	Organizm();

	virtual void Akcja();
	virtual void Kolizja();
	virtual const void Rysowanie();

	~Organizm();
};