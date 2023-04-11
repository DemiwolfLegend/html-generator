#include "../header_file.h"
#include <stdio.h>

//////////////////////////////////////////////////////////////
char *sec_tours();
char *tours_h2();
char *tours_row();
char *tours_card(int);
char *card_front(int);
char *card_pic(int);
char *card_heading(int);
char *card_detail(int);
char *card_back(int);
char *card_cta(int);
char *card_price_box(int);
char *card_button();
char *tours_button();

//////////////////////////////////////////////////////////////

char *sec_tours()
{
    char *content = tours_h2();
    char *content2 = tours_row();
    printf("\nsec tours");
    char *content3 = tours_button();
    printf("\ntours_row = %s", content2);
    printf("\ntours_button = %s", content3);
    return tag_return(content, content2, content3);
}

char *tours_h2()
{
    char *open = "\n<div class=\"u-center-text u-margin-bottom-big\">\n";
    char *content = "<h2 class=\"heading-secondary\">\n";
    char *content2 = "Most popular tours";
    char *content3 = "\n</h2>";
    char *close = "\n</div>";
    content = tag_return(content, content2, content3);
    return tag_return(open, content, close);
}

char *tours_row()
{
    char *open = "\n<div class=\"row\">\n";
    char *content = tours_card(1);
    printf("\ntours row");
    char *content2 = tours_card(2);
    char *content3 = tours_card(3);
    char *close = "\n</div>";
    content = tag_return(content, content2, content3);
    return tag_return(open, content, close);
}

char *tours_card(int num)
{
    char *open = "\n<div class=\"col-1-of-3\">\n<div class=\"card\">\n";
    char *content = card_front(num);
    char *content2 = card_back(num);
    printf("\ntours card %d", num);
    char *close = "\n</div>";
    content = tag_return(content, content2, "");
    return tag_return(open, content, close);
}

char *card_front(int num)
{
    char *open = "<div class=\"card__side card__side--front\">\n";
    char *content = card_pic(num);
    char *content2 = card_heading(num);
    char *content3 = card_detail(num);
    printf("\ntours front %d", num);
    char *close = "\n</div>";
    content = tag_return(content, content2, content3);
    return tag_return(open, content, close);
}
char *card_pic(int num)
{
    char *open;
    if (num == 1)
        open = "<div class=\"card__picture card__picture--1\">\n";
    else if (num == 2)
        open = "<div class=\"card__picture card__picture--2\">\n";
    else if (num == 3)
        open = "<div class=\"card__picture card__picture--3\">\n";

    char *content = "&nbsp;";
    char *close = "\n</div>";
    return tag_return(open, content, close);
}
char *card_heading(int num)
{
    char *open = "<h4 class=\"card__heading\">";
    char *content;
    if (num == 1)
        content = "<span class=\"card__heading-span card__heading-span--1\">\nThe sea explorer\n</span>";
    else if (num == 2)
        content = "<span class=\"card__heading-span card__heading-span--2\">\nThe forest hiker\n</span>";
    else if (num == 3)
        content = "<span class=\"card__heading-span card__heading-span--3\">\nThe snow adventurer\n</span>";
    char *close = "\n</h4>";
    return tag_return(open, content, close);
}

char *card_detail(int num)
{
    char *open = "<div class=\"card__details\">\n<ul>\n";
    char *item, *item2, *item3, *item4, *item5;
    if (num == 1)
    {
        item = "<li>3 days tour</li>";
        item2 = "<li>Up to 30 people</li>";
        item3 = "<li>2 tour guides</li>";
        item4 = "<li>Sleep in cozy hotels</li>";
        item5 = "<li>Difficulty: easy</li>";
    }
    else if (num == 2)
    {
        item = "<li>7 days tour</li>";
        item2 = "<li>Up to 40 people</li>";
        item3 = "<li>6 tour guides</li>";
        item4 = "<li>Sleep in provided tents</li>";
        item5 = "<li>Difficulty: medium</li>";
    }
    else if (num == 3)
    {
        item = "<li>5 days tour</li>";
        item2 = "<li>Up to 15 people</li>";
        item3 = "<li>3 tour guides</li>";
        item4 = "<li>Sleep in provided tents</li>";
        item5 = "<li>Difficulty: hard</li>";
    }
    char *close = "\n</ul>\n</div>";
    item = tag_return(item, item2, item3);
    item = tag_return(item, item4, item5);
    printf("\ntours details>>>%d", num);

    return tag_return(open, item, close);
}
char *card_back(int num)
{
    char *open;
    if (num == 1)
    {
        open = "<div class=\"card__side card__side--back card__side--back-1>\n";
    }
    else if (num == 2)
    {
        open = "<div class=\"card__side card__side--back card__side--back-2>\n";
    }
    else if (num == 3)
    {
        open = "<div class=\"card__side card__side--back card__side--back-3>\n";
    }

    printf("\ntours back>>>%d", num);
    char *content = card_cta(num);

    char *close = "\n</div>";
    return tag_return(open, content, close);
}
char *card_cta(int num)
{
    char *open = "<div class=\"card__cta\">\n";
    char *content = card_price_box(num);
    char *content2 = card_button();
    char *close = "\n</div>";
    content = tag_return(content, content2, "");
    return tag_return(open, content, close);
}
char *card_price_box(int num)
{
    char *open = "<div class=\"card__price-box\">\n";
    char *only = "<p class=\"card__price-only\">Only</p>";
    char *value = "<p class=\"card__price-value\">";
    char *price;
    if (num == 1)
        price = "$297";
    else if (num == 2)
        price = "$497";
    else if (num == 3)
        price = "$897";
    char *close = "</p>\n</div>";
    value = tag_return(only, value, price);
    return tag_return(open, value, close);
}
char *card_button()
{
    return "<a href=\"#popup\" class=\"btn btn--white\">Book now!</a>";
}

char *tours_button()
{
    char *open = "<div class=\"u-center-text u-margin-top-big\">\n";
    char *content = "<a href=\"#\" class=\"btn btn--green\">";
    char *content2 = "Discover all tours";
    char *content3 = "</a>";
    char *close = "\n</div>";
    content = tag_return(content, content2, content3);
    return tag_return(open, content, close);
}