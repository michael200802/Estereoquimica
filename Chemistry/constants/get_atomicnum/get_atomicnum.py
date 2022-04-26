from textwrap import indent
from mendeleev import element
import os

path = os.path.realpath(__file__).split("/get_atomicnum.py").pop(0)

file = open(path + "/table.h","w")

header  = '#pragma once\n'
header += '#include "../../types/types.h"\n'
header += '\n'
header += 'atomic_num_t sym_table[26*26] = \n'
header += '{\n'

file.write(header)

atomic_num = 1

for i in range(0,26*26):
    sym = str(chr(int(i/26) + 65))
    print(sym+"\n")
    if i%26 != 0:
        sym += str(chr(i%26 + 97))
    try:
        elem = element(sym)
    except:
        file.write('\t-1')
    else:
        file.write('\t' + str(elem.atomic_number) + "/*" + str(i) + " " + elem.symbol + "==" + sym + "*/")
    
    if i != 26*26-1:
        file.write(',\n')
    else:
        file.write('\n')

file.write('};')

