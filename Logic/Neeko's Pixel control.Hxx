#pragma once
#include <Windows.h>

#define exChar extern pixelChar

typedef const bool   pixelChar[16][7];
typedef unsigned int unInt;

class cursor {
public:
	unInt x;
	unInt y;

	cursor();
	cursor(unInt _x, unInt _y);

	cursor operator* (unInt mult);

	bool moveR(unInt size, cursor csTemp, unInt windowWidth);
	void moveD(unInt size, cursor csTemp);
	void reset(cursor cs);
};

class colorSet {
public:
	COLORREF stringColor;
	COLORREF disabledColor;
	COLORREF enabledColor;

	colorSet();
	colorSet(
		COLORREF _stringColor,
		COLORREF _disabledColor,
		COLORREF _enabledColor
	);
};

void setPixeln  (cursor& cs, COLORREF color, unInt size);
void drawChar   (cursor& cs, COLORREF color, pixelChar charB, unInt size);
void write      (cursor& cs, std::string str, COLORREF color, unInt windowWidth, unInt size);
void cvFile     (cursor& cs, std::string fileStr, colorSet colorSet, unInt windowWidth, unInt size);

std::string downString (std::string str);