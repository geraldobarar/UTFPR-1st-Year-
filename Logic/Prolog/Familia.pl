progenitor(francisca, cristina).
progenitor(francisca, claudia).
progenitor(francisca, luis).
progenitor(francisca, carlos).
progenitor(joão, cristina).
progenitor(joão, claudia).
progenitor(joão, luis).
progenitor(joão, carlos).
progenitor(francisco, geraldo).
progenitor(francisco, ana).
progenitor(francisco, luiz).
progenitor(francisco, marlene).
progenitor(franciscabaranoski, geraldo).
progenitor(franciscabaranoski, ana).
progenitor(franciscabaranoski, luiz).
progenitor(franciscabaranoski, marlene).
progenitor(carlos, denis).
progenitor(carlos, antoniel).
progenitor(denise, denis).
progenitor(denise, antoniel).
progenitor(cristina, junior).
progenitor(cristina, andre).
progenitor(geraldo, junior).
progenitor(geraldo, andre).
progenitor(luiz, felipe).
progenitor(luiz, francine).
progenitor(maria, felipe).
progenitor(maria, francine).

feminino(francisca).
feminino(franciscabaranoski).
feminino(cristina).
feminino(claudia).
feminino(ana).
feminino(marlene).
feminino(denise).
feminino(maria).
feminino(francine).

masculino(luis).
masculino(joão).
masculino(francisco).
masculino(carlos).
masculino(geraldo).
masculino(luiz).
masculino(denis).
masculino(antoniel).
masculino(junior).
masculino(andre).
masculino(felipe).

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

    
    






	
    

