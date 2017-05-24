import numpy as np
import cv2
import copy

img1 = cv2.imread('screenshot.png', 0)

(thresh, im_bw) = cv2.threshold(img1, 128, 255, cv2.THRESH_BINARY | cv2.THRESH_OTSU)
img1 = cv2.threshold(img1, thresh, 255, cv2.THRESH_BINARY)[1]

structure1 = np.array([[1, 0, 0], [0, 1, 1], [0, 1, 1]])

img2 = cv2.filter2D(img1, -1,structure1)
cv2.imshow("oh", img1)
cv2.imshow("ohp0", img2)
cv2.waitKey(0)

