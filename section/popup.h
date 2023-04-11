#include "../header_file.h"

//////////////////////////////////////////////////////////////

char *popup_content();
char *popup_left();
char *popup_image();
char *popup_right();
char *popup_close();
char *popup_h2();
char *popup_h3();
char *popup_text();
char *popup_button();

//////////////////////////////////////////////////////////////

char *popup_content()
{
    char *open = "\n<div class=\"popup__content\">\n";
    char *tag = popup_left();
    char *tag2 = popup_right();
    char *close = "\n</div>";
    tag = tag_return(tag, tag2, "");
    return tag_return(open, tag, close);
}
char *popup_left()
{
    char *open = "\n<div class=\"popup__left\">\n";
    char *text = popup_image();
    char *close = "\n</div>";
    return tag_return(open, text, close);
}
char *popup_image()
{
    char *first = "<img src=\"./img/nat-8.jpg\" alt=\"Tour photo\" class=\"popup__image\">";
    char *second = "<img src=\"./img/nat-9.jpg\" alt=\"Tour photo\" class=\"popup__image\">";
    return tag_return(first, second, "");
}
char *popup_right()
{
    char *open = "\n<div class=\"popup__right\">\n";
    char *tag = popup_close();
    char *tag2 = popup_h2();
    char *tag3 = popup_h3();
    char *tag4 = popup_text();
    char *tag5 = popup_button();
    char *close = "\n</div>";
    tag = tag_return(tag, tag2, tag3);
    tag = tag_return(tag, tag4, tag5);
    return tag_return(open, tag, close);
}
char *popup_close()
{
    return "\n<a href=\"#section-tours\" class=\"popup__close\">&times;</a>";
}
char *popup_h2()
{
    char *open = "\n<h2 class=\"heading-secondary u-margin-bottom-medium\">";
    char *text = "Start booking now";
    char *close = "</h2>";
    return tag_return(open, text, close);
}
char *popup_h3()
{
    char *open = "\n<h3 class=\"heading-tertiary u-margin-bottom-small\">";
    char *text = "Important &ndash; please read the terms carefully before booking.";
    char *close = "</h3>";
    return tag_return(open, text, close);
}
char *popup_text()
{
    char *open = "\n<p class=\"popup__text\">\n";
    char *text = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Quae hic ratione consequatur autem totam laborum adipisci labore nisi perspiciatis !Eum Lorem ipsum dolor sit amet consectetur adipisicing elit. Quaerat est, nemo dolor magnam, accusantium debitis saepe nulla natus cupiditate at beatae fugiat iure.Ipsum, consequuntur similique !Quisquam, maxime molestiae !Ratione ? corrupti neque ducimus accusamus, qui ipsum rem nulla nam eos ? Lorem ipsum dolor sit amet consectetur adipisicing elit.Quae hic ratione consequatur autem totam ";
    char *close = "\n</p>";
    return tag_return(open, text, close);
}
char *popup_button()
{
    return "\n<a href=\"#section-book\" class=\"btn btn--green\">Book now</a>";
}