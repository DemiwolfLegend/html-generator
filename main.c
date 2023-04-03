#include <stdio.h>
#include <string.h>
#include <stdlib.h>
////////////////////////////////////////////////////
#include "head.h"
#include "body.h"
#include "header.h"
////////////////////////////////////////////////////
int main()
{
    FILE *f;
    f = fopen("./index.html", "w");

    fprintf(f, "<html>\n");
    fprintf(f, "%s", head());
    fprintf(f, "<body>\n");
    // fprintf(f, "%s", navigation());
    fprintf(f, "%s", header());
    fprintf(f, "<main>\n");
    fprintf(f, "%s", section_about());
    // fprintf(f, "%s", section_features());
    // fprintf(f, "%s", section_tours());
    // fprintf(f, "%s", section_stories());
    // fprintf(f, "%s", section_book());
    fprintf(f, "</main>\n");
    // fprintf(f, "%s", footer());
    // fprintf(f, "%s", popup());
    fprintf(f, "\n</body>");
    fprintf(f, "\n</html>");

    fclose(f);
    printf("\nPrint sceessfull!");

    return 0;
}

char *tag_return(char *open, char *midle, char *close)
{
    int i, j = 0;
    char *back;

    i = strlen(open) + strlen(midle) + strlen(close);

    back = calloc(i, sizeof(char));

    for (i = 0; open[i] != '\0'; i++)
    {
        back[j] = open[i];
        j++;
    }

    for (i = 0; midle[i] != '\0'; i++)
    {
        back[j] = midle[i];
        j++;
    }

    for (i = 0; close[i] != '\0'; i++)
    {
        back[j] = close[i];
        j++;
    }
    back[j] = '\0';

    return back;
}
