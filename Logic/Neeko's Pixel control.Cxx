#include <string>
#include <vector>
#include <windows.h>
#include "Neeko's Pixel control.Hxx"

#define _ 0

namespace display {
	namespace operators {
		exChar AND = {
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, 1, _, _, _ },
			{ _, _, 1, 1, 1, _, _ },
			{ _, _, 1, 1, 1, _, _ },
			{ _, 1, 1, _, 1, 1, _ }, //
			{ _, 1, 1, _, 1, 1, _ }, //
			{ 1, 1, _, _, _, 1, 1 }, //
			{ 1, 1, _, _, _, 1, 1 }, //
			{ 1, 1, _, _, _, 1, 1 }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }
		};
		exChar OR = {
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ 1, 1, _, _, _, 1, 1 },
			{ 1, 1, _, _, _, 1, 1 },
			{ 1, 1, _, _, _, 1, 1 },
			{ _, 1, 1, _, 1, 1, _ }, //
			{ _, 1, 1, _, 1, 1, _ }, //
			{ _, _, 1, 1, 1, _, _ }, //
			{ _, _, 1, 1, 1, _, _ }, //
			{ _, _, _, 1, _, _, _ }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }
		};
		exChar XOR = {
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ 1, 1, _, _, _, 1, 1 },
			{ 1, 1, _, _, _, 1, 1 },
			{ 1, 1, _, _, _, 1, 1 },
			{ _, 1, 1, _, 1, 1, _ }, //
			{ _, 1, 1, _, 1, 1, _ }, //
			{ _, _, 1, 1, 1, _, _ }, //
			{ _, _, 1, 1, 1, _, _ }, //
			{ _, _, _, 1, _, _, _ }, //
			{ _, _, _, _, _, _, _ }, //
			{ 1, 1, 1, 1, 1, 1, 1 }, //
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }
		};
		exChar NOT = {
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }, //
			{ 1, 1, 1, 1, 1, 1, 1 }, //
			{ _, _, _, _, _, 1, 1 }, //
			{ _, _, _, _, _, 1, 1 }, //
			{ _, _, _, _, _, 1, 1 }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }
		};
		exChar N = {
			{ 1, 1, 1, 1, 1, 1, 1 },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }
		};
	}

	exChar nbsp = {
		{ _, _, _, _, _, _, _ },
		{ _, _, _, _, _, _, _ },
		{ _, _, _, _, _, _, _ },
		{ _, _, _, _, _, _, _ },
		{ _, _, _, _, _, _, _ },
		{ _, _, _, _, _, _, _ }, //
		{ _, _, _, _, _, _, _ }, //
		{ _, _, _, _, _, _, _ }, //
		{ _, _, _, _, _, _, _ }, //
		{ _, _, _, _, _, _, _ }, //
		{ _, _, _, _, _, _, _ }, //
		{ _, _, _, _, _, _, _ }, //
		{ _, _, _, _, _, _, _ },
		{ _, _, _, _, _, _, _ },
		{ _, _, _, _, _, _, _ },
		{ _, _, _, _, _, _, _ }
	};
	exChar questionMark = {
		{ _, _, 1, 1, 1, _, _ },
		{ _, 1, 1, _, 1, 1, _ },
		{ 1, 1, _, _, _, 1, 1 },
		{ 1, 1, _, _, _, 1, 1 },
		{ _, _, _, _, _, 1, 1 },
		{ _, _, _, _, 1, 1, _ }, //
		{ _, _, _, 1, 1, _, _ }, //
		{ _, _, 1, 1, _, _, _ }, //
		{ _, _, 1, 1, _, _, _ }, //
		{ _, _, _, _, _, _, _ }, //
		{ _, _, 1, 1, _, _, _ }, //
		{ _, _, 1, 1, _, _, _ }, // ?
		{ _, _, _, _, _, _, _ },
		{ _, _, _, _, _, _, _ },
		{ _, _, _, _, _, _, _ },
		{ _, _, _, _, _, _, _ }
	};
	exChar exclamationMark = {
		{ _, _, 1, 1, _, _, _ },
		{ _, _, 1, 1, _, _, _ },
		{ _, _, 1, 1, _, _, _ },
		{ _, _, 1, 1, _, _, _ },
		{ _, _, 1, 1, _, _, _ },
		{ _, _, 1, 1, _, _, _ }, //
		{ _, _, 1, 1, _, _, _ }, //
		{ _, _, 1, 1, _, _, _ }, //
		{ _, _, 1, 1, _, _, _ }, //
		{ _, _, _, _, _, _, _ }, //
		{ _, _, 1, 1, _, _, _ }, //
		{ _, _, 1, 1, _, _, _ }, // !
		{ _, _, _, _, _, _, _ },
		{ _, _, _, _, _, _, _ },
		{ _, _, _, _, _, _, _ },
		{ _, _, _, _, _, _, _ }
	};

	exChar number[10] = {
		{
			{ _, _, 1, 1, 1, _, _ },
			{ _, 1, 1, _, 1, 1, _ },
			{ 1, 1, _, _, _, 1, 1 },
			{ 1, 1, _, _, _, 1, 1 },
			{ 1, 1, _, _, 1, 1, 1 },
			{ 1, 1, _, 1, 1, 1, 1 }, //
			{ 1, 1, 1, 1, _, 1, 1 }, //
			{ 1, 1, 1, _, _, 1, 1 }, //
			{ 1, 1, _, _, _, 1, 1 }, //
			{ 1, 1, _, _, _, 1, 1 }, //
			{ _, 1, 1, _, 1, 1, _ }, //
			{ _, _, 1, 1, 1, _, _ }, // 0
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }
		},{
			{ _, _, _, 1, _, _, _ },
			{ _, _, 1, 1, _, _, _ },
			{ _, 1, 1, 1, _, _, _ },
			{ _, _, 1, 1, _, _, _ },
			{ _, _, 1, 1, _, _, _ },
			{ _, _, 1, 1, _, _, _ }, //
			{ _, _, 1, 1, _, _, _ }, //
			{ _, _, 1, 1, _, _, _ }, //
			{ _, _, 1, 1, _, _, _ }, //
			{ _, _, 1, 1, _, _, _ }, //
			{ _, _, 1, 1, _, _, _ }, //
			{ _, 1, 1, 1, 1, _, _ }, // 1
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }
		},{
			{ _, _, 1, 1, 1, _, _ },
			{ _, 1, 1, _, 1, 1, _ },
			{ 1, 1, _, _, _, 1, 1 },
			{ 1, 1, _, _, _, 1, 1 },
			{ _, _, _, _, _, 1, 1 },
			{ _, _, _, _, 1, 1, _ }, //
			{ _, _, _, 1, 1, _, _ }, //
			{ _, _, 1, 1, _, _, _ }, //
			{ _, 1, 1, _, _, _, _ }, //
			{ 1, 1, _, _, _, _, _ }, //
			{ 1, 1, _, _, _, _, _ }, //
			{ 1, 1, 1, 1, 1, 1, 1 }, //
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }
		},{
			{ _, _, 1, 1, 1, _, _ },
			{ _, 1, 1, _, 1, 1, _ },
			{ 1, 1, _, _, _, 1, 1 },
			{ 1, 1, _, _, _, 1, 1 },
			{ _, _, _, _, _, 1, 1 },
			{ _, _, _, 1, 1, 1, _ }, //
			{ _, _, _, _, _, 1, 1 }, //
			{ _, _, _, _, _, 1, 1 }, //
			{ 1, 1, _, _, _, 1, 1 }, //
			{ 1, 1, _, _, _, 1, 1 }, //
			{ _, 1, 1, _, 1, 1, _ }, //
			{ _, _, 1, 1, 1, _, _ }, //
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }
		},{
			{ _, _, _, 1, 1, 1, _ },
			{ _, _, 1, 1, 1, 1, _ },
			{ _, _, 1, 1, 1, 1, _ },
			{ _, 1, 1, _, 1, 1, _ },
			{ _, 1, 1, _, 1, 1, _ },
			{ 1, 1, _, _, 1, 1, _ }, //
			{ 1, 1, _, _, 1, 1, _ }, //
			{ 1, 1, 1, 1, 1, 1, 1 }, //
			{ _, _, _, _, 1, 1, _ }, //
			{ _, _, _, _, 1, 1, _ }, //
			{ _, _, _, _, 1, 1, _ }, //
			{ _, _, _, _, 1, 1, _ }, //
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }
		},{
			{ 1, 1, 1, 1, 1, 1, 1 },
			{ 1, 1, _, _, _, _, _ },
			{ 1, 1, _, _, _, _, _ },
			{ 1, 1, _, _, _, _, _ },
			{ 1, 1, 1, 1, 1, _, _ },
			{ _, _, _, _, 1, 1, _ }, //
			{ _, _, _, _, _, 1, 1 }, //
			{ _, _, _, _, _, 1, 1 }, //
			{ 1, 1, _, _, _, 1, 1 }, //
			{ 1, 1, _, _, _, 1, 1 }, //
			{ _, 1, 1, _, 1, 1, _ }, //
			{ _, _, 1, 1, 1, _, _ }, //
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }
		},{
			{ _, _, 1, 1, 1, _, _ },
			{ _, 1, 1, _, 1, 1, _ },
			{ 1, 1, _, _, _, 1, 1 },
			{ 1, 1, _, _, _, 1, 1 },
			{ 1, 1, _, _, _, _, _ },
			{ 1, 1, 1, 1, 1, _, _ }, //
			{ 1, 1, _, _, 1, 1, _ }, //
			{ 1, 1, _, _, _, 1, 1 }, //
			{ 1, 1, _, _, _, 1, 1 }, //
			{ 1, 1, _, _, _, 1, 1 }, //
			{ _, 1, 1, _, 1, 1, _ }, //
			{ _, _, 1, 1, 1, _, _ }, //
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }
		},{
			{ 1, 1, 1, 1, 1, 1, 1 },
			{ 1, 1, _, _, _, 1, 1 },
			{ 1, 1, _, _, _, 1, 1 },
			{ _, _, _, _, _, 1, 1 },
			{ _, _, _, _, 1, 1, _ },
			{ _, _, _, 1, 1, _, _ }, //
			{ _, _, _, 1, 1, _, _ }, //
			{ _, _, 1, 1, _, _, _ }, //
			{ _, _, 1, 1, _, _, _ }, //
			{ _, _, 1, 1, _, _, _ }, //
			{ _, _, 1, 1, _, _, _ }, //
			{ _, _, 1, 1, _, _, _ }, //
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }
		},{
			{ _, _, 1, 1, 1, _, _ },
			{ _, 1, 1, _, 1, 1, _ },
			{ 1, 1, _, _, _, 1, 1 },
			{ 1, 1, _, _, _, 1, 1 },
			{ _, 1, 1, _, 1, 1, _ },
			{ _, _, 1, 1, 1, _, _ }, //
			{ _, 1, 1, _, 1, 1, _ }, //
			{ 1, 1, _, _, _, 1, 1 }, //
			{ 1, 1, _, _, _, 1, 1 }, //
			{ 1, 1, _, _, _, 1, 1 }, //
			{ _, 1, 1, _, 1, 1, _ }, //
			{ _, _, 1, 1, 1, _, _ }, //
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }
		},{
			{ _, _, 1, 1, 1, _, _ },
			{ _, 1, 1, _, 1, 1, _ },
			{ 1, 1, _, _, _, 1, 1 },
			{ 1, 1, _, _, _, 1, 1 },
			{ 1, 1, _, _, _, 1, 1 },
			{ _, 1, 1, _, 1, 1, 1 }, //
			{ _, _, 1, 1, 1, 1, 1 }, //
			{ _, _, _, _, _, 1, 1 }, //
			{ 1, 1, _, _, _, 1, 1 }, //
			{ 1, 1, _, _, _, 1, 1 }, //
			{ _, 1, 1, _, 1, 1, _ }, //
			{ _, _, 1, 1, 1, _, _ }, //
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }
		}
	};
	exChar Lalphabet[26] = {
		{
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ }, //
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ },
			{ _, _, _, _, _, _, _ }
		},
	};
	exChar Salphabet[26] = {

	};
}

