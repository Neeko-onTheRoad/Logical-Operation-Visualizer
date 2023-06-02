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

	void moveR(unInt size, cursor csTemp, unInt windowWidth);
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

void setPixeln (cursor& cs, COLORREF color, unInt size);
void drawChar  (cursor& cs, COLORREF color, pixelChar charB, unInt size);
void write     (cursor& cs, std::string str, COLORREF color, unInt windowWidth, unInt size);
void cvFile    (cursor& cs, std::string fileStr, colorSet colorSet, unInt windowWidth, unInt size);

namespace display {
	exChar nbsp;
	exChar questionMark;
	exChar exclamationMark;

	namespace number {
		exChar zero;
		exChar one;
		exChar two;
		exChar three;
		exChar four;
		exChar five;
		exChar six;
		exChar seven;
		exChar eight;
		exChar nine;
	}
}