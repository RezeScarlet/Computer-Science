from sklearn.datasets import load_digits

digitos = load_digits()

imagens = digitos.imagens
rotulos = digitos.target

mascara = (rotulos == 0) | (rotulos == 1)

imagens = imagens[mascara]
rotulos = rotulos[mascara]

features = []
