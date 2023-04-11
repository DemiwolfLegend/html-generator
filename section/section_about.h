#include <stdio.h>
#include "../header_file.h"

///////////////////////
char *sec_about();
char *about_h2();
char *about_row();
char *about_text();
char *about_text_box(char *, char *);
char *about_text_h3(char *);
char *about_text_para(char *);
char *about_img();

////////////////////////////////////////////////////////
char *sec_about()
{
    // printf("\nsec_about()");

    char *content = about_h2();
    char *content2 = about_row();
    return tag_return(content, content2, "");
}

char *about_h2()
{
    char *open = "<div class=\"u-center-text u-margin-bottom-big\">\n";
    char *content = "<h2 class=\"heading-secondary\">\n";
    char *content2 = "Exciting tours for adventurous people";
    char *content3 = "\n</h2>";
    char *close = "\n</div>";
    content = tag_return(content, content2, content3);
    return tag_return(open, content, close);
}

char *about_row()
{
    char *open = "<div class=\"row\">\n<div class=\"col-1-of-2\">\n";
    char *content = about_text();
    char *content2 = "\n<a href=\"#\" class=\"btn-text\">Learn more &rarr;</a>";
    char *close = "\n</div>\n</div>";
    content = tag_return(content, content2, "\n");
    return tag_return(open, content, close);
}

char *about_text()
{
    // printf("\nabout_text()");
    char *heading;
    char *para;
    char *content, *content2;

    heading = "You're going to fall in love with nature";
    para = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Cupiditate quis possimus in excepturi illo similique dignissimos dolorem. Hic, sit. Quibusdam adipisci odit omnis voluptates debitis praesentium animi reprehenderit natus suscipit!";
    content = about_text_box(heading, para);

    heading = "Live adventures like you never have before";
    para = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Inventore voluptates amet ipsum quia voluptas asperiores consequatur dicta et a error! Labore.";
    content2 = about_text_box(heading, para);

    return tag_return(content, content2, "\n");
}

char *about_text_box(char *heading, char *para)
{
    // printf("\nabout_text_box()");
    char *content = about_text_h3(heading);
    char *content2 = about_text_para(para);
    content = tag_return(content, content2, "");
    return content;
}

char *about_text_h3(char *heading)
{
    // printf("\nabout_text_h3()");
    char *open = "<h3 class=\"heading-tertiary\">";
    char *close = "</h3>\n";
    return tag_return(open, heading, close);
}

char *about_text_para(char *paragraph)
{
    // printf("\nabout_text_para()");
    char *open = "<p class=\"feature-box__text\">\n";
    char *close = "\n</p>";
    return tag_return(open, paragraph, close);
}

char *about_img()
{
    // printf("\nabout_img()");
    char *open = "<div class=\"col-1-of-2\">\n<div class=\"composition\">";
    char *content = "\n<img src=\"./img/nat-1-large.jpg\" alt=\"photo1\" class=\"composition__photo composition__photo--p1\">";
    char *content2 = "\n<img src=\"./img/nat-2-large.jpg\" alt=\"photo2\" class=\"composition__photo composition__photo--p2\">";
    char *content3 = "\n<img src=\"./img/nat-3-large.jpg\" alt=\"photo3\" class=\"composition__photo composition__photo--p3\">";
    char *close = "\n</div>\n</div>";
    content = tag_return(content, content2, content3);
    return tag_return(open, content, close);
}