#undef _

HDC windowDc = GetDC(GetConsoleWindow());

cursor::cursor() {
	this->x = unInt();
	this->y = unInt();
}

cursor::cursor(unInt _x, unInt _y) {
	this->x = _x;
	this->y = _y;
}

cursor cursor::operator* (unInt mult) {
	return cursor(this->x * mult, this->y * mult);
}

bool cursor::moveR(unInt size, cursor csTemp, unInt windowWidth) {
	if ((this->x) >= (windowWidth - (21 * size + 10))) {
		this->x = csTemp.x;
		this->y += (size * 18);
		return true;
	} else {
		this->x += (size * 8);
		return false;
	}
}

void cursor::moveD(unInt size, cursor csTemp) {
	this->x = csTemp.x;
	this->y += (size * 18);
	return;
}

void cursor::reset(cursor cs) {
	this->x = cs.x;
	this->y = cs.y;
	return;
}

colorSet::colorSet() {
	this->stringColor   = COLORREF();
	this->disabledColor = COLORREF();
	this->enabledColor  = COLORREF();
}

colorSet::colorSet(
	COLORREF _stringColor,
	COLORREF _disabledColor,
	COLORREF _enabledColor
) {
	this->stringColor = _stringColor;
	this->disabledColor = _disabledColor;
	this->enabledColor = _enabledColor;
}

