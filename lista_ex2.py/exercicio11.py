''' 11. Faça um programa que receba um número positivo e maior que zero, calcule 
e mostre:
a) o número digitado ao quadrado; 
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado. '''

import math
numero = float(input('Digite um número positivo e maior que zero: ')) # enter

quadrado = math.pow(numero, 2)  # data processing
cubo = math.pow(numero, 3)
raiz_quadrada = math.pow(numero, 2) 
raiz_cubica = math.pow(numero, 3)

print(f'\nO quadrado do número {numero} digitado é {quadrado}\n')
print(f'\nO cubo do número {numero} digitado é {cubo}\n')
print(f'\nA raiz quadrada do número {numero} é {raiz_quadrada}\n') # outing
print(f'\nA raiz cúbica de {numero} é {raiz_cubica}\n') # outing




