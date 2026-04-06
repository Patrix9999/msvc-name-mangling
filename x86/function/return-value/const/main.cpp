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
    std::println("{} {} func_const_return({})", format_rgb(140, 140, 40, "const int"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?func_const_return@@YA{}XZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "?BH"));
    std::println();

    return 0;
}