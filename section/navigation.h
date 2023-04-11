#include "../header_file.h"

//////////////////////////////////////////////////////////////

char *navigation();
char *navigation_checkbox();
char *navigation_background();
char *navigation_nav();
char *nav_list();
char *nav_item(int);

//////////////////////////////////////////////////////////////

char *navigation()
{
    return tag_return(navigation_checkbox(), navigation_background(), navigation_nav());
}

char *navigation_checkbox()
{
    char *input = "\n<input type=\"checkbox\" name=\"none\" id=\"navi-toggle\" class=\"navigation__checkbox\">\n";
    char *labelopen = "<label for=\"navi-toggle\" class=\"navigation__button\">\n";
    char *span = "<span class=\"navigation__icon\">&nbsp;</span>";
    char *labelclose = "\n</label>";
    span = tag_return(labelopen, span, labelclose);
    return tag_return(input, span, "");
}
char *navigation_background()
{
    return "\n<div class=\"navigation__background\">&nbsp;</div>\n";
}
char *navigation_nav()
{
    char *open = "<nav class=\"navigation__nav\">\n";
    char *content = nav_list();
    char *close = "\n</nav>";
    return tag_return(open, content, close);
}
char *nav_list()
{
    char *open = "<ul class=\"navigation__list\">\n";
    char *close = "\n</ul>";
    char *content = nav_item(1);
    char *content2 = nav_item(2);
    char *content3 = nav_item(3);
    char *content4 = nav_item(4);
    char *content5 = nav_item(5);
    content = tag_return(content, content2, content3);
    content = tag_return(content, content4, content5);
    return tag_return(open, content, close);
}
char *nav_item(int num)
{
    char *content, *content2;
    char *open = "<li class=\"navigation__item\">\n";
    char *close = "\n</a>\n</li>";
    if (num == 1)
    {
        content = "<a href=\"#section-about\" class=\"navigation__link\">\n";
        content2 = "<span>01</span> About Natours";
    }
    else if (num == 2)
    {
        content = "<a href=\"#section-features\" class=\"navigation__link\">\n";
        content2 = "<span>02</span> Your benefits";
    }
    else if (num == 3)
    {
        content = "<a href=\"#section-tours\" class=\"navigation__link\">\n";
        content2 = "<span>03</span> Popular tours";
    }
    else if (num == 4)
    {
        content = "<a href=\"#section-stories\" class=\"navigation__link\">\n";
        content2 = "<span>04</span> Stories";
    }
    else if (num == 5)
    {
        content = "<a href=\"#section-book\" class=\"navigation__link\">\n";
        content2 = "<span>05</span> Book now";
    }
    content = tag_return(content, content2, "");
    return tag_return(open, content, close);
}