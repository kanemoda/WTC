#include <stdio.h>
#include <stdlib.h>
#include <compiler.h>
struct compile_process *compile_process_create(const char *filename, const char *out_filename, int flags)
{
    // Open source file
    FILE *file = fopen(filename, "r");
    if (!file)
    {
        return NULL;
    }

    // Handle output file operations
    FILE *out_file = NULL;
    if (out_filename)
    {
        out_file = fopen(out_filename, "w");
        if (!out_file)
        {
            return NULL;
        }
    }

    struct compile_process *process = calloc(1, sizeof(struct compile_process));
    process->flags = flags;
    process->cfile.fp = file;
    process->ofile = out_file;
    return process;
}
