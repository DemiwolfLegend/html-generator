#include "../header_file.h"

char *sec_about();
char *about_h2();

char *sec_about()
{
    char *open = "<Ul style = \"list-style:none\">";
    char *content = about_h2();

    char *close = "</ul>";

    return tag_return(open, content, close);
}

char *about_h2()
{
    char *open = "<div class=\"u-center-text u-margin-bottom-big\">\n";
    char *content = "<h2 class=\"heading-secondary\">\n";
    char *close = "</ul>";
    return tag_return(open, content, close);
}
