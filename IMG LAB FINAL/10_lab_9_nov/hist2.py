import cv2
import numpy
import matplotlib.pyplot as plt
#import plotly.plotly as plt
im = cv2.imread('blurred1.jpg',0)

freq = [0]*256
size = im.shape
for i in range(0,size[0]):
	for j in range(0,size[1]):
		freq[im[i][j]] = freq[im[i][j]] + 1

xaxis = range(0,256)
plt.hist(im)
#plt.plot(xaxis, freq)
plt.show()
