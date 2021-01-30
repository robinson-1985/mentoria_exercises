''' 8. Faça um programa que receba o valor de um depósito e o valor da taxa de juros, 
calcule e mostre o valor do rendimento e o valor total depois do rendimento. '''

deposito = float(input('Declare o valo do deposito: R$ '))
taxa_juros = float(input('Declare o valor da taxa de juros: '))

rendimento = deposito * (taxa_juros/100)
valor_total = rendimento + deposito

print('O valor do rendimento é: R$ ', rendimento)
print('O valor total do rendimento é: R$ ', valor_total)


