
import time


def determinantOfMatrix(mat):

	ans = (mat[0][0] * (mat[1][1] * mat[2][2] -
						mat[2][1] * mat[1][2]) -
		mat[0][1] * (mat[1][0] * mat[2][2] -
						mat[1][2] * mat[2][0]) +
		mat[0][2] * (mat[1][0] * mat[2][1] -
						mat[1][1] * mat[2][0]))
	return ans

def findSolution(coeff):

	d = [[coeff[0][0], coeff[0][1], coeff[0][2]],
		[coeff[1][0], coeff[1][1], coeff[1][2]],
		[coeff[2][0], coeff[2][1], coeff[2][2]]]
	

	d1 = [[coeff[0][3], coeff[0][1], coeff[0][2]],
		[coeff[1][3], coeff[1][1], coeff[1][2]],
		[coeff[2][3], coeff[2][1], coeff[2][2]]]
	
	d2 = [[coeff[0][0], coeff[0][3], coeff[0][2]],
		[coeff[1][0], coeff[1][3], coeff[1][2]],
		[coeff[2][0], coeff[2][3], coeff[2][2]]]
	

	d3 = [[coeff[0][0], coeff[0][1], coeff[0][3]],
		[coeff[1][0], coeff[1][1], coeff[1][3]],
		[coeff[2][0], coeff[2][1], coeff[2][3]]]


	D = determinantOfMatrix(d)
	D1 = determinantOfMatrix(d1)
	D2 = determinantOfMatrix(d2)
	D3 = determinantOfMatrix(d3)
	
	print("D is : ", D)
	print("D1 is : ", D1)
	print("D2 is : ", D2)
	print("D3 is : ", D3)

	
	if (D != 0):
	
		x = D1 / D
		y = D2 / D
		
		z = D3 / D
		
		print("Value of x is : ", x)
		print("Value of y is : ", y)
		print("Value of z is : ", z)

	else:
		if (D1 == 0 and D2 == 0 and
			D3 == 0):
			print("Infinite solutions")
		elif (D1 != 0 or D2 != 0 or
			D3 != 0):
			print("No solutions")
start = time.time()

if __name__ == "__main__":

	coeff = [[4, 1, 2, 4],[3, 5, 1, 7],[1, 1, 3, 3]]

	findSolution(coeff)
end = time.time()
print("\nTime of execution using cramer's rule : ",(end - start)*10**3, "ms")

