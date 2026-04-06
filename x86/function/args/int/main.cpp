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
    std::println("{} {} func_no_args({})", format_rgb(210, 140, 110, "void"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?func_no_args@@YAX{}Z", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "X"));
    std::println();

    std::println("{} {} func_one_arg({})", format_rgb(210, 140, 110, "void"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(210, 140, 110, "int"));
    std::println("{}: ?func_one_arg@@YAX{}{}Z", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "H"), format_rgb(180, 40, 40, "@"));
    std::println();

    std::println("{} {} func_two_args({}, {})", format_rgb(210, 140, 110, "void"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(210, 140, 110, "int"), format_rgb(210, 140, 110, "int"));
    std::println("{}: ?func_two_args@@YAX{}{}Z", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "HH"), format_rgb(180, 40, 40, "@"));
    std::println();

    std::println("{} {} func_three_args({}, {}, {})", format_rgb(210, 140, 110, "void"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(210, 140, 110, "int"), format_rgb(210, 140, 110, "int"), format_rgb(210, 140, 110, "int"));
    std::println("{}: ?func_three_args@@YAX{}{}Z", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "HHH"), format_rgb(180, 40, 40, "@"));
    std::println();

    return 0;
}