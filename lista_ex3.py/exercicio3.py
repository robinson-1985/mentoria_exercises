''' 3. Escrever um algoritmo para determinar o consumo médio de um automóvel sendo
fornecida a distância total percorrida pelo automóvel e o total de combustível gasto.'''

distancia = float(input('Declare a distância percorrida em km: '))
combustivel = float(input('Declare os gasto de combustivel em l: '))

consumo_medio = distancia / combustivel

print(f'O consumo médio do automóvel foi {consumo_medio:.2f} km/l')