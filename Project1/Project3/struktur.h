#pragma once

struct computer
{
	int baujahr;
	float taktrate;
};

struct gps
{
	float preis;
};

struct pda
{
	struct computer c;
	struct gps g;
	char navigation;
};
