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
    std::println("{} {} {}::{}({} oCNpc *)", format_rgb(210, 140, 110, "void"), format_rgb(210, 140, 110, "__thiscall"), format_rgb(180, 180, 210, "oCNpc"), format_rgb(140, 140, 40, "DoDie"), format_rgb(210, 140, 110, "class"), format_rgb(180, 180, 210, "oCNpc"));
    std::println("{}: ?{}{}{}@@QAEXPAV1@@Z", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "DoDie"), format_rgb(180, 40, 40, "@"), format_rgb(180, 180, 210, "oCNpc"));
    std::println();

    return 0;
}