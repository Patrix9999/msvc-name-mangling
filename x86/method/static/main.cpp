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
    std::println("{}: {} {} {} {}::method({})", format_rgb(140, 140, 40, "public"), format_rgb(140, 140, 40, "static"), format_rgb(210, 140, 110, "void"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(180, 180, 210, "cls"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?method@cls@@{}AXXZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "S"));
    std::println();

    std::println("{}: {} {} {} {}::method({})", format_rgb(140, 140, 40, "private"), format_rgb(140, 140, 40, "static"), format_rgb(210, 140, 110, "void"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(180, 180, 210, "cls"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?method@cls@@{}AXXZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "C"));
    std::println();

    std::println("{}: {} {} {} {}::method({})", format_rgb(140, 140, 40, "protected"), format_rgb(140, 140, 40, "static"), format_rgb(210, 140, 110, "void"), format_rgb(210, 140, 110, "__cdecl"), format_rgb(180, 180, 210, "cls"), format_rgb(210, 140, 110, "void"));
    std::println("{}: ?method@cls@@{}AXXZ", format_rgb(80, 160, 210, "mangled"), format_rgb(140, 140, 40, "K"));
    std::println();

    return 0;
}