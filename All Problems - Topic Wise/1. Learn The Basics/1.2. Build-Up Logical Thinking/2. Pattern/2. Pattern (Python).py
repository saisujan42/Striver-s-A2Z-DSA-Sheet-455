def nForest(n:int) ->None:
    for i in range(n):
        for j in range(i + 1):
            print("* ", end = "")
        print()