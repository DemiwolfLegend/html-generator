#include <stdio.h>

#include "header_file.h"
#include "./section/footer.h"
#include "./section/navigation.h"
#include "./section/popup.h"
#include "./section/section_about.h"
#include "./section/section_book.h"
#include "./section/section_features.h"
#include "./section/section_stories.h"
#include "./section/section_tours.h"
/////////////////////////

char *sec_navigation();
char *section_about();
char *section_features();
char *section_book();
char *section_stories();
char *section_tours();
char *footer();
char *popup();

///////////////////////

char *sec_navigation()
{
    char *open = "<div class=\"navigation\">";
    char *content = navigation();
    char *close = "</div>";
    return tag_return(open, content, close);
}

char *section_about()
{
    char *open = "<section class=\"section-about\" id=\"section-about\">";
    char *content = sec_about();
    char *close = "</section>";
    return tag_return(open, content, close);
}
char *section_features()
{
    char *open = "<section class=\"section-features\" id=\"section-features\">\n";
    char *intext = sec_features();
    char *close = "\n</section>";
    return tag_return(open, intext, close);
}
char *section_tours()
{
    char *open = "<section class=\"section-tours\" id=\"section-tours\">\n";
    char *intext = sec_tours();
    printf("\nSecton tours");
    char *close = "\n</section>";
    return tag_return(open, intext, close);
}
char *section_stories()
{
    char *open = "<section class=\"section-stories\" id=\"section-stories\">\n";
    char *intext = sec_stories();
    char *close = "\n</section>";
    return tag_return(open, intext, close);
}
char *section_book()
{
    char *open = "<section class=\"section-book\" id=\"section-book\">\n";
    char *intext = sec_book();
    char *close = "\n</section>";
    return tag_return(open, intext, close);
}
char *footer()
{
    char *open = "<footer class=\"footer\">\n";
    char *content = footer_content();
    char *close = "\n</footer>";
    return tag_return(open, content, close);
}

char *popup()
{
    char *open = "<div class=\"popup\" id=\"popup\">\n";
    char *content = popup_content();
    char *close = "\n</div>";
    return tag_return(open, content, close);
}