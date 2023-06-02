#include <string>
#include <vector>
#include <windows.h>
#include "Neeko's Pixel control.Hxx"

#define _ 0

namespace display {
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

	namespace number {
		exChar zero = {
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
		};
		exChar one = {
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
		};
		exChar two = {
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
		};
		exChar three = {
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
		};
		exChar four = {
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
		};
		exChar five = {
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
		};
		exChar six = {
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
		};
		exChar seven = {
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
		};
		exChar eight = {
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
		};
		exChar nine = {
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
		};
	}
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

void cursor::reset(cursor cs) {
	this->x = cs.x;
	this->y = cs.y;
}

colorSet::colorSet() {
	this->stringColor = COLORREF();
	this->disabledColor = COLORREF();
	this->enabledColor = COLORREF();
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
		normal, inString, inMarker
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

			} else buffer += i;

		} elif (nowStatus == status::inMarker) {
			if (i == '}') {
				if (downString(buffer) == "and")
					drawChar(cs, colorSet.disabledColor, display::operators::AND,  size);

				elif(downString(buffer) == "or")
					drawChar(cs, colorSet.disabledColor, display::operators::OR, size);

				elif(downString(buffer) == "xor")
					drawChar(cs, colorSet.disabledColor, display::operators::XOR, size);

				elif(downString(buffer) == "not")
					drawChar(cs, colorSet.disabledColor, display::operators::NOT, size);

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
		switch (i) {
			default: {
				drawChar(cs, color, display::nbsp, size);
				break;
			}

			casef('?', display::questionMark)
			casef('!', display::exclamationMark)

			casef('0', display::number::zero)
			casef('1', display::number::one)
			casef('2', display::number::two)
			casef('3', display::number::three)
			casef('4', display::number::four)
			casef('5', display::number::five)
			casef('6', display::number::six)
			casef('7', display::number::seven)
			casef('8', display::number::eight)
			casef('9', display::number::nine)

			casef(' ', display::nbsp)
		}

		cs.moveR(size, csTemp, windowWidth);
	}

	return;
}

#undef casef