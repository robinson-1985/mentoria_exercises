''' 5.Faça um programa que receba o salário de um funcionário e o percentual de aumento,
calcule e mostre o valor do aumento e o novo salário. '''

salario = float(input("Digite o valor do salário: R$ "))
percentual_de_aumento = float(input("Digite a porcentagem de aumento do salario: "))

valor_do_aumento = salario * (percentual_de_aumento / 100)
novo_salario = salario + valor_do_aumento

print("O novo salário do funcionário é: R$ ", novo_salario)