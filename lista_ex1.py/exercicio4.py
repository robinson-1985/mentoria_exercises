''' 4. Faça um programa que receba o salário de um funcionário, calcule e mostre o novo 
salário, sabendo-se que este sofreu um aumento de 25%. '''

salario = float(input("Digite o valor do salario: R$ "))

aumento_salario = (salario * 0.25)
novo_salario = salario + aumento_salario

print("O valor do novo salario será: R$ ", novo_salario)