def balls_bowled(numberOfBalls):
    overs = int(numberOfBalls/6)
    balls = numberOfBalls - (overs*6)  
    overBalls = "Player bowled  "+str(overs)+"  overs  "+str(balls)+"  Balls "
    return overBalls
print(balls_bowled(int(input("Enter the number of balls "))))

    