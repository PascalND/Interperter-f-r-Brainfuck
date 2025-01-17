#include <cstring>
#include <iostream>
#include <vector>

class BrainFuckInterpreter
{
private:
    std::vector<unsigned char> memory;
    size_t                     pointer;

public:
    BrainFuckInterpreter()
      : memory(30000000, 0)
      , pointer(0)
    {
    }

    void Interpret(const std::string& code)
    {
        size_t              i = 0;
        std::vector<size_t> temp;
        while (i < code.length())
        {
            char input = code[i];
            switch (input)
            {
            case '>':
                ++pointer;
                break;
            case '<':
                --pointer;
                break;
            case '+':
                ++memory[pointer];
                break;
            case '-':
                --memory[pointer];
                break;
            case '[':
               if (memory[pointer] == 0)
                {
                    size_t temp2 = 1;
                    while (temp2 > 0)
                    {
                        ++i;
                        if (code[i] == '[')
                        {
                            ++temp2;
                        }
                        else if (code[i] == ']')
                        {
                            --temp2;
                        }
                    }
                }
                else
                {
                    temp.push_back(i);
                }
                // temp.push_back(i);
                break;
            case ']':
                //if (temp.empty())
                //{
                //    std::cerr << "Error " << i << std::endl;
                //    return;
                //}
                if (memory[pointer] != 0)
                {
                    i = temp.back();
                }
                else
                {
                    temp.pop_back();
                }
                break;
            case '.':
                std::cout << memory[pointer];
                break;
            case ',':
                std::cin >> memory[pointer];
                break;
            default:
                break;
            }
            i++;
        }
    }
};

int main()
{
    std::string          code = R"(++++++++[>++++++++<-]>[-<++>]<----- schreibt die Zahl 123 in die erste Zelle
>[-]++++++++[>[-]<[->+<]>-]<<<<<<<<< Löschen der nächsten Zellen
[->+<]>[>+<-<+>]>[>>>>>[->+<]>+<<<<< der eigentliche Code
++++++++++<[->>+<-[>>>]>[[<+>-]>+>>]
<<<<<]>[-]>[-<<+>>]>[-<<+>>]<<]>>>>>
[<<<<+++++++[-<+++++++>]<-[<+>-]<.[-
]>>>>>>[-<+>]<-]<<<<<<<)";
    BrainFuckInterpreter bfint;
    bfint.Interpret(code);

}

//, 8‗, =┼, E } , , gK, ë↓,