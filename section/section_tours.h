char *section_tours()
{
    char *open = "<Ul style = \"list-style:none\">";
    char *intext = navigation_list();
    char *close = "</ul>";
    return tag_return(open, intext, close);
}