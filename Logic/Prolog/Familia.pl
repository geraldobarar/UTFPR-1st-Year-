progenitor(Tereza, Maria).
progenitor(Tereza, Lucia).
progenitor(Tereza, Luiz).
progenitor(Tereza, Werner).
progenitor(joão, Maria).
progenitor(joão, Lucia).
progenitor(joão, Luiz).
progenitor(joão, Werner).
progenitor(Kurt, Antonio).
progenitor(Kurt, Patricia).
progenitor(Kurt, Matteo).
progenitor(Kurt, Rita).
progenitor(Anna, Antonio).
progenitor(Anna, Patricia).
progenitor(Anna, Matteo).
progenitor(Anna, Rita).
progenitor(Werner, Denis).
progenitor(Werner, Vitor).
progenitor(Margarida, Denis).
progenitor(Margarida, Vitor).
progenitor(Maria, Junior).
progenitor(Maria, Renan).
progenitor(Antonio, Junior).
progenitor(Antonio, Renan).
progenitor(Matteo, Felipe).
progenitor(Matteo, Luiza).
progenitor(Nilce, Felipe).
progenitor(Nilce, Luiza).

feminino(Tereza).
feminino(Anna).
feminino(Maria).
feminino(Lucia).
feminino(Patricia).
feminino(Rita).
feminino(Margarida).
feminino(Nilce).
feminino(Luiza).

masculino(Luiz).
masculino(joão).
masculino(Kurt).
masculino(Werner).
masculino(Antonio).
masculino(luiz).
masculino(Denis).
masculino(Vitor).
masculino(Junior).
masculino(Renan).
masculino(Felipe).

mae(Y, X) :-
    progenitor(X, Y),
    feminino(X).

avoM(X, Z) :-
    progenitor(X, Y),
    progenitor(Y, Z),
	masculino(X).

avoF(X, Z) :-
    progenitor(X, Y),
    progenitor(Y, Z),
	feminino(X).

irma(X, Y) :-
    progenitor(Z, X),
    progenitor(Z, Y),
    feminino(X).

irmao(X, Y) :-
    progenitor(Z, X),
    progenitor(Z, Y),
    masculino(X).

irmaos(X, Y) :-
    progenitor(Z, X),
    progenitor(Z, Y),
    X \= Y.

tia(X, Y) :-
    progenitor(Z, Y),    
    irma(X, Z),
    feminino(X),
	X \= Z.

tio(X, Y) :-
    progenitor(Z, Y),
    irmao(X, Z),
    masculino(X),
    X \= Z.

primo(X, Y) :-
    progenitor(Z, X),
    progenitor(W, Y),
    irmaos(Z, W),
    masculino(X).

prima(X, Y) :-
    progenitor(Z, X),
    progenitor(W, Y),
    irmaos(Z, W),
    feminino(X).

direto(X, Y) :-
    progenitor(X, Y).

indireto(X, Y) :-
    progenitor(Z, Y),
    (irmaos(X, Z); tio(X, Z); tia(X, Z)),
    X \= Z.

    
    






	
    

