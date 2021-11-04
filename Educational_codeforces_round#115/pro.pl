parent(mary,kim).
parent(ross,mary).
parent(ross,keanu).
parent(tom,ann).
parent(mary,sam).
parent(maxwell,sam).
male(keanu).
male(ross).
female(sam).
female(kim).
male(maxwell).
uncle(Y, Z) :- male(Y), parent(A,Z), parent(B,A), parent(B,Y).

halfsister(Y,Z) :-female(Y),parent(A,Y), parent(A,Z), parent(B,Y), parent(C,Z),A= B,A = C, B=C.
