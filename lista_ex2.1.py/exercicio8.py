''' 8. Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário 
e os dados necessários para executar cada operação.

Menu de opções:
1. Somar dois números.
2. Raiz quadrada de um número.
Digite a opção desejada: '''

print('Digite a opção desejada: \n')
print('1. Somar dois números\n') 
print('2. Raiz quadrada de um número\n')
resposta = input

if resposta == '1':
    numero1 = float(input('Digite um número: '))
    numero2 = float(input('Digite outro número: '))
    somar = numero1 + numero2
    print('A soma dos números é: ', somar)
    
elif resposta == '2':
    numero = float(input('Digite um número: '))
    raiz_quadrada = pow(numero, 2)
    print('A raiz quadrada do número é: ', raiz_quadrada)

else: 
    print('Opção inválida!')


