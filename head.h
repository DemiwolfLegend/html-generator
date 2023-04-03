#include "header_file.h"

char *title()
{
    char *open = "<title>";
    char *intext = "I Love My Country";
    char *close = "</title>";
    return tag_return(open, intext, close);
}

char *head()
{
    char *open = "<head>\n";
    char *intext = title();
    char *close = "\n</head>";
    return tag_return(open, intext, close);
}
