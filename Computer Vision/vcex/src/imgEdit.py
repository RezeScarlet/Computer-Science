import cv2

imagem = cv2.imread('../data/kirby.jpg')

dimensoes = imagem.shape
num_elementos = imagem.size
tipo_imagem = imagem.dtype

print(f"Dimensão: {dimensoes}")
print(f"Tamanho.: {num_elementos}")
print(f"Tipo....: {tipo_imagem}")

cv2.namedWindow("Imagem", cv2.WINDOW_NORMAL)
cv2.resizeWindow('Imagem', 600, 600)
cv2.imshow("Imagem", imagem)
cv2.waitKey(0)
