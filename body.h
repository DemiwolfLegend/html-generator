#include "header_file.h"
#include "./section/section_about.h"
// #include "./section_book.h"
// #include "./section_features.h"
// #include "./section_stories.h"
// #include "./section_tours.h"
/////////////////////////

char *section_about();
// char *section_features();
// char *section_book();
// char *section_stories();
// char *section_tours();

///////////////////////

char *section_about()
{
    char *open = "<section class=\"section-about\" id=\"section-about\">";
    char *content = sec_about();
    char *close = "</section>";
    return tag_return(open, content, close);
}
// char *section_features()
// {
//     char *open = "<Ul style = \"list-style:none\">";
//     char *intext = navigation_list();
//     char *close = "</ul>";
//     return tag_return(open, intext, close);
// }
// char *section_tours()
// {
//     char *open = "<Ul style = \"list-style:none\">";
//     char *intext = navigation_list();
//     char *close = "</ul>";
//     return tag_return(open, intext, close);
// }
// char *section_stories()
// {
//     char *open = "<Ul style = \"list-style:none\">";
//     char *intext = navigation_list();
//     char *close = "</ul>";
//     return tag_return(open, intext, close);
// }
// char *section_book()
// {
//     char *open = "<Ul style = \"list-style:none\">";
//     char *intext = navigation_list();
//     char *close = "</ul>";
//     return tag_return(open, intext, close);
// }
