#include "../../types/types.h"

struct
{
    char symbol[MAXLEN_OF_SYMBOL+1];
    num_t mass;
}
uma_table[NUMBER_OF_ELEMENTS] = 
{
	{.symbol = "H", .mass = 1.008},
	{.symbol = "He", .mass = 4.002602},
	{.symbol = "Li", .mass = 6.94},
	{.symbol = "Be", .mass = 9.0121831},
	{.symbol = "B", .mass = 10.81},
	{.symbol = "C", .mass = 12.011},
	{.symbol = "N", .mass = 14.007},
	{.symbol = "O", .mass = 15.999},
	{.symbol = "F", .mass = 18.998403163},
	{.symbol = "Ne", .mass = 20.1797},
	{.symbol = "Na", .mass = 22.98976928},
	{.symbol = "Mg", .mass = 24.305},
	{.symbol = "Al", .mass = 26.9815385},
	{.symbol = "Si", .mass = 28.085},
	{.symbol = "P", .mass = 30.973761998},
	{.symbol = "S", .mass = 32.06},
	{.symbol = "Cl", .mass = 35.45},
	{.symbol = "Ar", .mass = 39.948},
	{.symbol = "K", .mass = 39.0983},
	{.symbol = "Ca", .mass = 40.078},
	{.symbol = "Sc", .mass = 44.955908},
	{.symbol = "Ti", .mass = 47.867},
	{.symbol = "V", .mass = 50.9415},
	{.symbol = "Cr", .mass = 51.9961},
	{.symbol = "Mn", .mass = 54.938044},
	{.symbol = "Fe", .mass = 55.845},
	{.symbol = "Co", .mass = 58.933194},
	{.symbol = "Ni", .mass = 58.6934},
	{.symbol = "Cu", .mass = 63.546},
	{.symbol = "Zn", .mass = 65.38},
	{.symbol = "Ga", .mass = 69.723},
	{.symbol = "Ge", .mass = 72.63},
	{.symbol = "As", .mass = 74.921595},
	{.symbol = "Se", .mass = 78.971},
	{.symbol = "Br", .mass = 79.904},
	{.symbol = "Kr", .mass = 83.798},
	{.symbol = "Rb", .mass = 85.4678},
	{.symbol = "Sr", .mass = 87.62},
	{.symbol = "Y", .mass = 88.90584},
	{.symbol = "Zr", .mass = 91.224},
	{.symbol = "Nb", .mass = 92.90637},
	{.symbol = "Mo", .mass = 95.95},
	{.symbol = "Tc", .mass = 97.90721},
	{.symbol = "Ru", .mass = 101.07},
	{.symbol = "Rh", .mass = 102.9055},
	{.symbol = "Pd", .mass = 106.42},
	{.symbol = "Ag", .mass = 107.8682},
	{.symbol = "Cd", .mass = 112.414},
	{.symbol = "In", .mass = 114.818},
	{.symbol = "Sn", .mass = 118.71},
	{.symbol = "Sb", .mass = 121.76},
	{.symbol = "Te", .mass = 127.6},
	{.symbol = "I", .mass = 126.90447},
	{.symbol = "Xe", .mass = 131.293},
	{.symbol = "Cs", .mass = 132.90545196},
	{.symbol = "Ba", .mass = 137.327},
	{.symbol = "La", .mass = 138.90547},
	{.symbol = "Ce", .mass = 140.116},
	{.symbol = "Pr", .mass = 140.90766},
	{.symbol = "Nd", .mass = 144.242},
	{.symbol = "Pm", .mass = 144.91276},
	{.symbol = "Sm", .mass = 150.36},
	{.symbol = "Eu", .mass = 151.964},
	{.symbol = "Gd", .mass = 157.25},
	{.symbol = "Tb", .mass = 158.92535},
	{.symbol = "Dy", .mass = 162.5},
	{.symbol = "Ho", .mass = 164.93033},
	{.symbol = "Er", .mass = 167.259},
	{.symbol = "Tm", .mass = 168.93422},
	{.symbol = "Yb", .mass = 173.045},
	{.symbol = "Lu", .mass = 174.9668},
	{.symbol = "Hf", .mass = 178.49},
	{.symbol = "Ta", .mass = 180.94788},
	{.symbol = "W", .mass = 183.84},
	{.symbol = "Re", .mass = 186.207},
	{.symbol = "Os", .mass = 190.23},
	{.symbol = "Ir", .mass = 192.217},
	{.symbol = "Pt", .mass = 195.084},
	{.symbol = "Au", .mass = 196.966569},
	{.symbol = "Hg", .mass = 200.592},
	{.symbol = "Tl", .mass = 204.38},
	{.symbol = "Pb", .mass = 207.2},
	{.symbol = "Bi", .mass = 208.9804},
	{.symbol = "Po", .mass = 209.0},
	{.symbol = "At", .mass = 210.0},
	{.symbol = "Rn", .mass = 222.0},
	{.symbol = "Fr", .mass = 223.0},
	{.symbol = "Ra", .mass = 226.0},
	{.symbol = "Ac", .mass = 227.0},
	{.symbol = "Th", .mass = 232.0377},
	{.symbol = "Pa", .mass = 231.03588},
	{.symbol = "U", .mass = 238.02891},
	{.symbol = "Np", .mass = 237.0},
	{.symbol = "Pu", .mass = 244.0},
	{.symbol = "Am", .mass = 243.0},
	{.symbol = "Cm", .mass = 247.0},
	{.symbol = "Bk", .mass = 247.0},
	{.symbol = "Cf", .mass = 251.0},
	{.symbol = "Es", .mass = 252.0},
	{.symbol = "Fm", .mass = 257.0},
	{.symbol = "Md", .mass = 258.0},
	{.symbol = "No", .mass = 259.0},
	{.symbol = "Lr", .mass = 262.0},
	{.symbol = "Rf", .mass = 267.0},
	{.symbol = "Db", .mass = 268.0},
	{.symbol = "Sg", .mass = 271.0},
	{.symbol = "Bh", .mass = 274.0},
	{.symbol = "Hs", .mass = 269.0},
	{.symbol = "Mt", .mass = 276.0},
	{.symbol = "Ds", .mass = 281.0},
	{.symbol = "Rg", .mass = 281.0},
	{.symbol = "Cn", .mass = 285.0},
	{.symbol = "Nh", .mass = 286.0},
	{.symbol = "Fl", .mass = 289.0},
	{.symbol = "Mc", .mass = 288.0},
	{.symbol = "Lv", .mass = 293.0},
	{.symbol = "Ts", .mass = 294.0},
	{.symbol = "Og", .mass = 294.0}
};