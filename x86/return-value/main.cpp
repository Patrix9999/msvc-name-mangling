// C++ 23 example

#include <string>
#include <string_view>

#include <format>
#include <print>

inline std::string format_rgb(unsigned char r, unsigned char g, unsigned char b, std::string_view text)
{
    static constexpr std::string_view reset = "\033[0m";
    return std::format("\033[38;2;{};{};{}m{}{}", r, g, b, text, reset);
}

int main(int argc, char* argv[])
{
    std::println("{} {} func_char({})", format_rgb(140, 140, 40, "char"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?func_char@@YA{}XZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "D"));
    std::println();

    std::println("{} {} func_unsigned_char({})", format_rgb(140, 140, 40, "unsigned char"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?func_unsigned_char@@YA{}XZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "E"));
    std::println();

    std::println("{} {} func_short({})", format_rgb(140, 140, 40, "short"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?func_short@@YA{}XZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "F"));
    std::println();

    std::println("{} {} func_unsigned_short({})", format_rgb(140, 140, 40, "unsigned short"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?func_unsigned_short@@YA{}XZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "G"));
    std::println();

    std::println("{} {} func_int({})", format_rgb(140, 140, 40, "int"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?func_int@@YA{}XZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "H"));
    std::println();

    std::println("{} {} func_unsigned_int({})", format_rgb(140, 140, 40, "unsigned int"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?func_unsigned_int@@YA{}XZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "I"));
    std::println();

    std::println("{} {} func_long({})", format_rgb(140, 140, 40, "long"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?func_long@@YA{}XZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "J"));
    std::println();

    std::println("{} {} func_unsigned_long({})", format_rgb(140, 140, 40, "unsigned long"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?func_unsigned_long@@YA{}XZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "K"));
    std::println();

    std::println("{} {} func__int64({})", format_rgb(140, 140, 40, "__int64"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?func__int64@@YA{}XZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "_J"));
    std::println();

    std::println("{} {} func_unsigned__int64({})", format_rgb(140, 140, 40, "unsigned __int64"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?func_unsigned__int64@@YA{}XZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "_K"));
    std::println();

    return 0;
}