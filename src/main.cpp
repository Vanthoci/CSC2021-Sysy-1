
#include <iostream>
#include <fstream>
#include "ast.h"
#include "Mem2Reg.h"
#include "IRSemanticAnalysis.h"
#include "DeadCodeElimination.h"
#include "SSCP.h"
#include "SSADestruction.h"

using namespace std;

Ast *ast;
extern FILE *yyin;

int yyparse();

char output_file[256] = "a.out";
char input_file[256];
bool gen_IR;
bool gen_arm = true;
bool gen_ast;
bool optimize;

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        cerr << "no input file\n";
        exit(-1);
    }
    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "--ast") == 0)
        {
            gen_arm = false;
            gen_ast = true;
        }
        else if (strcmp(argv[i], "--arm") == 0)
            gen_arm = true;
        else if (strcmp(argv[i], "--IR") == 0)
        {
            gen_IR = true;
            gen_arm = false;
        }
        else if (strcmp(argv[i], "-o") == 0 && i + 1 < argc)
        {
            sprintf(output_file, "%s", argv[i + 1]);
            i++;
        }
        else if (strcmp(argv[i], "-S") == 0)
            ;
        else if (strcmp(argv[i], "-O2") == 0)
            optimize = true;
        else
            sprintf(input_file, "%s", argv[i]);
    }

    if (!(yyin = fopen(input_file, "r")))
    {
        cerr << input_file << ": No such file or directory\nno input file\n";
        exit(-1);
    }

    ofstream fout(output_file, ios_base::out);
    if (fout.fail())
    {
        cerr << "fail to open output file\n";
        exit(-1);
    }
    ast = new Ast(fout);
    yyparse();
    if (gen_ast)
        ast->printAst();
    if (gen_IR)
    {
        Unit *unit = ast->gen_code();
        IRSemAnalysis isa(unit);
        // Mem2Reg ssa(unit);
        // DeadCodeElimination dce(unit);
        // SSCP sscp(unit);
        // SSADestruction ssad(unit);
        isa.pass();
        // if (optimize)
        // {
        //     ssa.pass();
        //     sscp.pass();
        //     dce.pass();
        // }
        // ssad.pass();
        unit->print();
    }
    fout.close();
    return 0;
}
