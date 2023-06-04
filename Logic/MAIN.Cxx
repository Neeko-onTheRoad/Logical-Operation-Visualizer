#include <vector>
#include <string>
#include <fstream>
#include <conio.h>
#include <cstdlib>
#include <iostream>
#include "Neeko's Pixel control.Hxx"
#include "Neeko's Console control.Hxx"

using namespace std;

typedef unsigned short unShort;

class windowSize {
public:
	unShort width;
	unShort height;

	windowSize() {
		this->width  = unShort();
		this->height = unShort();
	}

	windowSize(unShort _width, unShort _height) {
		this->width  = _width;
		this->height = _height;
	}
};

void windowSetup  (windowSize);
void colorSetup   (colorSet&);
bool openFile     (string, string&);
void errorExit    (unShort);
void clearConsole (void);

int main(void) {

	bool         isRunning   = true;
	windowSize   winSize     = windowSize(1920, 1080);
	string       fileName    = string();
	string       inputString = string();
	cursor       mainCursor  = cursor(10, 10);
	const cursor startCs     = mainCursor;
	colorSet     colors      = colorSet();
	

	windowSetup(winSize);
	colorSetup (colors);

	//cout << "Enter File Name : ";
	//cin >> fileName;
	openFile("./a.txt", inputString);

	clearConsole();
	setCursorBlinking(false);
	
	Sleep(10);

	while (isRunning) {
		cvFile(mainCursor, inputString, colors, winSize.width, 2);
		mainCursor.reset(startCs);
	}

	return 0;
}

bool openFile(string fileName, string& inputString) {
	ifstream file("./files/" + fileName);
	string   buffer = string();

	if (!file) return false;

	while (getline(file, buffer)) inputString += buffer;

	return true;
}

void clearConsole() {
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif

	return;
}

void errorExit(unShort errorCode) {
	cout << "\nError Code " << errorCode << endl;

	switch (errorCode) {
		default: cout << "Unknown Error";
		case 1:  cout << "File Does Not Exist";
	}

	cout << endl;
	exit(1);
}

void windowSetup(windowSize win) {
	setConsoleSize(win.height, win.width);
	disableConsoleResize();
	disableScrollBar();
	disableUserSelection();

	return;
}

void colorSetup(colorSet& colors) {
	colors = colorSet(
		RGB(177, 177, 177),
		RGB(255, 255, 255),
		RGB(0, 255, 0)
	);
	return;
}