''' 8. Elaborar um algoritmo que efetue a apresentação do valor da conversão em real 
(R$) de um valor lido em dólar (US$). O algoritmo deverá solicitar o valor da cotação 
do dólar e também a quantidade de dólares disponíveis com o usuário.'''

cotacao_dolar = float(input('Declare a cotação do dólar: $ '))
quantidade_dolar = float(input('Declare a quantidade de dólares disponíveis: $ '))

conversao = quantidade_dolar * cotacao_dolar

print(f'O valor de conversão de {quantidade_dolar} dólares em real são {conversao:.2f} reais')
