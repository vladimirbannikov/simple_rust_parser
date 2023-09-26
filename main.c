#include "parser.h"

int main(int argc, char **argv)
{
    if (argc != 2) {
        fprintf(stderr, "file open error\n");
        return 1;
    }

    int res;
    FILE *f;

    f = fopen(argv[1], "r");

    if (f == NULL) {
        fprintf(stderr, "file open error `%s'\n",
                argv[1]);
        return 2;
    }

    yyin = f;
    res = yyparse();
    fclose(f);

    return res;
}