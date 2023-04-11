#include "../header_file.h"

//////////////////////////////////////////////////////////////

char *sec_stories();
char *stories_background();
char *background_video();
char *stories_h2();
char *stories_row();
char *story_box(int);
char *story_shape(int);
char *story_text(int);
char *story_h3(int);
char *story_paragraph();
char *stories_button();

//////////////////////////////////////////////////////////////

char *sec_stories()
{
    char *open = stories_background();
    char *content = stories_h2();
    char *content2 = stories_row();
    char *close = stories_button();
    content = tag_return(content, content2, "");
    return tag_return(open, content, close);
}

char *stories_background()
{
    char *open = "<div class=\"bg-video\">\n";
    char *content = background_video();
    char *close = "\n</div>";
    return tag_return(open, content, close);
}
char *background_video()
{
    char *open = "<video class=\"bg-video__content\" autoplay muted loop>\n";
    char *content = "<source src=\"./img/video.mp4\" type=\"video/mp4\">\n";
    char *content2 = "<source src=\"./img/video.webm\" type=\"video/webm\">\n";
    char *content3 = "Your browser does not supported!";
    char *close = "\n</video>";
    content = tag_return(content, content2, content3);
    return tag_return(open, content, close);
}
char *stories_h2()
{
    char *open = "<div class=\"u-center-text u-margin-bottom-big\">\n";
    char *content = "<h2 class=\"heading-secondary\">\n";
    char *content2 = "We make people genuinely happy";
    char *content3 = "\n</h2>";
    char *close = "\n</div>";
    content = tag_return(content, content2, content3);
    return tag_return(open, content, close);
}
char *stories_row()
{
    char *open = "<div class=\"row\">\n";
    char *content = story_box(1);
    char *content2 = story_box(2);
    char *close = "\n</div>";
    content = tag_return(content, content2, "");
    return tag_return(open, content, close);
}
char *story_box(int num)
{
    char *open = "<div class=\"story\">\n";
    char *content = story_shape(num);
    char *content2 = story_text(num);
    char *close = "\n</div>";
    content = tag_return(content, content2, "");
    return tag_return(open, content, close);
}
char *story_shape(int num)
{
    char *content, *content2;
    char *open = "<figure class=\"story__shape\">\n";
    if (num == 1)
    {
        content = "<img src=\"./img/nat-8.jpg\" alt=\"story-image\" class=\"story__image\">\n";
        content2 = "<figcaption class=\"story__caption\">Mary Smith</figcaption>";
    }
    else if (num == 2)
    {
        content = "<img src=\"./img/nat-9.jpg\" alt=\"story-image\" class=\"story__image\">\n";
        content2 = "<figcaption class=\"story__caption\">jack Wilson</figcaption>";
    }
    char *close = "\n</figure>";
    content = tag_return(content, content2, "");
    return tag_return(open, content, close);
}
char *story_text(int num)
{
    char *open = "<div class=\"story__text\">\n";
    char *content = story_h3(num);
    char *content2 = story_paragraph();
    char *close = "\n</div>";
    content = tag_return(content, content2, "");
    return tag_return(open, content, close);
}
char *story_h3(int num)
{
    char *content;
    char *open = "<h3 class=\"heading-tertiary u-margin-bottom-small\">\n";
    if (num == 1)
        content = "I had the best week ever with my family\n";
    else if (num == 2)
        content = "wow! my life is completely different now\n";

    char *close = "\n</h3>";
    return tag_return(open, content, close);
}
char *story_paragraph()
{
    char *open = "<p>\n";
    char *intext = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Cupiditate quis possimus in excepturi illo similique dignissimos dolorem. Hic, sit. Quibusdam adipisci odit omnis voluptates debitis praesentium animi reprehenderit natus suscipit!";
    char *close = "\n</p>";
    return tag_return(open, intext, close);
}
char *stories_button()
{
    char *open = "<div class=\"u-center-text u-margin-top-big\">\n";
    char *content = "<a href=\"#\" class=\"btn-text\">";
    char *content2 = "Read all stories &rarr;";
    char *content3 = "</a>";
    char *close = "\n</div>";
    content = tag_return(content, content2, content3);
    return tag_return(open, content, close);
}