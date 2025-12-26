#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <argz.h>
#include <argp.h>
#include <error.h>
#include <unistd.h>

// Settings for argp
const char *argp_program_bug_address = "<milan.skocic@gmail.com>"; 
const char *argp_program_version = 
    "codata 2.3.1\n"
    "\n"
    "Copyright (c) 2025 M. Skocic.\n"
    "MIT License.\n"
    "\n"
    "Written by M. Skocic.\n";
static char doc[] = 
    "codata - Fundamental physical constants.\v"
    "Fortran library: <https://github.com/MilanSkocic/codata>";
static char args_doc[] = "";
struct argp_option options[] =
{
    { "prefix"  , 'p', 0, 0, "Show codata installation prefix."},
    { "cflags"  , 'f', 0, 0, "Print pre-precessor and compiler flags."},
    { "libs"    , 'l', 0, 0, "Print library linking information."},
    { 0 }
};

// arguments
struct arguments {
    int prefix;
    int libs;
    int cflags;
};

// functions
struct arguments init_args(){
    struct arguments args;
    args.prefix = 0;
    args.libs = 0;
    args.cflags = 0;
    return args;
}

static int parse_opt (int key, char *arg, struct argp_state *state)
{
    struct arguments *args = state->input;
    switch (key)
    {
        case 'p': 
            args->prefix = 1;
            break;
        case 'f':
            args->cflags = 1;
            break;
        case 'l':
            args->libs = 1;
            break;
        default:
            return ARGP_ERR_UNKNOWN;
    }
    return 0;
}

struct argp argp = { options, parse_opt, args_doc, doc };




int main(int argc, char **argv)
{
    struct arguments args = init_args();

    char abs_exe_path[512];

    error_t err;
    err = argp_parse (&argp, argc, argv, 0, 0, &args);

    char *p;
    
    if (err == 0)
    {
        if (args.prefix){
            printf("%s\n", argv[0]);
        }
        if (args.cflags){
            printf("%s\n", "-I/usr/include");
        }
        if (args.libs){
            printf("%s\n", "-lcodata");
        }
        return EXIT_SUCCESS;
    }
    else
    {
        return EXIT_FAILURE;
    }
}
