dicio = {'nome': 'João', 'idade': 25, 'cidade': 'São Paulo'}

dicio['profissão'] = 'Engenheiro'
print(f"Adiocamento: {dicio}")
dicio['idade'] = 26
print(f"Nova idade: {dicio}")
del dicio['cidade']
print(f"Remoção: {dicio}")