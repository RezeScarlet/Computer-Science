I = [12, 58,100, 145, 190,  210, 180, 130, 90, 40]
quantificado = []
amostragem = []

for i in I[::2]:
    amostragem.append( i )
    if  i >= 0 and i <= 51 :
        quantificado.append( 0 )
    if  i >= 52 and i <= 102: 
        quantificado.append( 1 )
    if  i >= 52 and i <= 102 :
        quantificado.append( 2 )
    if  i >= 103 and i <= 153 :
        quantificado.append( 3 )
    if  i >= 154 and i <= 204 :
        quantificado.append( 4 )
    if  i >= 205 and i <= 255 :
        quantificado.append( 5 )
print (quantificado) 
print (amostragem)
