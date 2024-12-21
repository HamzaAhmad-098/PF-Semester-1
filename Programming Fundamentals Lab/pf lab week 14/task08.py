def make_rug(height,width,symbol):
    for c in range(0,int(height)):
        collect=""
        for i in range(0,int(width)):
            collect = collect+symbol
        print(collect)
make_rug(input("Enter the height of rug"),input("Enter the width of rug"),input("Enter the symbol"))