#include <stdio.h>
#include "../header_file.h"

//////////////////////////////////////////////////////////////
char *sec_features();
char *feature_row();
char *feature_box(char *, char *, char *);
char *feature_box_icon(char *);
char *feature_box_h3(char *);
char *feature_box_para(char *);

//////////////////////////////////////////////////////////////
char *sec_features()
{
    // printf("\nsec_features()");
    char *open = "<div class=\"row\">\n";
    char *content = feature_row();
    char *close = "\n</div>";
    // content = tag_return(content, content2, "");
    return tag_return(open, content, close);
}

char *feature_row()
{
    char *icon;
    char *heading;
    char *para;
    char *content, *content2, *content3, *content4;

    icon = "icon-basic-world";
    heading = "Explore the world";
    para = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Inventore voluptates amet ipsum quia voluptas asperiores consequatur dicta et a error! Labore.";

    content = feature_box(icon, heading, para);

    icon = "icon-basic-compass";
    heading = "Meet nature";
    para = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Inventore voluptates amet ipsum quia voluptas asperiores consequatur dicta et a error! Labore.";

    content2 = feature_box(icon, heading, para);

    icon = "icon-basic-map";
    heading = "find your way";
    para = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Inventore voluptates amet ipsum quia voluptas asperiores consequatur dicta et a error! Labore.";

    content3 = feature_box(icon, heading, para);

    icon = "icon-basic-heart";
    heading = "Live a healthier life";
    para = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Inventore voluptates amet ipsum quia voluptas asperiores consequatur dicta et a error! Labore.";

    content4 = feature_box(icon, heading, para);

    content = tag_return(content, content2, content3);
    content = tag_return(content, content4, "");
    return content;
}

char *feature_box(char *icon, char *heading, char *para)
{
    // printf("\nfeature_box()");
    char *open = "<div class=\"col-1-of-4\">\n<div class=\"feature-box\">";
    char *content = feature_box_icon(icon);
    char *content2 = feature_box_h3(heading);
    char *content3 = feature_box_para(para);
    char *close = "\n</div>\n</div>";
    content = tag_return(content, content2, content3);
    return tag_return(open, content, close);
}

char *feature_box_icon(char *icon)
{
    // printf("\nfeature_box_icon()");
    char *open = "<i class=\"feature-box__icon ";
    char *close = "\"></i>";
    return tag_return(open, icon, close);
}

char *feature_box_h3(char *heading)
{
    // printf("\nfeature_box_h3()");
    char *open = "<h3 class=\"heading-tertiary\">";
    char *close = "</h3>";
    return tag_return(open, heading, close);
}

char *feature_box_para(char *paragraph)
{
    // printf("\nfeature_box_para()");
    char *open = "<p class=\"feature-box__text\">\n";
    char *close = "\n</p>";
    return tag_return(open, paragraph, close);
}