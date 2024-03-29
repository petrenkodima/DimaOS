#pragma once
#include <string>
#include <vector>
#include "os.h"
#include "windows.h"

enum colors
{
	Black = 0,
	Grey = FOREGROUND_INTENSITY,
	LightGrey = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
	White = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	Blue = FOREGROUND_BLUE,
	Green = FOREGROUND_GREEN,
	Cyan = FOREGROUND_GREEN | FOREGROUND_BLUE,
	Red = FOREGROUND_RED,
	Purple = FOREGROUND_RED | FOREGROUND_BLUE,
	LightBlue = FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	LightGreen = FOREGROUND_GREEN | FOREGROUND_INTENSITY,
	LightCyan = FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	LightRed = FOREGROUND_RED | FOREGROUND_INTENSITY,
	LightPurple = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	Orange = FOREGROUND_RED | FOREGROUND_GREEN,
	Yellow = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
};

namespace util {
	std::string join(std::vector<std::string> v, std::string separator);
	std::vector<std::string> split(const std::string& s, char seperator);
	std::string replace_all(std::string str, const std::string& from, const std::string& to);

	std::string file_to_filename(DimaOS::file_in_root& file);
	void set_text_color(colors color);

	uint16_t write_first_4_bits(uint16_t mode, uint8_t num);
	uint16_t read_first_4_bits(uint16_t mode);
	uint16_t write_rwxrwxrwx(uint16_t mode, uint16_t num);
	uint16_t read_rwxrwxrwx(uint16_t mode);

	std::string stupid_hash(std::string pswd);

	std::string read_pswd();
}