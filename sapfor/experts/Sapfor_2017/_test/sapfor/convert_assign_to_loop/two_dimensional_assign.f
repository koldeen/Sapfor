	PROGRAM TWO_DIMENSIONAL_ASSIGN

	REAL A (100, 100), B (100, 90), C(10, 3)
 
	A(2:10, 3:30) = B(34:42, 43:70)
	B(10:20, 34:37) = C
	B(3:47, 2:10) = A(45:99, 2:10)
    
	END