#include "header_file.h"

////////////////////////
char *logobox();
char *textbox();
char *header();
char *heading_primary();
char *header_button();

///////////////////////

char *header()
{
    char *open = "<header class=\"header\">\n";
    char *content = logobox();
    char *content2 = textbox();
    char *close = "\n</header>";
    content = tag_return(content, content2, "");
    return tag_return(open, content, close);
}

char *logobox()
{
    char *open = "<div class=\"header__logo-box\">\n";
    char *content = "<img src=\"./img/logo-white.png \" alt=\" logo \" class=\" header__logo \">";
    char *close = "\n</div>";
    return tag_return(open, content, close);
}

char *textbox()
{
    char *open = "<div class=\"header__text-box\">\n";
    char *content = heading_primary();
    char *content2 = header_button();
    char *close = "\n</div>";
    content = tag_return(content, content2, "");

    return tag_return(open, content, close);
}

char *heading_primary()
{
    char *open = "<h1 class=\"heading-primary\">\n";
    char *content = "<span class=\"heading-primary--main\">Outdoors</span>\n";
    char *content2 = "<span class=\"heading-primary--sub\">is where life happens</span>";
    char *close = "\n</h1>";
    content = tag_return(content, content2, "");

    return tag_return(open, content, close);
}

char *header_button()
{
    char *open = "\n<a href=\"#section-tours\" class=\"btn btn--white btn--animate\">";
    char *content = "Discover our tours";
    char *close = "</a>";
    return tag_return(open, content, close);
}