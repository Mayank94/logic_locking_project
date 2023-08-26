# Attacks on Locked Hardware Circuits

OEMs spend millions of dollars on R&D to design a hardware system be it a processor or a modular component. But there is a high chance that someone can steal their work when they send it to fabrication sites. To avoid these stealing eat away at their profits they lock their codes using various keys. 

We are the attacking team, coming from a poor nation who cannot afford to spend millions on R&D so we want to steal the ideas of the big tech giants for our research and studying purposes and not at all for profits

FOLDER CONTAINS

1. LOCKED C CODE
2. ORIGINAL CODE EXECUTABLE.


HOW TO RUN THE EXECUTABLE TO SEE THE INPUT-OUTPUT RELATION:
./executable <input>

For example:
./motion 1 2 3 4 5 6 7 8 9 10

OUTPUT:
312
1898
523

THE LOCKED C CODE IS A FUNCTION WHERE INPUTS CONSIST OF PRIMARY INPUTS (in1 to in10) ALONG WITH KEYINPUTS.
THE LOCKED C CODE FUNCTION HAS THREE OUTPUTS O1, O2, O3.

 
## Attempted Attacks

The attacks were based on SMT solvers which works on satisfiability and removing the dependencies.
The ML based Stochastic Search is the random algorithm which works on Exploration and Exploitation in the search space.
