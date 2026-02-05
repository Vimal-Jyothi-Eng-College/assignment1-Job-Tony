rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))

# Read first matrix
print("Enter elements of first matrix:")
matrix1 = []
for i in range(rows):
    row = list(map(int, input().split()))
    matrix1.append(row)

# Read second matrix
print("Enter elements of second matrix:")
matrix2 = []
for i in range(rows):
    row = list(map(int, input().split()))
    matrix2.append(row)

# Perform matrix addition
result = []
for i in range(rows):
    row = []
    for j in range(cols):
        row.append(matrix1[i][j] + matrix2[i][j])
    result.append(row)

# Display the result
print("Resultant matrix after addition:")
for row in result:
    print(row)
