% Matlab declarar matríz y uso de una función para clacular determinante.
% by KNY5

% esta es la forma de declarar una matríz
% a = [1 2 3; 4 5 6; 7 8 10]
% esta es la función para calcular determinantes
% que viene por defecto en matlab
% det(a)

% input es como en c++ cuando se declara que es la entrada de usuario cin.
matrix = input ("Exprese la matrix como: [n n n; m m m; o o o] : ")
result = det(matrix)

% plot() es la función para usar el kit de ploteo
plot(result)

% se nota la mínima cantidad de esfuerzo, debido a que matlab es
% un lenguaje de alto nivel que no requiere de manejo de memoria y demás.
