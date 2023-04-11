#include <stdio.h>
#include "../header_file.h"

//////////////////////////////////////////////////////////////
char *sec_book();
char *book_form();
char *book_form_action();
char *form_h2();
char *form_name();
char *form_email();
char *form_size();
char *form_size_small();
char *form_size_large();
char *form_button();
char *book_row();

//////////////////////////////////////////////////////////////

char *sec_book()
{
    char *open = "<div class=\"row\">\n<div class=\"book\">\n";
    char *content = book_form();
    char *close = "\n</div>\n</div>";
    return tag_return(open, content, close);
}

char *book_form()
{
    char *open = "<div class=\"book\">\n<div class=\"book_form\">\n";
    char *content = book_form_action();
    char *close = "\n</div>\n</div>";
    return tag_return(open, content, close);
}

char *book_form_action()
{
    char *open = "<form action=\"#\" class=\"form\">\n";
    char *content = form_h2();
    char *content2 = form_name();
    char *content3 = form_email();
    char *content4 = form_size();
    char *content5 = form_button();
    char *close = "\n</form>";

    content = tag_return(content, content2, content3);
    content = tag_return(content, content4, content5);

    return tag_return(open, content, close);
}

char *form_h2()
{
    char *open = "<div class=\"u-margin-bottom-medium\">\n";
    char *content = "<h2 class=\"heading-secondary\">\n";
    char *content2 = "Start booking now";
    char *content3 = "\n</h2>";
    char *close = "\n</div>";
    content = tag_return(content, content2, content3);
    return tag_return(open, content, close);
}

char *form_name()
{
    char *open = "<div class=\"form__group\">\n";
    char *content = "<input type=\"text\" class=\"form__input\" placeholder=\"Full Name\" id=\"name\" required>\n";
    char *content2 = "<label for=\"name\" class=\"form__label\">Full Name</label>";
    char *close = "\n</div>";
    content = tag_return(content, content2, "");
    return tag_return(open, content, close);
}

char *form_email()
{
    char *open = "<div class=\"form__group\">\n";
    char *content = "<input type=\"email\" class=\"form__input\" placeholder=\"Email Address\" id=\"email\" required>\n";
    char *content2 = "<label for=\"email\" class=\"form__label\">Email Address</label>";
    char *close = "\n</div>";
    content = tag_return(content, content2, "");
    return tag_return(open, content, close);
}

char *form_size()
{
    char *open, *input, *label, *close;
    char *content, *content2;

    open = "<div class=\"form__group u-margin-bottom-medium\">\n";
    close = "\n</div>";

    label = form_size_small();
    content = tag_return(open, label, close);

    label = form_size_large();
    content2 = tag_return(open, label, close);

    content = tag_return(content, content2, "");
    return tag_return(open, content, close);
}

char *form_size_small()
{
    char *open = "<div class=\"form__radio-group\">\n";
    char *input = "<input type=\"radio\" id=\"small\" class=\"form__radio-input\" name=\"size\">\n";
    char *label = "<label for=\"small\" class=\"form__radio-label\">";
    char *content = "<span class=\"form__radio-button\"></span>\n";
    char *content2 = "Small tour group";
    char *close = "\n</label>\n</div>";
    content = tag_return(label, content, content2);
    content = tag_return(input, content, "");
    return tag_return(open, content, close);
}
char *form_size_large()
{
    char *open = "<div class=\"form__radio-group\">\n";
    char *input = "<input type=\"radio\" id=\"large\" class=\"form__radio-input\" name=\"size\">\n";
    char *label = "<label for=\"large\" class=\"form__radio-label\">";
    char *content = "<span class=\"form__radio-button\"></span>\n";
    char *content2 = "Large tour group";
    char *close = "\n</label>\n</div>";
    content = tag_return(label, content, content2);
    content = tag_return(input, content, "");
    return tag_return(open, content, close);
}

char *form_button()
{
    char *open = "<div class=\"form__group\">\n";
    char *content = "<button class=\"btn btn--green\">Next Step &rarr;</button>";
    char *close = "\n</div>";
    return tag_return(open, content, close);
}