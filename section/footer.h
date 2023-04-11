#include "../header_file.h"

//////////////////////////////////////////////////////////////

char *footer_content();
char *footer_logo();
char *footer_row();
char *footer_navigation();
char *footer_list();
char *footer_item(char *);
char *footer_link(char *);
char *footer_copyright();
char *footer_paragraph();

//////////////////////////////////////////////////////////////

char *footer_content()
{
    char *tag = footer_logo();
    char *tag2 = footer_row();
    return tag_return(tag, tag2, "");
}
char *footer_logo()
{
    char *open = "\n<div class=\"footer__logo-box\">\n";
    char *img = "<img src=\"./img/logo-green-2x.png\" alt=\"Full logo\" class=\"footer__logo\">";
    char *close = "\n</div>";
    return tag_return(open, img, close);
}
char *footer_row()
{
    char *open = "\n<div class=\"row\">\n";
    char *tag = footer_navigation();
    char *tag2 = footer_copyright();
    char *close = "\n</div>";
    tag = tag_return(tag, tag2, "");
    return tag_return(open, tag, close);
}
char *footer_navigation()
{
    char *open = "\n<div class=\"col-1-of-2\">\n<div class=\"footer__navigation\">\n";
    char *text = footer_list();
    char *close = "\n</div>\n</div>";
    return tag_return(open, text, close);
}
char *footer_list()
{
    char *open = "\n<div class=\"popup__left\">\n";
    char *content = footer_item("company");
    char *content2 = footer_item("contact us");
    char *content3 = footer_item("carrers");
    char *content4 = footer_item("privacy policy");
    char *content5 = footer_item("terms");
    char *close = "\n</div>";
    content = tag_return(content, content2, content3);
    content = tag_return(content, content4, content5);
    return tag_return(open, content, close);
}
char *footer_item(char *link)
{
    char *open = "\n<li class=\"footer__item\">\n";
    char *text = footer_link(link);
    char *close = "\n</li>";
    return tag_return(open, text, close);
}
char *footer_link(char *text)
{
    char *open = "<a href=\"#\" class=\"footer__link\">";
    char *close = "</a>";
    return tag_return(open, text, close);
}
char *footer_copyright()
{
    char *open = "\n<div class=\"col-1-of-2\">\n<p class=\"footer__copyright\">\n";
    char *text = footer_paragraph();
    char *close = "\n</p>\n</div>";
    return tag_return(open, text, close);
}
char *footer_paragraph()
{
    return "Lorem ipsum dolor, company sit amet consectetur adipisicing elit. Numquam consectetur minima dolores recusandae ratione eveniet itaque soluta perferendis culpa, velit repellendus quod error, voluptates eos! Totam nesciunt nostrum animi corporis.";
}