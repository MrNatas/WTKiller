#include <Windows.h>
#include <iostream>	

void kill()
{
	system("taskkill /F /T /IM aces.exe");
}


int main()
{
	{
		system("Color 9");
		std::cout << " _    _ _____ _   _______ _      _      ___________ \n";
		std::cout << "| |  | |_   _| | / /_   _| |    | |    |  ___| ___ \\ \n";
		std::cout << "| |  | | | | | |/ /  | | | |    | |    | |__ | |_/ /\n";
		std::cout << "| |/\\| | | | |    \\  | | | |    | |    |  __||    / \n";
		std::cout << "\\  /\\  / | | | |\\  \\_| |_| |____| |____| |___| |\\ \\ \n";
		std::cout << " \\/  \\/  \\_/ \\_| \\_/\\___/\\_____/\\_____/\\____/\\_| \\_|\n";

	}

	while (true)
	{
		if (GetAsyncKeyState(VK_F12) & 1)
		{
			kill();
		}
	}
	return 0;
}