void setPixeln(cursor& cs, COLORREF color, unInt size = 1) {
	for (int i = 0; i < (int)size; i++)
		for (int j = 0; j < (int)size; j++)
			SetPixel(windowDc, cs.x + j, cs.y + i, color);

	return;
}

void drawChar(cursor& cs, COLORREF color, pixelChar charB, unInt size = 1) {
	cursor csTemp = cs;

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 7; j++) {
			if (charB[i][j]) {
				setPixeln(cs, color, size);
			}
			cs.x += size;
		}
		cs.y += size;
		cs.x = csTemp.x;
	}
	cs.y = csTemp.y;

	return;
}

std::string downString(std::string str) {
	std::string strTemp;

	for (char ch : str) {
		if (('A' <= ch) && ('Z' >= ch)) ch |= 32;
		strTemp += ch;
	}

	return strTemp;
}

#define elif else if

void cvFile(cursor& cs, std::string fileStr, colorSet colorSet, unInt windowWidth, unInt size) {
	enum class status {
		normal, inString, inMarker, special
	};

	std::vector<char> strChar = std::vector<char>();
	cursor            csTemp = cs;

	for (int i = 0; i < fileStr.length(); i++) {
		strChar.push_back(fileStr[i]);
	}

	std::string buffer    = std::string();
	status      nowStatus = status::normal;

	for (auto i : strChar) {
		if (nowStatus == status::inString) {
			if (i == '"') {
				write(cs, buffer, colorSet.stringColor, windowWidth, size);
				nowStatus = status::normal;
				buffer.clear();
			} 
			elif(i == '\\') {
				nowStatus = status::special;
			}
			else {
				buffer += i;
			}
		} 
		elif (nowStatus == status::inMarker) {
			if (i == '}') {
				if (downString(buffer) == "and") {
					drawChar(cs, colorSet.disabledColor, display::operators::AND, size);
				}
				elif(downString(buffer) == "or") {
					drawChar(cs, colorSet.disabledColor, display::operators::OR, size);
				}
				elif(downString(buffer) == "xor") {
					drawChar(cs, colorSet.disabledColor, display::operators::XOR, size);
				}
				elif(downString(buffer) == "not") {
					drawChar(cs, colorSet.disabledColor, display::operators::NOT, size);
				}
				elif(downString(buffer) == "nand") {
					drawChar(cs, colorSet.disabledColor, display::operators::AND, size);
					drawChar(cs, colorSet.disabledColor, display::operators::N, size);
				}
				elif(downString(buffer) == "nor") {
					drawChar(cs, colorSet.disabledColor, display::operators::OR, size);
					drawChar(cs, colorSet.disabledColor, display::operators::N, size);
				}
				elif(downString(buffer) == "xnor") {
					drawChar(cs, colorSet.disabledColor, display::operators::XOR, size);
					drawChar(cs, colorSet.disabledColor, display::operators::N, size);
				}

				nowStatus = status::normal;
				buffer.clear();
				cs.moveR(size, csTemp, windowWidth);

			} else buffer += i;
		}
		elif(nowStatus == status::special) {
			if ((i >= 'A') && (i <= 'Z')) i -= 'A';

			switch (i) {
				case 'n': cs.moveD(size, csTemp);
			}
		}
		elif (i == '"') nowStatus = status::inString;
		elif (i == '{') nowStatus = status::inMarker;

	}

	return;
}

#define casef(Ch, Dp) case (Ch): drawChar(cs, color, (Dp), size); break;

void write(cursor& cs, std::string str, COLORREF color, unInt windowWidth, unInt size = 1) {
	std::vector<char> strChar = std::vector<char>();
	cursor            csTemp = cs;

	for (int i = 0; i < str.length(); i++) {
		strChar.push_back(str[i]);
	}

	for (auto i : strChar) {
		if ((i >= '0') && (i <= '9')) {
			drawChar(cs, color, display::number[i - '0'], size);
		} elif((i >= 'A') && (i <= 'Z')) {
			drawChar(cs, color, display::Lalphabet[i - 'A'], size);
		} elif((i >= 'a') && (i <= 'z')) {
			drawChar(cs, color, display::Salphabet[i - 'a'], size);
		} elif(i == '!') {
			drawChar(cs, color, display::exclamationMark, size);
		} elif(i == '?') {
			drawChar(cs, color, display::questionMark, size);
		} else {
			drawChar(cs, color, display::nbsp, size);
		}

		cs.moveR(size, csTemp, windowWidth);
	}

	return;
}

#undef casef