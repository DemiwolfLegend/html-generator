#include "../header_file.h"

//////////////////////////////////////////////////////////////

char *head();
char *meta();
char *link_font();
char *link_css();
char *link_icon();
char *title();

//////////////////////////////////////////////////////////////

char *head()
{
    char *open = "\n<head>\n";
    char *content = meta();
    char *content2 = link_css();
    char *content3 = link_font();
    char *content4 = link_icon();
    char *content5 = title();
    char *close = "\n</head>";
    content = tag_return(content, content2, content3);
    content = tag_return(content, content4, content5);
    return tag_return(open, content, close);
}
char *meta()
{
    char *tag1 = "\n<meta charset=\"UTF-8\">";
    char *tag2 = "\n<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">";
    char *tag3 = "\n<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">";
    return tag_return(tag1, tag2, tag3);
}
char *link_font()
{
    char *tag = "\n<link rel=\"stylesheet\" href=\"https://fonts.googleapis.com/css?family=Lato:100,300,400,700,900\">";
    return tag;
}
char *link_css()
{
    char *tag1 = "\n<link rel=\"stylesheet\" href=\"./css/style.css\">";
    char *tag2 = "\n<link rel=\"stylesheet\" href=\"./css/icon-font.css\">";
    return tag_return(tag1, tag2, "");
}
char *link_icon()
{
    char *tag = "\n<link rel=\"shortcut icon\" href=\"./img/favicon.png\" type=\"image/x-icon\">";
    return tag;
}
char *title()
{
    char *open = "\n<title>";
    char *content = "Natours | Exiting tours for adventourous people";
    char *close = "</title>";
    return tag_return(open, content, close);
}