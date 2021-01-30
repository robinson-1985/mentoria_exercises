''' 13. Escreva uma expressão para determinar se uma pessoa deve ou não pagar imposto. 
Considera que pagam imposto pessoas cujo salário é maior que R$ 1.200,00. '''

salario = float(input('Declare o salario: R$ '))

if salario <= 1200:
    print('Não paga imposto\n')
else:
    print('Paga imposto\n') 